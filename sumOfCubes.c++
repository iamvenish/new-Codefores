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
            int n;
            cin >> n;

            set<int>st;

            for(int i=1 ; i*i*i<=n ; i++){
                st.insert(i*i*i);
            }
            bool flag = false;
            for(int i=1 ; i*i*i<=n ; i++){
                if(st.count(n-i*i*i)){
                    flag = true;
                    break;
                }
            }

            if(flag == false){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
    return 0;
}