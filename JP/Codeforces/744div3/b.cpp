#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


void printAns(vector<vi> &moves)
{
    int size = moves.size();
    cout << size << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << moves[i][0] << " " << moves[i][1] << " " << moves[i][2] << "\n";
    }
}

void applyOffset(vi &vetor, int l, int r)
{
    int size = r-l+1;
    int offset = size-1;
    vi offset_pos (size, 0);
    vi ordered_interval(size, 0);

    // cout << "l " << l << " r " << r << "\n";

    // for (int i = l; i <= r; i++)
    // {
    //     cout << vetor[i] << " ";
    // }
    // cout << "\nfim vetor\n";
    offset_pos[0] = offset;
    for (int i = 1; i < size; i++)
    {
        offset_pos[i] = i-1;
    }
    for (int i = 0; i < size; i++)
    {
        ordered_interval[i] = vetor[ offset_pos[i] + l];
    }
    for (int i = l; i <= r; i++)
    {
        vetor[i] = ordered_interval[i-l];
    }
}

void solve()
{
    int n;
    cin >> n;
    vi vetor(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> vetor[i];
    }
    vector<vi> moves;
    int l, r;
    l = 0;
    r = l;
    for(int i = 1; i < n; i++, l++)
    {
        int menor = 1000000000;
        for(int j = l; j < n; j++)
        {
            if (vetor[j] < menor)
            {
                // cout << "vetor[j] = " << vetor[j] << " || menor = " << menor << "\n";
                r = j;
                menor = vetor[j];
            }
        }
        applyOffset(vetor, l, r);
        vi move(3, 0);
        move[0] = l+1;
        move[1] = r+1;
        move[2] = r-l;
        moves.push_back(move);
    }
    
    printAns(moves);

    // cout << "\n";    
    // for(int i = 0; i < n; i++)
    // {
    //     cout << vetor[i] << " ";
    // }
    // cout << "\n\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}