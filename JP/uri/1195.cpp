#include "bits/stdc++.h"
 
using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;


typedef struct node Node;
typedef struct node
{
    int elem;
    Node *esq;
    Node *dir;
}Node;

void printPrefix(Node *&root)
{
    if (root == NULL)
        return;

    cout << " " << root->elem;
    printPrefix(root->esq);
    printPrefix(root->dir);
    return;
}

void printInfix(Node *&root)
{
    if (root == NULL)
        return;

    printInfix(root->esq);
    cout << " " << root->elem;
    printInfix(root->dir);
    return;
}
void printPostfix(Node *&root)
{
    if (root == NULL)
        return;

    printPostfix(root->esq);
    printPostfix(root->dir);
    cout << " " << root->elem;
    return;
}

void inserir(Node *&root, int value)
{
    if (root == NULL)
    {
        root = new Node;
        root->elem = value;
        root->esq = NULL;
        root->dir = NULL;
        return;
    }
    else if (value < root->elem) 
    {
        inserir(root->esq, value);
    }
    else
    {
        inserir(root->dir, value);
    }
}

void solve(int caso)
{
    cout << "Case " << caso << ":\n";
    int n;
    cin >> n;

    Node *raiz = new Node;
    cin >> raiz->elem;
    raiz->esq = NULL;
    raiz->dir = NULL;

    for (int i = 1; i < n; i++)
    {
        int elem;
        cin >> elem;
        inserir(raiz, elem);
    }
    

    cout << "Pre.:";
    printPrefix(raiz); 
    cout  << "\n";

    cout << "In..:";
    printInfix(raiz); 
    cout  << "\n";

    cout << "Post:";
    printPostfix(raiz); 
    cout  << "\n\n";
}
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
    int t;
    cin >> t;
    int cont = 1;
    while(t--)
    {
        solve(cont);
        cont++;
    } 
    return 0;
}