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
    
       int n;
       cin >> n;

       vi a(n);

       forn(i,n){
        cin >> a[i];
       }    

       int mini = INT_MAX;

       forn(i,n){
          mini = min(mini , abs(a[i]));
       }

       if(mini==0){
          cout << 0 << endl;
       }
       else{
         cout << mini << endl;
       }
    return 0;
}