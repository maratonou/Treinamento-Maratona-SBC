using ll = long long;

int gcd(int a, int b, ll& x, ll& y) {
	if(!b) {
		x = 1;
		y = 0;
		return a;
	}
	ll _x, _y;
	int g = gcd(b, a % b, _x, _y);
	y = _x - (a / b) * _y;
	x = _y;	
	return g;
}
