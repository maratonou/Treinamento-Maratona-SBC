template<class T>
struct SparseTable {
	vector<vector<T>> sp;
	int n, m;
	
	SparseTable() {}
	
	SparseTable(vector<T>& a) {
		n = a.size();
		m = 32 - __builtin_clz(n);
		
		sp = vector<vector<T>>(m, vector<T>(n));
		
		for(int i = 0; i < n; ++i) sp[0][i] = a[i];
		
		for(int i = 1; i < m; ++i)
		for(int j = 0; j + (1 << i) - 1 < n; ++j)
			sp[i][j] = max(sp[i - 1][j], sp[i - 1][j + (1 << (i - 1))]);
	}
	
	T query(int l, int r) {
		int k = 31 - __builtin_clz(r - l + 1);
		return max(sp[k][l], sp[k][r - (1 << k) + 1]);
	}
};
