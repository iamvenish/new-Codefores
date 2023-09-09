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
int sR(int r , vi &v){
    int n = v.size();
    int i=0 , j=n-1 , cnt=0;
    while(i<j){
        int sm = v[i] + v[j];
        if(sm<=r){
            cnt+=j-i;
            i++;
        }
        else{
            j--;
        }
    }

    return cnt;
}
int sL(int l , vi &v){
    int n = v.size();
    int i=0 , j=n-1;
    int cnt =0;

    while(i<j){
        int sm = v[i] + v[j];

        if(sm<l){
            cnt+=j-i;
            i++;
        }
        else{
            j--;
        }
    }

    return cnt;
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
       int t;
       cin  >> t;

       while(t--){
          int n , l , r;
          cin  >> n >> l >> r;

          vi v(n);

          for(int i=0 ; i<n ; i++){
             cin  >> v[i];
          }

          st(v);

          // r lesser than and equal 

          int lessR = sR(r , v);
          int lessL   = sL(l , v);

          cout  << lessR-lessL << endl;
       }
    
    return 0;
}