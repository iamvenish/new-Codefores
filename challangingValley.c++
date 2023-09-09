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
           cin  >> n;

           vi a;

           fr(i,n){
             int val;
             cin  >> val;

             if(i==0 || val != a.back()){
                a.pb(val);
             }
           }

           int cnt = 0;
        //    int m = a.size();
           fr(i,a.size()){
             if((i==0 || a[i-1]>a[i]) && (i== a.size()-1|| a[i+1]>a[i])){
                cnt++;
             }
           }

           if(cnt == 1){
              cout << "YES" << endl;
           }
           else{
              cout << "NO" << endl;
           }
       }
    return 0;
}