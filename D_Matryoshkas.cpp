#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define ll long long
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
            cin >> n;

            vi a(n);
             map<int , int>mp;
            forn(i , n){
                cin >> a[i];
                mp[a[i]]++;
            }

            auto it  = mp.begin();
            int last = it->first;
            int lastCount = it->second;
            int ans  = it->second;
            it++;
            for(;it!=mp.end() ; it++){
                if(it->first != (last+1)){
                    ans+=it->second;
                }
                else{
                    ans += max(0 , it->second - lastCount);
                }
                
                last = it->first;
                lastCount = it->second;
            }


            cout << ans << endl;
       }
    
    return 0;
}