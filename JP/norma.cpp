#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

using ff = pair<float, float>;

inline float norma(vector<ff> pts)
{
    return sqrt(pow((pts[1].first-pts[0].first), 2)
     + pow((pts[1].second-pts[0].second), 2));
}

int main()
{
    ff um, dois;

    cin >> um.first >> um.second;
    cin >> dois.first >> dois.second;
    vector<ff> a;
    a.push_back(um);
    a.push_back(dois);
    
    cout.precision(4);
    cout << fixed;
    cout << norma(a) << endl;
    return 0;
}