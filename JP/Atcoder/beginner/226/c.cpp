#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

ll ans = 0;

void learnMove(vector< pair<int, vi> > &moves, int move_id, vi &bits)
{
    // cout << move_id << " || bits";
    // for (int i = 0; i <= (int)moves.size(); i++)
    // {
    //     cout << " " << bits[i];
    // }
    // cout << "\n";
    if((int)moves[move_id].second.size() == 0)
    {
        bits[move_id] = 1;
        ans += moves[move_id].first;
        return;
    }
    for (int j = 0; j < (int)moves[move_id].second.size(); j++ )
    {
        if (!bits[  moves[move_id].second[j]  ])
            learnMove(moves, moves[move_id].second[j], bits);
    }
    bits[move_id] = 1;
    ans += moves[move_id].first;
    return;
}

void solve()
{
    int n;
    cin >> n;
    vector< pair<int, vi> > moves(n);
    for (int i = 0; i < n; i++)
    {
        cin >> moves[i].first;
        int k;
        cin >> k;
        moves[i].second.resize(k, 0);
        for(int j = 0; j < k; j++)
        {
            cin >> moves[i].second[j];
            moves[i].second[j] -= 1;
        }
    }
    vi last_move = moves[n-1].second;
    vi bits(n+1, 0);
    learnMove(moves, n-1, bits);
    cout << ans << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}