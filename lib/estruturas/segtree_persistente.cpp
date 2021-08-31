struct SegTree {
	vector<int> roots, left, right, cnt;
	int nos {}, n;
	
	int init(int lo, int hi) {
		int id = nos++;
		cnt[id] = 0;
		if(lo != hi) {
			int mid = (lo + hi) / 2;
			left[id] = init(lo, mid);
			right[id] = init(mid + 1, hi);
		}
		return id;
	}
	
	int upd(int k, int lo, int hi, int root) {
		int id = nos++;
		cnt[id] = 1 + cnt[root];
		if(lo != hi) {
			int mid = (lo + hi) / 2;
			if(k <= mid) {
				left[id] = upd(k, lo, mid, left[root]);
				right[id] = right[root];
			} else {
				left[id] = left[root];
				right[id] = upd(k, mid + 1, hi, right[root]);
			}
		}
		return id;
	}
	
	auto kth(int k, int lo, int hi, int l, int r) {
		if(lo == hi) return make_pair(lo, cnt[r] - cnt[l]);
		int mid = (lo + hi) / 2, ll = left[l], lr = left[r];
		return k <= cnt[lr] - cnt[ll] ? kth(k, lo, mid, ll, lr) :
		kth(k - cnt[lr] + cnt[ll], mid + 1, hi, right[l], right[r]);
	}
	
	auto kth(int k, int l, int r) {
		return kth(k, 0, n - 1, roots[l - 1], roots[r]);
	}
		
	SegTree(vector<int>& a) {
		n = size(a);
		
		int lg = 33 - __builtin_clz(n);
		int sz = (1 << lg) + n * lg;
		
		left.resize(sz);
		right.resize(sz);
		cnt.resize(sz, 0);
		roots.resize(n + 1);
		
		roots[0] = init(0, n - 1);
		for(int i = 1; i <= n; ++i) roots[i] = upd(a[i - 1], 0, n - 1, roots[i - 1]);
	}
};
