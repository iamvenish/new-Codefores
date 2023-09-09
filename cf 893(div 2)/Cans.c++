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
            int n , hi;
            cin >> n;
            vector<int>visited(n+1 , 0);
            cout  << 1 << " ";
            map<int , int>frq;
            frq[1] = 1;

            for(int i=2 ; i<=n ; i++){
                if(frq[i])continue;

                hi = i;
                while(hi<=n){
                    if(!frq[hi]){
                        cout  << hi << " ";
                        frq[hi] = 1;
                        hi*=2;
                    }
                }
            }
            cout <<endl;
        }
    
    return 0;
}