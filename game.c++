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
        cin  >> t;

        while(t--){
            int n , h;
            cin  >> n >> h;

            vector<int>power(n);

            for(int i=0 ; i<n ; i++){
                cin  >> power[i];
            }

            sort(power.begin() , power.end());

            int first = power[n-1];
            int second = power[n-2];

            if(h%(first+second) == 0){
                cout << 2*(h/(first+second)) << endl;
            }
            else if(h%(first+second)<=first){
                cout << 2*(h/(first+second)) + 1 << endl;
            }
            else{
                cout << 2*(h/(first+second)) + 2 << endl;
            }
        }
    return 0;
}