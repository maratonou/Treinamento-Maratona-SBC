
const int N = 1e6, mod = 1e9 + 7;

long long fat[N], inv[N], inv_fat[N];

long long C(int n, int k) {
	return fat[n] * inv_fat[k] % mod * inv_fat[n - k] % mod;
}

for(int k = 0; k < 2; ++k) fat[k] = inv[k] = inv_fat[k] = 1;	

for(int k = 2; k <= n; ++k) {
	fat[k] = k * fat[k - 1] % mod;
	inv[k] = -(mod / k) * inv[mod % k] % mod;
	inv_fat[k] = inv[k] * inv_fat[k - 1] % mod;
}
