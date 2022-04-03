#include "bits/stdc++.h"

using namespace std;

#define forn(i, n) for (int i = 0; i < n; i++)
 
using ll = long long;
using f64 = double;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;
using vii = vector<ii>;


const string ENDL = "\n";

map<int, int> mapa;
vi exps;
void polynomialParser(string &p)
{
	int n = p.size();
	for(int i = 0; i < n;)
    {
        // get coef
        
        int coef = 0;
        int sig = 1;
        if (p[i] == '-' || p[i] == '+')
        {
            if (p[i] == '-')
                sig = -1;
            i++;
        }
        if (p[i] == 'x')
            coef = 1;
        {
            while (p[i] >= '0' && p[i] <= '9')
            {
                coef = coef * 10 + p[i] - '0';
                i++;
            }
        }
        // if (i < n)
        //     cout << i << " " << p[i] << " " << coef << ENDL;
        // get exps;
        if (p[i] == 'x')
        {
            i++;
            if (p[i] == '^')
            {
                i++;
                int sig_e = 1;
                if (p[i] == '-')
                {
                    sig_e = -1;
                    i++;
                }
                int exp = 0;
                while (p[i] >= '0' && p[i] <= '9')
                {
                    exp = exp * 10 + p[i] - '0';
                    i++;
                }
                if (mapa[exp*sig_e] == 0)
                    exps.push_back(exp*sig_e);
                mapa[exp*sig_e] += (coef*sig);
            }
            else
            {
                if (mapa[1] == 0)
                    exps.push_back(1);
                mapa[1] += (coef*sig);
            }
        }
        // se n for x é sinal, sabemos disso
        // cout << i << " " << n << ENDL;
    }
}

void solve()
{
	string p; cin >> p;
    polynomialParser(p);
    sort(exps.begin(), exps.end());
    string s = "";
    int psig = 0;
    for (auto [x,y]: mapa)
    {
        if (psig && y*x > 0)
        {
            s+='+';
        }
        if (y == 0) continue;
        psig = 1;
        string num = to_string(y*x);
        if (abs(y*x) != 1)
            s+= num;
        else
            if (x == 1)
                s+= num;
			else
				if (y*x < 0)
					s+= '-';
        if (x == 2)
            s+='x';
        else if (x != 1)
            s+="x^"+to_string(x-1);
    }
    cout << (s.empty() ? "0" : s) << ENDL;
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while(t--) solve();
 	return 0;
}