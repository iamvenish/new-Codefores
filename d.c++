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
            int a , b , c;
            cin >> a >> b >> c;
            if((a+b+c)%9!=0){
                cout  << "NO" << endl;
            }
            else{
                 if(min(a , min(b , c)) >= (a+b+c)/9){
                cout << "YES" << endl;
               }
               else{
                   cout << "NO" << endl;
               }
            }
        }
    
    return 0;
}