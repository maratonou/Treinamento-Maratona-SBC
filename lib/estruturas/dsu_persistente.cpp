struct DSU {
	vector<int> pai, rank;
	
	DSU() {}
	
	DSU(int n) {
		pai.resize(n);
		rank.assign(n, 0);
		iota(pai.begin(), pai.end(), 0);
	}
	
	int findSet(int v) {
		return v == pai[v] ? v : findSet(pai[v]);
	}
	
	void join(int a, int b) {
		a = findSet(a);
		b = findSet(b);
		if(a == b) return;
		else if(rank[a] > rank[b]) swap(a, b);
		pai[a] = b;
		rank[b] += rank[a] == rank[b];
	}
};

\\ do tipo que desfaz a ultima operação

using T = tuple<int, int, int>;

struct DSU {
	vector<int> p, rank;
	stack<T> st;
	
	DSU() {}
	
	DSU(int n) {
		p.resize(n);
		rank.assign(n, 0);
		iota(p.begin(), p.end(), 0);
	}
	
	int findSet(int v) {
		return v == p[v] ? v : findSet(p[v]);
	}
	
	bool join(int u, int v) {
		u = findSet(u);
		v = findSet(v);
		if(u == v) return false;
		else if(rank[u] > rank[v]) swap(u, v);
		st.push({u, v, rank[v]});
		p[u] = v;
		rank[v] += rank[u] == rank[v];
		return true;
	}
	
	void backward() {
		if(st.empty()) return;
		int u, v, r;
		tie(u, v, r) = st.top();
		st.pop();
		p[u] = u;
		rank[v] = r;
	}
};
