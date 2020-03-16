#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> heap;

typedef struct cd{
    int to, cost;
}edge;

void add_aresta(int a, int b, int cost, edge* edges, vector<int>* adj){
    static int cur = 0;

    edges[cur].to = b;
    edges[cur].cost = cost;
    adj[a].push_back(cur++);

    edges[cur].to = a;
    edges[cur].cost = cost;
    adj[b].push_back(cur++);
}

void add_heap(int id, edge* edges){
    heap.push_back(id);    

    for (int i = heap.size() - 1; i > 0;)
    {
        int pai = floor((i-1)/2);

        //cout << i << "-" << pai << endl;
        //cout <<  edges[heap[pai]].cost << "/" << edges[heap[i]].cost << endl;

        if( edges[heap[pai]].cost > edges[heap[i]].cost ){
            //cout << "trocando\n";

            heap[i] = heap[pai];
            heap[pai] = id;

            i = pai;
        }

        else
            break;
    }
}

int first_heap(edge* edges){
    int tam = heap.size();

    if(!tam) return 0;

    int id = heap[0];

    for (int i = 0; 2*i < tam;)
    {
        int f, f1, f2;

        f = f1 = 2*i + 1;
        f2 = f1 + 1;

        if( f2 < tam)
            if( edges[heap[f2]].cost > edges[heap[f1]].cost)
                f = f2;

        heap[i] = heap[f];
        heap[f] = id;

        i = f;
    }

    heap.pop_back();

    return id;    
}

int prim(int* seen, edge* edges, vector<int>* adj, int s, int n){
    seen[s] = 1;

    for (int i = 0; i < n; i++) if(seen[i] == 1 && i == n-1) return 0;    

    for(int i : adj[s]){
        if(!seen[edges[i].to]){
            add_heap(i,edges);
        }    
    }

    int prox = first_heap(edges);

    return edges[prox].cost + prim(seen,edges,adj,edges[prox].to,n);    
}

int main(){
    int n, m;

    cin >> n >> m;

    int seen[n];
    vector<int> adj[n];
    edge edges[2*m];

    for (int i = 0; i < n; i++)
        seen[i] = 0;    

    for (int i = 0; i < m; i++)
    {
        int a,b,cost;

        cin >> a >> b >> cost;

        add_aresta(a-1,b-1,cost,edges,adj);
    }
    
    int mst = prim(seen,edges,adj,0,n);

    cout << mst << endl;

    return 0;
}