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
         int a , b , c;
         cin >> a >> b >> c;
         int cnt = 0;
         if(a==b){
            cout << 0 << endl;
         }
         else{
                int diff = abs(a-b);
                if(diff%2!=0){
                  int div = diff/2;
                  int val = div/c;
                  cnt+=val+1;
                }
                else{
                    int div = diff/2;
                    int val = div/c;

                    if(div%c!=0){
                        cnt+=val+1;
                    }
                    else{
                        cnt = val;
                    }
                }
        
            cout << cnt << endl;
         }
      }
    
    return 0;
}