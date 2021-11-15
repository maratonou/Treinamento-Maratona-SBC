#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

const char EMPTY = ('A'-1);

vector<char> createTree(string prefix, string infix, int n)
{
    int size = (2*n) + 100;
    // cout << "a1\n";
    vector<char> bin_tree(size, EMPTY);
    // cout << "a1\n";

    // cout << "a1.1\n";
    map<char, int> infix_map;
    // cout << "a1.2\n";

    for (int i = 0; i < n; i++)
    {
        // cout << "a1.3\n";
        infix_map[infix[i]] = i+1;
    }


    // cout << "a2\n";
    bin_tree[1] = prefix[0];
    // cout << "a3\n";

    for (int i = 1; i < n; i++)
    {
        int position = 1;
        while (bin_tree[position] != EMPTY)
        {
            // cout << bin_tree[position] << " " << position << "\n";
            if (infix_map[prefix[i]] > infix_map[bin_tree[position]])
            {
                position *= 2;
                position++;
            }
            else
            {
                position *= 2;
            }
        }
        bin_tree[position] = prefix[i];
        // cout << bin_tree[position] << " " << position << "\n";
    }
    return bin_tree;
}

void printPostfixTree(vector<char> &bin_tree, int root)
{
    if (bin_tree[root] == EMPTY)
    {
        return;
    }
    printPostfixTree(bin_tree, root*2);
    printPostfixTree(bin_tree, (root*2)+1 );
    cout << bin_tree[root];
}

void solve()
{
    int n;
    cin >> n;
    // cout << "a1.1\n";
    string prefixo;
    string infixo;

    cin >> prefixo >> infixo;
    // cout << "a1.1\n";

    vector<char> bin_tree = createTree(prefixo, infixo, n);
    printPostfixTree(bin_tree, 1);
    cout << "\n";
}
 
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while(t--) solve();
 	return 0;
}