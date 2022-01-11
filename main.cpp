#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

  ll T;
  cin >> T;
  for (ll t = 0; t < T; t++)
  {
    ll n, k;
    cin >> n >> k;
    ll counter = 0;
    string toto = "abc";
    int al = 0;
    for (int i = 0; i < n; i++)
    {
      if (counter + 1 < k)
      {
        counter++;
      }
      else
      {
        counter = 0;
        if (al + 1 < 3)
          al++;
        else
          al = 0;
      }
      cout << toto[al];
    }
    cout << endl;
  }
  return 0;
}