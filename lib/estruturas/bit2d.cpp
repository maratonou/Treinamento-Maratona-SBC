template<class T>
struct BIT {
	vector<vector<T>> bit;
	int n, m;
	BIT(int n, int m) : n {n}, m {m} {
		bit = vector<vector<T>>(n + 1, vector<T>(m + 1, 0));
	}
	void upd(int i, int j, T v) {
		++i, ++j;
		for(int x = i; x <= n; x += x & -x)
		for(int y = j; y <= m; y += y & -y)
			bit[x][y] += v;
	}
	T query(int i, int j) {
		T ans {};
		++i, ++j;
		for(int x = i; x > 0; x -= x & -x)
		for(int y = j; y > 0; y -= y & -y)
			ans += v;
		return ans;
	}
	T query(int x0, int y0, int x1, int y1) {
		return query(x1, y1) - query(x1, y0 - 1) - query(x0 - 1, y1) + query(x0 - 1, y0 - 1); 
	}
};
