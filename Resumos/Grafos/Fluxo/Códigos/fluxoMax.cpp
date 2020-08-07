#include <vector>
#include <iostream>

using namespace std;

#define inf 100

int cur = 0;

typedef struct cd{
        int to, F, C;
}edge;

//Aresta direta smp na posicao par
void add_aresta(int a, int b, int cp, int rc, edge* edges, vector<int>* adj){
	edges[cur].to = b;
	edges[cur].F = 0;
	edges[cur].C = cp;
	adj[a].push_back(cur++);
	edges[cur].to = a;
	edges[cur].F = 0;
	edges[cur].C = rc;
	adj[b].push_back(cur++);
}

int min(int a, int b){
    return a < b? a : b;
}

int dfs(int s, int t, int f, edge* edges, vector<int>* Adj, int* seen, int tempo){
	if(s == t) return f;	
	seen[s] = tempo;	

	for(int e : Adj[s]){
		if(seen[edges[e].to] < tempo && edges[e].C - edges[e].F > 0)
			if(int a = dfs(edges[e].to,t,min(f,edges[e].C - edges[e].F), edges, Adj, seen, tempo)){
				edges[e].F += a;
				edges[e^1].F -= a;
				return a;
			}
	}

	return 0;
}

int main(){
    int M, N;

    cin >> N >> M;    

    edge edges[2*M];
    vector<int> Adj[N];
    int seen[N];

    for (int i = 0; i < N; i++)
        seen[i] = 0;    
    
    for (int i = 0; i < M; i++)
    {
        int a,b,cp;

        cin >> a >> b >> cp;

        add_aresta(a-1,b-1,cp,0,edges,Adj);
    }
    
    int flow = 0, tempo = 1;
    while(int a = dfs(0,N-1,inf, edges, Adj, seen, tempo)){
        flow += a;
        tempo++;
    }

    cout << flow << endl;
}

