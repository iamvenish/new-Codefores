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
          int n , m;
          cin >> n >> m;

          vi a(m);
          for(int i=0 ; i<m ; i++){
             cin >> a[i];
          }
          map<int , int>mp;
          for(int i=1;i<=n ; i++)mp[i]=0;

          for(auto it : a)mp[it]++;

          int l = 1 , h = 2*m;
          int result=0;
          while(l<=h){
              int mid = l + (h-l)/2;

              bool flag= false;
              int  help = 0 , left = 0;
              for(int i=1 ; i<=n ; i++){
                  if(mid >mp[i]){
                    help+=(mid-mp[i])/2;
                  }
                  else{
                    left+=mp[i]-mid;
                  }
              }

              if(left<=help)flag = true;

              if(flag){
                result = mid;
                h = mid-1;
              }
              else{
                 l = mid+1;
              }
          }

          cout << result << endl;
       }
    
    return 0;
}