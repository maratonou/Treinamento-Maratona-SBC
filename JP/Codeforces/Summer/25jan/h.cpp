#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)

// #define DEBUG
 
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

const int FIRE = 3;
const int WALL = 2;
const int EMPTY = 0;
const int PLAYER = 1;

void printMap(vector<string> &mapa)
{
    for (int i = 0; i < (int)mapa.size(); i++)
    {
        cout << mapa[i] << ENDL;
    }
}

ii pairSum(ii &p1, ii &p2)
{
    return make_pair((p1.first+p2.first), (p1.second+p2.second));
}

int playerWon(ii &player, int &w, int &h)
{
    if (player.first == 0 || player.first == h-1)
        return 1;
    if (player.second == 0 || player.second == w-1)
        return 1;
    return 0;
}

int hasfireAdjacent(ii &point, int &w, int &h, vector<string> mapa)
{
    if (point.first < 0 || point.first >= h)
    {
        if (point.second < 0 || point.second >= w)
        {
            if (mapa[point.first][point.second] != '*')
            {
                return 0;
            }
        }
        return 0;
    }
    
    
    return 1;
}

int canBeOpened(ii &point, int &w, int &h, vector<string> &mapa)
{
    #ifdef DEBUG 
    cout << "   point = " << point.first << ", " << point.second << ENDL; 
    #endif
    if (point.first < 0 || point.first >= h)
    {
        #ifdef DEBUG 
        cout << "   x is less than 0 or more than or equal to h\n";
        #endif
        return 0;
    }
    if (point.second < 0 || point.second >= w)
    {
        #ifdef DEBUG 
        cout << "   x is less than 0 or more than or equal to w\n"; 
        #endif
        return 0;
    }
    if (mapa[point.first][point.second] != '.' && mapa[point.first][point.second] != '@')
    {
        #ifdef DEBUG
        cout << "   point didnt hit a player or empty spot\n";
        #endif
        return 0;
    }
    return 1;
}


int playerCanBeOpened(ii &point, int &w, int &h, vector<string> &mapa)
{
    #ifdef DEBUG 
    cout << "   point = " << point.first << ", " << point.second << ENDL; 
    #endif
    if (point.first < 0 || point.first >= h)
    {
        #ifdef DEBUG 
        cout << "   x is less than 0 or more than or equal to h\n";
        #endif
        return 0;
    }
    if (point.second < 0 || point.second >= w)
    {
        #ifdef DEBUG 
        cout << "   x is less than 0 or more than or equal to w\n"; 
        #endif
        return 0;
    }
    if (mapa[point.first][point.second] != '.')
    {
        #ifdef DEBUG
        cout << "   point didnt hit a player or empty spot\n";
        #endif
        return 0;
    }
    ii pl (point.first, point.second-1);
    ii pr(point.first, point.second+1);
    ii pu(point.first-1, point.second);
    ii pd(point.first+1, point.second);
    #ifdef DEBUG
    cout << "\n   -> testing adjacents to point\n";
    #endif
    if (!hasfireAdjacent(pl, w, h, mapa) && !hasfireAdjacent(pr, w, h, mapa) && !hasfireAdjacent(pu, w, h, mapa) && !hasfireAdjacent(pd, w, h, mapa))
    {
        #ifdef DEBUG
        cout << "   point has fire adjacent\n";
        #endif
        return 0;
    }
    return 1;
}

void solve()
{
    #ifdef DEBUG 
    cout << "-----------------------------------------------------------------------------------\n";
    #endif
	int w, h;
    cin >> w >> h;
    cin.ignore();
    vector<string> mapa;
    queue<ii> fires_to_open;
    queue<ii> player_to_open;
    vector<vi> flags;

    // constantes
    ii u = make_pair(-1, 0);
    ii d = make_pair(1, 0);
    ii l = make_pair(0, -1);
    ii r = make_pair(0, 1);

    forn(i, h)
    {
        string s;
        cin >> s;
        mapa.push_back(s);
        forn(j, w)
        {
            if (mapa[i][j] == '@')
            {
                player_to_open.push(make_pair(i, j));
            }
            else if (mapa[i][j] == '*')
            {
                fires_to_open.push(make_pair(i, j));
            }
        }
    }
    int ans = 0;
    while (true)
    {
        #ifdef DEBUG
        printMap(mapa);
        cout << "fimMapa\n\n";
        cout << "a1\n";
        #endif
        //abrir fogo;
        ans++;
        if (player_to_open.empty())
        {
            // cout << "a2\n";
            cout << "IMPOSSIBLE\n";
            return;
        }
        // cout << "a3\n";
        queue<ii> fires_opened;
        swap(fires_to_open, fires_opened);
        #ifdef DEBUG
        cout << "there is " << (int)fires_opened.size() << " fire opened\n\n";
        #endif
        while (!fires_opened.empty())
        {
            ii fire = fires_opened.front();
            fires_opened.pop();
            ii f_left = pairSum(fire, l);
            ii f_right = pairSum(fire, r);
            ii f_up = pairSum(fire, u);
            ii f_down = pairSum(fire, d);
            //left
            #ifdef DEBUG
            cout << "FIRES: \n";
            cout << "Fire left\n"; 
            #endif
            if (canBeOpened(f_left, w, h, mapa))
            {
                #ifdef DEBUG
                cout << "   Fire OPENED\n";
                #endif
                fires_to_open.push(f_left);
                mapa[f_left.first][f_left.second] = '*';
            }
            //right
            #ifdef DEBUG
            cout << "Fire Right\n"; 
            #endif
            if (canBeOpened(f_right, w, h, mapa))
            {
                #ifdef DEBUG
                cout << "   Fire OPENED\n";
                #endif
                fires_to_open.push(f_right);
                mapa[f_right.first][f_right.second] = '*';
            }
            //up
            #ifdef DEBUG
            cout << "Fire Up\n"; 
            #endif
            if (canBeOpened(f_up, w, h, mapa))
            {
                #ifdef DEBUG
                cout << "   Fire OPENED\n";
                #endif
                fires_to_open.push(f_up);
                mapa[f_up.first][f_up.second] = '*';
            }
            //down
            #ifdef DEBUG
            cout << "Fire Down\n"; 
            #endif
            if (canBeOpened(f_down, w, h, mapa))
            {
                #ifdef DEBUG
                cout << "   Fire OPENED\n";
                #endif
                fires_to_open.push(f_down);
                mapa[f_down.first][f_down.second] = '*';
            }
        }
        queue<ii> players_opened;
        swap(players_opened, player_to_open);
        #ifdef DEBUG
        cout << "\nthere is " << (int)players_opened.size() << " players opened\n\n";
        #endif
        while(!players_opened.empty())
        {
            ii player = players_opened.front();
            players_opened.pop();
            ii pL = pairSum(player, l);
            ii pR = pairSum(player, r);
            ii pU = pairSum(player, u);
            ii pD = pairSum(player, d);
            
            #ifdef DEBUG
            #endif

            #ifdef DEBUG
            cout << "PLAYERS: \n";
            cout << "pL\n";
            #endif
            if (playerCanBeOpened(pL, w, h, mapa) && mapa[pL.first][pL.second] == '.')
            {
                if (playerWon(pL, w, h))
                {
                    #ifdef DEBUG
                    cout << "pL WON\n";
                    printMap(mapa);
                    #endif
                    cout << ans+1 << ENDL;
                    return;
                }
                player_to_open.push(pL);
                mapa[pL.first][pL.second] = '@';
            }
            #ifdef DEBUG
            cout << "pR\n";
            #endif
            if (playerCanBeOpened(pR, w, h, mapa) && mapa[pR.first][pR.second] == '.')
            {
                if (playerWon(pR, w, h))
                {
                    #ifdef DEBUG
                    cout << "pR WON\n";
                    printMap(mapa);
                    #endif
                    cout << ans+1 << ENDL;
                    return;
                }
                player_to_open.push(pR);
                mapa[pR.first][pR.second] = '@';
            }
            #ifdef DEBUG
            cout << "pU\n";
            #endif
            if (playerCanBeOpened(pU, w, h, mapa) && mapa[pU.first][pU.second] == '.')
            {
                if (playerWon(pU, w, h))
                {
                    #ifdef DEBUG
                    cout << "pU WON\n";
                    printMap(mapa);
                    #endif
                    cout << ans+1 << ENDL;
                    return;
                }
                player_to_open.push(pU);
                mapa[pU.first][pU.second] = '@';
            }
            #ifdef DEBUG
            cout << "pD\n";
            #endif
            if (playerCanBeOpened(pD, w, h, mapa) && mapa[pD.first][pD.second] == '.')
            {
                if (playerWon(pD, w, h))
                {
                    #ifdef DEBUG
                    cout << "pD WON\n";
                    printMap(mapa);
                    #endif
                    cout << ans+1 << ENDL;
                    return;
                }
                player_to_open.push(pD);
                mapa[pD.first][pD.second] = '@';
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