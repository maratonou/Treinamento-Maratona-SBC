#include <iostream>

using namespace std;

int isSorted(int *v, int ini, int lim)
{
    if (lim - ini == 1) return 1;
    else
    {
        for (int i = ini; i < lim-1; i++)
        {
            if (v[i] > v[i+1])
                return 0;
        }
    }
    return 1;
}

int thanosSort(int *v, int ini, int lim)
{
    if (isSorted(v, ini, lim))
        return lim-ini;
    int half = (lim+ini)/2;
    int esq = thanosSort(v, ini, half);
    int dir = thanosSort(v, half, lim);

    return (esq > dir) ? esq : dir;
}

int main()
{
    int n;
    cin >> n;
    int *v = new int[n];
    for (int i = 0; i < n; i++)
        cin >> v[i];

    cout << thanosSort(v, 0, n) << endl;

}