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
     
      map<int , int>mp;

      int n;
      cin >> n;
      int temp;
       int cnt  = 0;
      for(int i=0 ; i<n ; i++){
        cin >> temp;
        mp[temp]++;
      }

      for(auto it : mp){
         cnt++;
      }

      cout << cnt << endl;
    
    return 0;
}