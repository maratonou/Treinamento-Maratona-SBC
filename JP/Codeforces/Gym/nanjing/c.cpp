#include "bits/stdc++.h"
 
using namespace std;
 
using i64 = long long;
using u64 = unsigned long long;
using i32 = int;
using u32 = unsigned;
using i16 = short;
using u16 = unsigned short;
using ld = long double;
using ii = pair<int, int>;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n), suf(n + 1, 0);
    map<int, int> cnt, frq, SUF;

    for(int& v : a) {
        cin >> v;
        ++cnt[v];
    }

    int X = 0, ans = 0;

    for(auto [_, b] : cnt) X = max(X, b);


    if(k == 0) {
        cout << X << '\n';
        return;
    }

    for(int i = 0; i < n; ++i) {
        suf[i] = cnt[a[i]] - frq[a[i]] + frq[a[i] - k];
        ++frq[a[i]];
    }

    for(int i = n - 1; i >= 0; --i) {
        suf[i] = max(suf[i], SUF[a[i]]);
        SUF[a[i]] = max(suf[i], SUF[a[i]]);
    }

    frq.clear();

    for(int i = 0; i < n; ++i) {
        ans = max(ans, SUF[a[i] + k] - frq[a[i]] + frq[a[i] + k]);
        ++frq[a[i]];
    }

    cout << max(ans, X) << '\n';
}
 
int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
     return 0;
}