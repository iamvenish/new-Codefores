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
       cin  >> t; 
       while(t--){
        int n;
        cin >> n;
          
          vi a(n);
          map<int , int>mp;
          for(int i=0 ; i<n ; i++){
            cin  >> a[i];
            mp[a[i]]++;
          }

          int maxi=0;
          for(int i=2 ; i<=(2*n); i++){
              int total = 0;

              for(auto it : mp){
                int diff = i-it.first;
                 if(diff>=1 && mp.count(diff)){
                    total+=min(it.second , mp[diff]);
                 }
              }

              total/=2;

              maxi = max(maxi , total);
          }

          cout << maxi << endl;
       }
    
    return 0;
}