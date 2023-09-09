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
      
        int n;
        cin  >> n;

        vector<int>ans(n);

        for(int i=0 ; i<n ; i++){
            cin >> ans[i];
        }

        int sm=0;
        map<int , int>mp;

        for(int i=0 ; i<n ; i++){
            sm+=ans[i];
            mp[sm] = i+1;
        }

        sm=0;
        int mx = 0;
        for(int i=n-1 ; i>=0 ; i--){
            sm+=ans[i];
            if(mp[sm]>0 && mp[sm]<(i+1)){
                mx = max(mx , sm);
            }
        }

        cout << mx << endl;
    return 0;
}