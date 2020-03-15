//Problema de fluxo maximo. Encontrado em: https://www.spoj.com/problems/MTOTALF/

#include <vector>
#include <iostream>

using namespace std;

#define inf 100
#define N 26

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
    int M;

    cin >> M;    

    edge edges[2*M];
    vector<int> Adj[N];
    int seen[N];

    for (int i = 0; i < N; i++)
        seen[i] = 0;    
    
    for (int i = 0; i < M; i++)
    {
        char a,b;
        int cp;

        cin >> a >> b >> cp;

        if( a >= 'a' && a <= 'z')
            a = a - 'a' + 'A';
        
        if( a >= 'a' && a <= 'z')
           b = b - 'a' + 'A';

        add_aresta(a-'A',b-'A',cp,0,edges,Adj);
    }
    
    int flow = 0, tempo = 1;
    while(int a = dfs(0,'Z'-'A',inf, edges, Adj, seen, tempo)){
        flow += a;
        tempo++;
    }

    cout << flow << endl;

    return 0;
}

