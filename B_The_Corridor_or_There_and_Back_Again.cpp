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
#define st(a) sort(a.begin() , a.end())
#define forn(i,n) for(int i=0 ; i<n ; i++)


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
       
       int t;
       cin >> t;
       while(t--){
           int n1;
           cin >> n1;

           vector<pair<int , int>>ans;
             int mini = INT_MAX;
             int fi , se;
           for(int i=0 ; i<n1 ; i++){
              cin  >> fi >> se;
              ans.pb({fi , se});
           }
           for(int i=0;  i<ans.size() ; i++){
                if(ans[i].second&1){
                    int fval = ans[i].second/2;
                    mini = min(mini , fval + ans[i].first);
                }
                else{
                     int  Sval= (ans[i].second-2)/2;
                     mini = min(mini , Sval+ans[i].first);
                }
           }

           cout << mini << endl;
       }

    
    return 0;
}