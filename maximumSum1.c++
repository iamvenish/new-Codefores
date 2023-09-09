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


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
      
       int t;
       cin >> t;

       while(t--){
          int n , cnt;
          cin >> n >> cnt;
          int *ans = new int[n];
          for(int i=0 ; i<n ; i++){
            cin >> ans[i];
          }
          sort(ans, ans+n);
          
          int totalSum = 0;
          int *first = new int[n+1];
          int maxi=0;
          for(int i=0 ; i<n ; i++){
            totalSum+=ans[i];
             first[i+1] = first[i]+ans[i];
          }

          for(int i=0 ; i<=cnt ; i++){
            maxi = max(maxi , first[n-i] - first[2*(cnt-i)]);
          }

          cout << maxi << endl;
       }

    
    return 0;
}