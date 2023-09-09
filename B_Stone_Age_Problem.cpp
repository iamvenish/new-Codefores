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
        
        int n , q;
        cin  >> n >> q;

        vi vec(n);
        int sm = 0;
        map<int , int>mp;
        forn(i,n){
             cin >> vec[i];
             sm+=vec[i];
             mp[i+1] = vec[i];
        }
          int change = -1;
        for(int i=0 ; i<q ; i++){
             int a;
             cin >> a;

             if(a==1){
                int index , val;
                cin >> index >> val;

                if(mp.find(index)!=mp.end()){
                    int prev = mp[index];
                    sm+=(val - prev);
                    mp[index] = val;
                }
                else{
                      sm+=(val-change);
                      mp[index] = val;
                }
             }
             else{
                mp.clear();
                int val;
                cin >> val;
                sm = val*n;
                change = val;
             }

             cout << sm << endl;
        }
    
    return 0;
}