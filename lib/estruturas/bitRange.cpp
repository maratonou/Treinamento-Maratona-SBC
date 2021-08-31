template<class T>
struct BIT {
	vector<T> bit;
	
	BIT() {}
	
	BIT(int n) {
		bit.assign(n + 1, 0);
	}
	
	void upd(int k, T x) {
		for(++k; k < int(bit.size()); k += k & -k) bit[k] += x;
	}
	
	T query(int k) {
		T ans {};
		for(++k; k > 0; k -= k & -k) ans += bit[k];
		return ans;
	}
	
	T query(int l, int r) {
		if(l > r) return (T)0;
		return query(r) - query(l - 1);
	}
};

template<class T>
struct BITRange {
	BIT<T> X, Y;
	
	BITRange(int n) {
		X = BIT<T>(n);
		Y = BIT<T>(n);
	}
	
	void upd(int l, int r, T x) {
		X.upd(l, (l - 1) * x);
		X.upd(r + 1, -r * x);
		Y.upd(l, x);
		Y.upd(r + 1, -x);
	}
	
	T prefix(int k) {
		return k * Y.query(k) - X.query(k);
	}
	
	T query(int l, int r) {
		return prefix(r) - prefix(l - 1);
	}
};
