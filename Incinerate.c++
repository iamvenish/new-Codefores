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
#define bsdk return 0
bool check(int monster[] , int n){
    int cnt=0;
    for(int i=0 ; i<n ; i++){
        if(monster[i] == 0){
            cnt++;
        }
    }
    if(cnt == n){
        return true;
    }
    
    return false;
}
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

        int monster[n];
        int power[n];
        for(int i=0 ; i<n ; i++){
            cin >> monster[i];
        }

        for(int i=0 ; i<n ; i++){
            cin >> power[i];
        }

        sort(power , power+n);
        int t=0 , result=0;
         while(k!=0){
            for(int i=0 ; i<n ; i++){
              result = monster[i]-k;
                if(result<=0){
                    monster[i] = 0;
                }
                else{
                    monster[i] = result;
                }
            }

              k-=power[t];
            t++;
         }

         if(check(monster , n) == true){
            cout << "YES" << endl;
         }
         else{
            cout << "NO" << endl;
         }
     }

     bsdk;
}