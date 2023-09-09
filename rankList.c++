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
bool cmp(pair<int , int>&a , pair<int , int>&b){
      if(a.first == b.first){
          return a.second <  b.second;
      }

      return a.first > b.first;
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
         
         int n , k;

         cin >> n >> k;
         vector<pair<int , int>>ans;
         while(n--){
            int a , b;
            cin >> a >> b;
            //{problem  , time}
            ans.push_back({a , b});
         }

         sort(ans.begin() , ans.end() , cmp);

         pair<int , int>val = ans[k-1];

         int cnt = 0;

         for(int i=0 ; i<ans.size() ; i++){
            if(val == ans[i]){
                cnt++;
            }
         }

         cout << cnt  << endl;
    return 0;
}