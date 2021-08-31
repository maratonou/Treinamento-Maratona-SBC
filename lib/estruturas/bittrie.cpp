template<int bits>
struct BitTrie {
	vector<array<int, 2>> t;
	vector<int> cnt;
	int nos = 1;
	
	BitTrie(int n) {
		t.resize(1 + n * bits);
		cnt.resize(1 + n * bits);
		t[0].fill(-1);
		cnt[0] = 0;
	}
	
	void push(int x) {
		if(count(x)) return;
		int i = 0;
		++cnt[0];
		for(int k = bits - 1; k >= 0; --k) {
			int bit = (x & 1 << k) != 0;
			if(t[i][bit] == -1) {
				t[nos].fill(-1);
				t[i][bit] = nos++;
			}
			i = t[i][bit];
			++cnt[i];
		}
	}
	
	int count(int x) {
		int i = 0;
		for(int k = bits - 1; k >= 0; --k) {
			int bit = (x & 1 << k) != 0;
			if(t[i][bit] == -1) return 0;
			i = t[i][bit];
		}
		return cnt[i];
	}
	
	void remove(int x) {
		if(!count(x)) return;
		int i = 0;
		--cnt[0];
		for(int k = bits - 1; k >= 0; --k) {
			int bit = (x & 1 << k) != 0, p = i;
			i = t[i][bit];
			if(--cnt[i] == 0) t[p][bit] = -1;
		}
	}
	
	int xor_min(int x) {
		int i = 0, y = 0;
		for(int k = bits - 1; k >= 0; --k) {
			int bit = (x & 1 << k) != 0;
			if(t[i][bit] != -1) i = t[i][bit];
			else {
				y |= 1 << k;
				i = t[i][bit ^ 1];
			}
		}
		return y;	
	}
};
