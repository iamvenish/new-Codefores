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
      cin >> t;

      while(t--){
          int n , m , k , h;
          cin >> n >> m >> k >> h;

          int ans[n];

          for(int i=0 ; i<n ; i++){
              cin >> ans[i];
          }
           int cnt = 0;
           for(int i=0 ; i<n ; i++){
              if(abs(h-ans[i])%k == 0 && abs(h-ans[i])/k < m && abs(h-ans[i])>=1){
                cnt++;
              }
           }

           cout << cnt  <<  endl;
      }
    return 0;
}