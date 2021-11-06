#include "bits/stdc++.h"

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

typedef struct bin_tree
{
    char node;
    bin_tree *node_esq;
    bin_tree *node_dir;
}BinTree;

typedef struct root
{
    BinTree *tree;
}Root;

BinTree* createTree(string &prefix, string &infix, int n)
{

    BinTree *root = new BinTree;
    root->node_dir = NULL;
    root->node_esq = NULL;
    root->node = prefix[0];

    map<char, int> infix_pos;

    for (int i = 0; i < n; i++)
    {
        infix_pos[infix[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        BinTree *it = root;
        while (it != NULL)
        {
            cout << it->node << "\n";
            if (infix_pos[prefix[i]] > infix_pos[prefix[i-1]] )
            {
                //dir
                it = it->node_dir;
            }
            else
            {
                it = it->node_esq;
            }
            it = new BinTree;
            it->node = prefix[i];
            it->node_esq = NULL;
            it->node_dir = NULL;
        }
    }
    return root;
}

void printPostfixTree(BinTree *tree)
{
    if (!tree->node_esq && !tree->node_dir)
    {
        cout << tree->node;
        return;
    }
    printPostfixTree(tree->node_esq);
    printPostfixTree(tree->node_dir);
    cout << tree->node;
    return;
}

void solve()
{
    int n;
    cin >> n;
    string prefixo;
    string infixo;

    cin >> prefixo >> infixo;

    printPostfixTree(createTree(prefixo, infixo, n));
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