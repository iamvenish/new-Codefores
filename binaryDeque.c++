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
        int n , k;
        cin >> n >> k;

        int ans[n];
        int sum=0;
        for(int i=0 ; i<n ; i++){
            cin >> ans[i];
            sum+=ans[i];
        }

        if(k>sum){
            cout << -1 << endl;
        }
        else {
            int val=0,i=0,j=0;
            sum=0;
            while (sum<k){
                sum+=ans[i];
                i+=1;
            }
            while(i<n && ans[i]==0){
                i+=1;
            }
            val=i;
            while(i<n){
                if (ans[i]==0){
                    val=max(val,i-j+1);
                    i+=1;
                }
                else{
                    while(ans[j]!=1){
                        j+=1;
                    }
                    j+=1;
                    val=max(val,i-j+1);
                    i+=1;
                }
            }
            cout<<n-val<<endl;
        }


      }
    
    return 0;
}