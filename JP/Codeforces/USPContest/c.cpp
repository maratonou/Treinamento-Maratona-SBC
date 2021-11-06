#pragma GCC optimize("O3")
#include "bits/stdc++.h"
#include<string>

using namespace std;
 
using ll = long long;
using ii = pair<int, int>;
using ull = unsigned long long;
using vi = vector<int>;

void solve() {
  int q;
  cin >> q;
  vector<vi> plates;
  for (int i = 0; i < q; i++)
  {
    char qType;
    cin >> qType;
    int x, y, r;
    cin >> x >> y >> r;
    
    vi plate(3, 0);
    plate[0] = x;
    plate[1] = y;
    plate[2] = r;
    // cout << "a\n";
    
    if (qType == 'A')
    {
      if (plates.empty())
      {
        // cout << "a\n";
        plates.push_back(plate);
        cout << "Ok\n";
        continue;
      }
      int ok = 1;
      for (int index = 0; index < (int)plates.size(); index++)
      {
        int deltaX = (plate[0] - plates[index][0]) * (plate[0] - plates[index][0]);
        int deltaY = (plate[1] - plates[index][1]) * (plate[1] - plates[index][1]);
        int euler = sqrt((deltaX + deltaY));
        if (euler < (plate[2] + plates[index][2]))
        {
          ok = 0;
          break;
        }
      }
      if (ok)
      {
        cout << "Ok\n";
        plates.push_back(plate);
      }
      else
      {
        cout << "No\n";
      }
    }
    else
    {
      int ok = 0;
      int index;
      for (index = 0; index < (int)plates.size(); index++)
      {
        int deltaX = (plate[0] - plates[index][0]) * (plate[0] - plates[index][0]);
        int deltaY = (plate[1] - plates[index][1]) * (plate[1] - plates[index][1]);
        int euler = sqrt((deltaX + deltaY));
        if (euler == 0 && plate[2] == plates[index][2])
        {
          ok = 1;
          // cout << plates[index][0] << " " << plates[index][1] << "\n";
          // cout << plate[0] << " " << plate[1] << "\n";
          break;
        }
      }
      if (ok)
      {
        plates.erase(plates.begin()+index);
        cout << "Ok\n";
        // break;
      }
      else
      {
        cout << "No\n"; 
        // break;
      }
    }
  }
}


int main() 
{
	ios_base :: sync_with_stdio(false);
	cin.tie(0);
  solve();
 	return 0;
}