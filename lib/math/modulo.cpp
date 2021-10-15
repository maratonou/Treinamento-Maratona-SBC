template<int mod>
struct MOD {
	int val;
	
	MOD() {val = 0;}
	MOD(int val) : val {val} {}
	
	i64 exp(i64 n, int p) {
		i64 ans = 1;
		for(; p > 0; p >>= 1) {
			if(p & 1) ans = ans * n % mod;
			n = n * n % mod;
		}
		return ans;
	}
	
	MOD operator^(int p) {
		return MOD(exp(val, p));
	}
	
	MOD& operator^=(int p) {
		val = exp(val, p);
		return *this;
	}

	MOD operator+(MOD x) {
		int ans = val + x.val;
		if(ans >= mod) ans -= mod;
		return {ans};
	}
	
	MOD operator-(MOD x) {
		int ans = val - x.val;
		if(ans < 0) ans += mod;
		return {ans};
	}
	
	MOD& operator+=(MOD x) {
		val += x.val;
		if(val >= mod) val -= mod;
		return *this;
	}
	
	MOD& operator-=(MOD x) {
		val -= x.val;
		if(val < 0) val += mod;
		return *this;
	}
	
	MOD operator*(MOD x) {
		return MOD((i64)val * x.val % mod);
	}

	MOD& operator*=(MOD x) {
		val = (i64)val * x.val % mod;
		return *this;
	}
	
	MOD operator/(MOD x) {
		return MOD(val * exp(x.val, mod - 2) % mod);
	}
	
	MOD& operator/=(MOD x) {
		val = val * exp(x.val, mod - 2) % mod;
		return *this;
	}
	
	MOD operator+(int x) {
		int ans = val + x;
		if(ans >= mod) ans -= mod;
		if(ans < 0) ans += mod;
		return {ans};
	}
	
	MOD operator-(int x) {
		int ans = val - x;
		if(ans < 0) ans += mod;
		if(ans >= mod) ans -= mod;
		return {ans};
	}
	
	MOD& operator+=(int x) {
		val += x;
		if(val >= mod) val -= mod;
		if(val < 0) val += mod;
		return *this;
	}
	
	MOD& operator-=(int x) {
		val -= x;
		if(val < 0) val += mod;
		if(val >= mod) val -= mod;
		return *this;
	}
	
	MOD operator*(int x) {
		i64 ans = (i64)val * x % mod;
		if(ans < 0) ans += mod;
		return MOD(ans);
	}
	
	MOD& operator*=(int x) {
		val = (i64)val * x % mod;
		if(val < 0) val += mod;
		return *this;
	}
	
	MOD operator/(int x) {
		return MOD(val * exp(x, mod - 2) % mod);
	}
	
	MOD& operator/=(int x) {
		val = val * exp(x, mod - 2) % mod;
		return *this;
	}
};

template<int mod>
ostream& operator<<(ostream& os, MOD<mod> v) {
	os << v.val;
	return os;
}

template<int mod>
istream& operator>>(istream& is, MOD<mod>& v) {
	is >> v.val;
	return is;
}
