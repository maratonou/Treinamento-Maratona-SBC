#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

void solve()
{
    while(true)
    {
        int s, b;
        cin >> s >> b;
        if (!s)
            return;
        vector<int>soldiers(s+1, 1);

        for (int i = 0; i < b; i++)
        {
            int l, r;
            cin >> l >> r;
            for (int j = l; j <= r; j++)
            {
                soldiers[j] = 0;
            }

            int k = l-1;
            while (k > 0 && !soldiers[k]) k--;
            if (!k)
            {
                cout << "* ";
            }
            else
            {
                cout << k << " ";
            }

            k = r+1;
            while (k < s+1 && !soldiers[k]) k++;
            if (k > s)
            {
                cout << "*\n";
            }
            else
            {
                cout << k << "\n";
            }

        }
        cout << "-\n";
    }
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve(); 
 	return 0;
}