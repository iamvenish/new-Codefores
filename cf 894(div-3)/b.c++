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
#define fr(i,n) for(int i=0 ; i<n ; i++)


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
      int t;
      cin >> t;

      while(t--){
        int n;
        cin  >> n;

        vi a(n);

        fr(i,n){
            cin >> a[i];
        }
        vi b;
        b.pb(a[0]);
        for(int i=1 ; i<n ; i++){
            if(a[i] < a[i-1]){
                b.pb(a[i]);
                b.pb(a[i]);
            }
            else{
                b.pb(a[i]);
            }
        }

        cout << (int)b.size() << endl;
        fr(i , b.size()){
            cout << b[i] << " ";
        }
      }
    
    return 0;
}