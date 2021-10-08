#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    int n;
    cin >> n;
    vector<double> ascii(128, 0);
    vector<double> newspaperValue(128, 0);
    cout << fixed << setprecision(2);
    for (int i = 0; i < n; i++)
    {
        char ch;
        double value;
        cin >> ch >> value;
        ascii[ch] = value/100.00;
    }

    int m;
    cin >> m;
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        string s;
        getline(cin, s);
        
        for (int k = 0; k < s.size(); k++)
        {
            newspaperValue[ s[k] ] += ascii[ s[k] ];
        }
    }

    double total = 0.00;
    for (int i = 0; i < 128; i++)
    {
        total += newspaperValue[i];
    }
    cout << total << "$\n";
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    int t = 1;
    cin >> t;
    while(t-- ) solve(); 
 	return 0;
}