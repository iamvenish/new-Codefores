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
int prime(int n){
    if(n==1){
        return 0;
    }

    for(int i=2 ; i*i<=n ; i++){
        if(n%i==0){
            return i;
        }
    }

    return 0;
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
      int t;
      cin >> t;

      while(t--){
         int a , b;
         cin >> a >> b;
          int first = 0 , second = 0;
         for(int i=a ; i<=b ; i++){
             int val  = prime(i);

             if(val!=0){
                  first = val;
                  second = i-val;
                  break;
             }
         }

         if(first==0 && second==0){
            cout << -1 << endl;
         }
         else{
             cout << first << " " << second << endl;
         }
      }
    
    return 0;
}