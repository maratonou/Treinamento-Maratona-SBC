template<class T>
struct SegTree {
	vector<T> st;
	int n;
	
	void create(vector<T>& a, int lo, int hi, int no = 1) {
		if(lo == hi) st[no] = a[lo];
		else {
			int mid = (lo + hi) / 2;
			create(a, lo, mid, 2 * no);
			create(a, mid + 1, hi, 2 * no + 1);
			st[no] = st[2 * no] + st[2 * no + 1];
		}
	}
	
	SegTree() {n = 0;}
	
	SegTree(int n) : n {n} {
		int K = 1 << (33 - __builtin_clz(n));
		st.assign(K, 0);
	}
	
	SegTree(vector<T>& a) {
		n = a.size();
		st.resize(1 << (33 - __builtin_clz(n)));
		create(a, 0, n - 1);
	}
	
	void upd(int k, T v, int lo, int hi, int no = 1) {
		st[no] += v;
		if(lo != hi) {
			int mid = (lo + hi) >> 1;
			k <= mid ? upd(k, v, lo, mid, no << 1) : upd(k, v, mid + 1, hi, (no << 1) | 1);
		}
	}
	
	T query(int l, int r, int lo, int hi, int no = 1) {
		if(l > r) return 0;
		else if(r - l == hi - lo) return st[no];
		int mid = (lo + hi) >> 1;
		T L = query(l, min(r, mid), lo, mid, no << 1);
		T R = query(max(mid + 1, l), r, mid + 1, hi, (no << 1) | 1);
		return L + R;
	}
	
	void upd(int k, T v) {
		upd(k, v, 0, n - 1);
	}
	
	T query(int l, int r) {
		return query(l, r, 0, n - 1);
	}
};
