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
       cin  >> t;

       while(t--){
          int n;
          cin  >> n;

        
             int i=0 , j=1e10 , mid;
             int ans=LLONG_MAX;
             while(i<=j){
                  mid = i + (j-i)/2;
                 int newMid = (mid*(mid-1))/2;

                 if(newMid<=n){
                    ans = min(ans , mid + (n-newMid));
                    i = mid+1;
                 }
                 else{
                    j=mid-1;
                 }
             }

             cout << ans << endl;
       }
    return 0;
}