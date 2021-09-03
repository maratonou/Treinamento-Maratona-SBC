template<class T>
struct LazyPropagation {
	vector<T> st, lazy;
	vector<bool> marked;
	int n;
	
	void create(vector<T>& a, int lo, int hi, int no = 1) {
		lazy[no] = 0;
		marked[no] = false;
		if(lo == hi) st[no] = a[lo];
		else {
			int mid = (lo + hi) >> 1;
			create(a, lo, mid, no << 1);
			create(a, mid + 1, hi, (no << 1) | 1);
			st[no] = max(st[no << 1], st[(no << 1) | 1]);
		}
	}
	
	LazyPropagation() {n = 0;}
	
	LazyPropagation(int n) : n {n} {
		int K = 1 << (33 - __builtin_clz(n));
		st.assign(K, 0);
		lazy.assign(K, 0);
		marked.assign(K, false);
	}
	
	LazyPropagation(vector<T>& a) {
		n = a.size();
		int K = 1 << (33 - __builtin_clz(n));
		st.resize(K);
		lazy.resize(K);
		marked.resize(K);
		create(a, 0, n - 1);
	}
	
	void push(int no) {
		if(!marked[no]) return;
		int left = no << 1, right = (no << 1) | 1;
		st[left].first += lazy[no];
		st[right].first += lazy[no];
		lazy[left] += lazy[no];
		lazy[right] += lazy[no];
		marked[left] = marked[right] = true;
		lazy[no] = 0;
		marked[no] = false;
	}
	
	void upd(int l, int r, T v, int lo, int hi, int no = 1) {
		if(l > r) return;
		else if(r - l == hi - lo) {
			st[no].first += v;
			lazy[no] += v;
			marked[no] = true;
		} else {
			int mid = (lo + hi) >> 1;
			push(no);
			upd(l, min(r, mid), v, lo, mid, no << 1);
			upd(max(mid + 1, l), r, v, mid + 1, hi, (no << 1) | 1);
			st[no] = max(st[no << 1], st[(no << 1) | 1]);
		}
	}
	
	T query(int l, int r, int lo, int hi, int no = 1) {
		if(l > r) return {-1, -1};
		else if(r - l == hi - lo) return st[no];
		int mid = (lo + hi) >> 1;
		push(no);
		T L = query(l, min(r, mid), lo, mid, no << 1);
		T R = query(max(mid + 1, l), r, mid + 1, hi, (no << 1) | 1);
		return max(L, R);
	}
	
	void upd(int l, int r, T v) {
		upd(l, r, v, 0, n - 1);
	}
	
	T query(int l, int r) {
		return query(l, r, 0, n - 1);
	}
};
