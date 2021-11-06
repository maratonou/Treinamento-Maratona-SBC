#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void solve()
{
    int n;
    vector<vi> students(n);
    vi weekdays(5, 0);
    for (vi &student: students)
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> student[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            
        }
    }    
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}