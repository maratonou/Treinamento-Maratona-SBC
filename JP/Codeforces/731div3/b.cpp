#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
 
void solve()
{
    int n;
    cin >> n;
    char **characters = new char*[n];
    for (int i = 0; i < n; i++)
    {
        characters[i] = new char[n];
        for(int j = 0; j < n; j++)
        {
            
            cin >> characters[i][j];
        }
    }
    int ast[4][2] = {0};
    int ast_id = 1;
    for (int i = 0; i < n; i++)
    {
        // cout << "a1" << "\n";
        for(int j = 0; j < n; j++)
        {
            if (characters[i][j] == '*')
            {
                if (ast_id == 1)
                {
                    ast[0][0] = i;
                    ast[0][1] = j;
                    ast_id++;
                }
                else
                {
                    ast[1][0] = i;
                    ast[1][1] = j;
                }
            }
        }
    }
    if (ast[1][0] == ast[0][0])
    {
        // cout << "a2" << "\n";
        if (ast[1][0] == n-1)
        {
            ast[2][0] = ast[1][0]-1;
            ast[3][0] = ast[1][0]-1;
            ast[2][1] = ast[0][1];
            ast[3][1] = ast[1][1];

            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            
        }
        else
        {
            ast[2][0] = ast[1][0]+1;
            ast[3][0] = ast[1][0]+1;
            ast[2][1] = ast[0][1];
            ast[3][1] = ast[1][1];

            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
        }
    }
    else if (ast[1][1] == ast[0][1])
    {
        // cout << "a3" << "\n";
        if (ast[1][1] == n-1)
        {
            ast[2][1] = ast[1][1]-1;
            ast[3][1] = ast[1][1]-1;
            ast[2][0] = ast[0][0];
            ast[3][0] = ast[1][0];

            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            
        }
        else
        {
            ast[2][1] = ast[1][1]+1;
            ast[3][1] = ast[1][1]+1;
            ast[2][0] = ast[0][0];
            ast[3][0] = ast[1][0];

            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
        }
    }
    else
    {
        // cout << "a3" << "\n";
            ast[2][0] = ast[1][0];
            ast[2][1] = ast[0][1];
            ast[3][1] = ast[1][1];
            ast[3][0] = ast[0][0];

            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[2][0]  ][ ast[2][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
            characters[ ast[3][0]  ][ ast[3][1] ] = '*';
    }
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << characters[i][j];
        }
        delete characters[i];
        cout << "\n";
    }
    delete characters;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}