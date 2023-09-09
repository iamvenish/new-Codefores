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
vector<int>removeDuplicate(vector<int>&a){
    int n = a.size();
    // int j=1;
    vi b;
    int prev = a[0];
    b.pb(a[0]);
    for(int i=1 ; i<n ; i++){
        if(prev != a[i]){
            b.push_back(a[i]);
            prev = a[i];
        }
    }

    return b;
}
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

            vector<int>a(n);
            vector<int>c;

            for(int i=0 ; i<n ; i++){
                cin  >> a[i];
            }

            for(int i=0 ; i<n ; i++){
                c.push_back(a[i]);
            }

            sort(c.begin() , c.end());

            int prev=0 ;
            vector<int>b;
            for(int i=0 ; i<n ; i++){
                if(prev!=c[i]){
                    // diff = (c[i]-prev);
                    b.push_back(n-i);;
                    prev = c[i];
                }
            }

            vi final = removeDuplicate(a);

            if(b == final){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
         }
    
    return 0;
}