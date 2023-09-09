#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define int long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
#define s second
#define vpii vector<pair<int , int>>
#define pb push_back


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
       int t;
       cin  >> t;

       while(t--){
          int c , m , x;
          cin  >> c >> m >> x;
          int cnt = 0;
          if(c == m && c>x){
            cnt = c-x;
          }
          else {
              int mini = min(c , m);
              cnt = mini;
          }

          cout << cnt << endl;
       }
    
    return 0;
}