#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

vector<string> buildPhone()
{
    vector<string> phone (10, "");
    phone[2] = "abc";
    phone[3] = "def";
    phone[4] = "ghi";
    phone[5] = "jkl";
    phone[6] = "mno";
    phone[7] = "pqrs";
    phone[8] = "tuv";
    phone[9] = "wxyz";

    return phone;
}

int sumUp(vi bits)
{
    int ans = 0;
    int size = bits.size();
    for (int i = 0; i < size; i++)
    {
        if (bits[i]) ans++;
    }
    return ans;
}

void solve()
{
    string n; 
    cin >> n;
    int m;
    cin >> m;
    vector<string> lista (m, "");
    vector<string> phone = buildPhone();
    for (int i = 0; i < m; i++)
    {
        cin >> lista[i];
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        // cout << "a1\n";
        if (lista[i].size() == n.size())
        {
            // cout << lista[i] << "\n";
            int size = n.size();
            vi bits(size, 0);
            for (int j = 0; j < size; j++)
            {
                char ch = n[j];
                int digit = atoi(&ch);
                if (phone[digit].find(lista[i][j]) != string::npos)
                {
                    bits[j] = 1;
                }
            }
            int sum = sumUp(bits);
            if (sum == size)
            {
                ans++;
            }
        }
    }
    cout << ans << "\n";
}

int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	solve();
 	return 0;
}