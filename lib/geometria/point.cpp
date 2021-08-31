const double eps = 1e-10;

template<class T>
struct point {
	T x, y;
	
	point() {x = y = 0;}
	point(T x, T y) : x {x}, y {y} {}
	
	point operator+(point p) {
		p.x += x;
		p.y += y;
		return p;
	}
	
	point operator-(point p) {
		p.x -= x;
		p.y -= y;
		return p;
	}
	
	point operator*(T alpha) {
		return {x * alpha, y * alpha};
	}
	
	point operator/(T alpha) {
		return {x / alpha, y / alpha};
	}
	
	point& operator+=(point p) {
		x += p.x;
		y += p.y;
		return *this;
	}
	
	point& operator-=(point p) {
		x -= p.x;
		y -= p.y;
		return *this;
	}
	
	point& operator*=(T alpha) {
		x *= alpha;
		y *= alpha;
		return *this;
	}
	
	point& operator/=(T alpha) {
		x /= alpha;
		y /= alpha;
		return *this;
	}
	
	T cross(point p) {
		return x * p.y - y * p.x;
	}
	
	T dot(point p) {
		return x * p.x + y * p.y;
	}
	
	bool operator==(point p) {
		return fabs(x - p.x) < eps && fabs(y - p.y) < eps;
	}
	
	bool operator!=(point p) {
		return !(*this == p);
	}
	
	double dist(point p) {
		return hypot(x - p.x, y - p.y);
	}
	
	point operator-(int) {
		return {-x, -y};
	}
};

template<class T>
ostream& operator<<(ostream& os, point<T> p) {
	os << p.x << ' ' << p.y;
	return os;
}

template<class T>
double abs(point<T> p) {
	return hypot(p.x, p.y);
}

template<class T>
point<double> norm(point<T> p) {
	double d = abs(p);
	return {p.x / d, p.y / d};
}

template<class T>
point<double> rotate(point<T> p, double theta) {
	return {p.x * cos(theta) - p.y * sin(theta), p.x * sin(theta) + p.y * cos(theta)};
}

template<class T>
T det(point<T> a, point<T> b, point<T> c) {
	return b.x * c.y - b.y * c.x
	      -a.x * (c.y - b.y)
	      +a.y * (c.x - b.x);
}

template<class T>
bool cw(point<T> a, point<T> b, point<T> c) {
	return det(a, b, c) < 0;
}

template<class T>
bool ccw(point<T> a, point<T> b, point<T> c) {
	return det(a, b, c) > 0;
}
