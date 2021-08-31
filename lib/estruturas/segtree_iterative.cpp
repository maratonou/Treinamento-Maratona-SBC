template<class T>
struct SegTree {
	vector<T> st;
	int n;
	
	SegTree() {n = 0;}
	
	SegTree(int n) : n {n} {
		st.assign(2 * n + 1, 0);
	}
	
	SegTree(vector<T> a) {
		n = a.size();
		st.resize(2 * n + 1);
		for(int k = n; k < 2 * n; ++k) st[k] = a[k - n];
		for(int k = n - 1; k > 0; --k) st[k] = st[2 * k] + st[2 * k + 1];
	}
	
	void upd(int k, T x) {
		k += n;
		st[k] = x;
		for(k /= 2; k > 0; k /= 2) st[k] = st[k] = st[2 * k] + st[2 * k + 1];
	}
	
	T query(int l, int r) {
		T ans {};
		l += n, r += n;
		for(l /= 2, r /= 2; l <= r; l /= 2, r /= 2) {
			if(l & 1) ans += st[l++];
			if(~r & 1) ans += st[r--];
		}
		return ans;
	}
};
