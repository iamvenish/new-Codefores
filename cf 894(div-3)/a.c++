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


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
       int t;
       cin >> t;

       while(t--){
          int n , m;
          cin  >> n >> m;

          vector<vector<char>>a(n , vector<char>(m));

          for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                cin  >> a[i][j];
            }
          }

          
           string str = "vika";
           int k=0;
           int cnt =0;
          for(int i=0 ; i<m ; i++){
            for(int j=0 ; j<n; j++){
                if(a[j][i] == str[k]){
                    k++;
                    cnt++;
                    break;
                }
            }

            if(k==str.size()){
                break;
            }
          }

            if(cnt == 4){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
       }
    
    return 0;
}