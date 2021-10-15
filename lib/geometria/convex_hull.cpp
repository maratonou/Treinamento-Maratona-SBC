using ii = pair<int, int>;

int det(ii a, ii b, ii c) {
	return b.first * c.second - b.second * c.first
		  - a.first * (c.second - b.second) 
		  + a.second * (c.first - b.first);
}

auto convexHull(vector<ii>& p) {
	int n = size(p);
	vector<ii> upper, lower;
	
	sort(p.begin(), p.end());
	
	upper.push_back(p[0]);
	lower.push_back(p[0]);
	
	for(int i = 1; i < n; ++i) {
		while((int)size(upper) >= 2) {
			int n = size(upper);
			if(det(upper[n - 2], upper[n - 1], p[i]) < 0) break;
			upper.pop_back();
		}
		
		while((int)size(lower) >= 2) {
			int n = size(lower);
			if(det(lower[n - 2], lower[n - 1], p[i]) > 0) break;
			lower.pop_back();
		}
		
		upper.push_back(p[i]);
		lower.push_back(p[i]);
	}
	
	for(int k = (int)lower.size() - 2; k > 0; --k) upper.push_back(lower[k]);
	return upper;
}
