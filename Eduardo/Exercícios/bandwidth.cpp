//Problema de fluxo maximo. Encontrado em: https://icpcarchive.ecs.baylor.edu/index.php?option=onlinejudge&page=show_problem&problem=3221

#include <vector>
#include <iostream>

using namespace std;

#define inf 1001

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
    int n, network = 1;

    while(cin >> n){
        if(!n)
            break;

        int m,s,t;

        cin >> s >> t >> m;    

        edge edges[2*m];
        vector<int> Adj[n];
        int seen[n];

        for (int i = 0; i < n; i++)
            seen[i] = 0;    
        
        for (int i = 0; i < m; i++)
        {
            int a, b, band;

            cin >> a >> b >> band;

            add_aresta(a-1,b-1,band,band,edges,Adj);
        }
        
        int flow = 0, tempo = 1;
        while(int a = dfs(s-1,t-1,inf, edges, Adj, seen, tempo)){
            flow += a;
            tempo++;
        }

        cout << "Network " << network << endl;
        cout << "The bandwidth is " << flow << endl;
    }

    return 0;
}

