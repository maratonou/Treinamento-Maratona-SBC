#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;

const string ENDL = "\n";

/*###.###
  #*#@#*#
  #**.**#
  #.....#
  #.....#
  #######*/

int canLeave(vector<string> mapa, ii player)
{
}

int updateFires(vector<string> mapa, vii fires)
{

}
int movePlayer(vector<string> &mapa, vector<vi> &flags, queue<int> &bfs_player)
{
    
}
void solve()
{
	int w, h;
    cin >> w >> h;
    vector<string> mapa;
    queue<ii> fire_abertos;
    queue<ii> player_abertos;
    vector<vi> flags;
    forn(i, w)
    {
        string s;
        cin >> s;
        mapa.push_back(s);
        vi linha(h, 0);
        flags.push_back(linha);
        forn(j, h)
        {
            if (s[j] == '@')
            {
                player_abertos.push(make_pair(i, j));
            }
            else if (s[j] == '*')
            {
                fire_abertos.push(make_pair(i, j));
            }
            else if (s[j])
            {
                
            }
        }
    }
    forn(j, h)
    {

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