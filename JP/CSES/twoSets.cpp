#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

#define ONE 1;
#define TWO 0;
 
int soma(vector<int> bits, int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i*bits[i-1];
    }
    return sum;
}

void solve(int n)
{
    int ones = 1;
    int twos = 0;
    vector<int> bits_one(n, 0);
    vector<int> bits_two(n, 0);
    bits_one[n-1] = 1;
    int sum1 = 1*n;
    int sum2 = 0;
    for (int i = n-2; i >= 0; i--)
    {
        if (sum2 <= sum1)
        {
            bits_two[i] = 1;
            sum2 += i+1;
            twos++;
        }
        else
        {
            bits_one[i] = 1;
            sum1 += i+1;
            ones++;
        }
        // cout << "sum1: " << sum1 << " sum2: " << sum2 << "\n";
    }
    int ans = soma(bits_two, n) == soma(bits_one, n);
    // cout << soma(bits_one, n) << endl;
    // cout << soma(bits_two, n) << endl;
    if (ans)
    {
        cout << "YES\n";
        cout << ones << "\n";
        for ( int i = 0; i < n; i++)
        {
            if (bits_one[i])
            {
                cout << i+1 << " ";
            }
        }
        cout << "\n";
        cout << twos << "\n";
        for ( int i = 0; i < n; i++)
        {
            if (bits_two[i])
            {
                cout << i+1 << " ";
            }
        }
        cout << "\n";
    }
    else
    {
        cout << "NO\n";
    } 
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int n = 1;
	cin >> n;
    solve(n);
 	return 0;
}