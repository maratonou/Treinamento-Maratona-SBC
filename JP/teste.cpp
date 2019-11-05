#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

template <class T>
T sub(const T data[], int size, T s=0)
{
    for (int i = 0; i < size; i++)
        s-=data[i];
    return s;
}

int main()
{
    double a[4] = {1.0, -1.0, -50.0, 100.0};
    int b[4] = {-10, -20, 40, -40};
    cout << sub(a, 4) << endl;
    cout << sub(b, 4) << endl;
    return 0;
}