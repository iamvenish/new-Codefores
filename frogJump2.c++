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
int solve(int index , vi &a , int k , vi &dp){

    if(index == 0){
        return 0;
    }

    if(dp[index]!=-1){
        return dp[index];
    }
    int minStep = INT_MAX;
    int jump = 0;
    for(int i=1 ; i<=k ; i++){
        if(index-i >=0){
            jump = solve(index-i , a , k , dp) + abs(a[index]-a[index-i]);
        }
        minStep = min(minStep , jump);
    }

    dp[index] = minStep;

    return dp[index];
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
       
       int n , k;
       cin >> n >> k;

       vi a(n);

       fr(i,n){
          cin >> a[i];
       }

       vi dp(n+1 , -1);
       cout  << solve(n-1 , a , k , dp);    
    return 0;
}