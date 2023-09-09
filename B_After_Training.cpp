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
    
          int  n , m;
          cin >> n >> m;
          vector<int>ans;
          int cnt=0;
          if(m%2!=0){
            int i=1;
                 while(i<=n){
                    int mid = (1+m)/2;
                    ans.pb(mid);
                    i++;
                    int j=2;
                    while(j<=(m/2)+1){
                        int lm = mid-j+1;
                        int rm = mid+j-1;
                        ans.pb(lm);
                        ans.pb(rm);
                        j++;
                    }
                    i+=(m-1);
                }
          }
          else{
             int i=1;
                 while(i<=n){
                    int mid = (1+m)/2;
                    ans.pb(mid);
                    i++;
                    int j=2;
                    while(j<=(m/2)+1){
                        int lm = mid+j-1;
                        int rm = mid-j+1;
                        ans.pb(lm);
                        if(rm!=0){
                        ans.pb(rm);
                        }
                        j++;
                    }
                    i+=(m-1);
              }
          }



          for(int i=0 ; i<n ; i++){
             cout << ans[i] << endl;
          }
    
    return 0;
}