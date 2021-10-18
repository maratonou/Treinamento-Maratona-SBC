#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve()
{
    vi abc(3,0);
    cin >> abc[0] >> abc[1] >> abc[2];
    int maior = 0;
    char maior_letra;

    for (int i = 0; i < 3; i++)
    {
        if (abc[i] > maior)
        {
            maior = abc[i];
            maior_letra = i + 'a';
        }
    }
    // testing which case 
    if (maior_letra == 'a')
    {
        if (abc[0] == abc[1])
        {
            if (abc[0] == abc[2])
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
            else
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
        }
        else
        {
            if (abc[0] == abc[2])
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
            else
            {
                cout << maior-abc[0] << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
        }
    }
    else if (maior_letra == 'b')
    {
        if (abc[1] == abc[0])
        {
            if (abc[1] == abc[2])
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
            else
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
        }
        else
        {
            if (abc[1] == abc[2])
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
            else
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1] << " " << maior-abc[2]+1 << "\n";
            }
        }
    }
    else
    {
        if (abc[2] == abc[1])
        {
            if (abc[2] == abc[0])
            {
                cout << maior-abc[0] << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
            else
            {
                cout << maior-abc[0] << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
        }
        else
        {
            if (abc[0] == abc[2])
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2]+1 << "\n";
            }
            else
            {
                cout << maior-abc[0]+1 << " " << maior-abc[1]+1 << " " << maior-abc[2] << "\n";
            }
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