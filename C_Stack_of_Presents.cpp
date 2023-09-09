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
             int n , m;
             cin >> n >> m;

            //  vi a(n);
            //  vi b(m);
               vector<int>ds(n+1,0);
             forn(i,n){
                  int a;
                  cin >> a;
                 ds[a] = i+1;
             }
              int ans = 0 , maxi=1;
             forn(i,m){
                 int b;
                 cin >> b;

                 if(maxi < ds[b]){
                     ans+=2*(ds[b]-i-1)+1;
                     maxi = ds[b];
                 }
                 else{
                     ans+=1;
                 }
             }

             cout << ans << endl;
        }
    
    return 0;
}