#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;

int isJolly(vector<int> bits)
{ 
    for (int i = 1; i < bits.size(); i++)
    {
        if (!bits[i])
            return 0;
    }
    return 1;
}

void solve()
{
    int n;
    while (true)
    {
        cin >> n;
        if (cin.eof())
            return;
        vector<int> bits(n, 0);
        vector<int> numbers(n, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> numbers[i];
        }
        for (int i = 0; i < n-1; i++)
        {
            if (abs(numbers[i] - numbers[i+1]) < n)
                bits[ abs(numbers[i] - numbers[i+1]) ] = 1;
        }

        if (isJolly(bits))
        {
            cout << "Jolly\n";
        }
        else
        {
            cout << "Not jolly\n";
        }
    }
}

int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    solve(); 
 	return 0;
}