#include <bits/stdc++.h>
using namespace std;
// #define vi vector<int>
// #define vii vector<vector<int>>
// #define mii map<int,int>
// #define ll long long
// #define pi  3.14159265358979323846264338327950288419
// #define pii pair<int,int> 
// #define f first
// #define s second
// #define vpii vector<pair<int , int>>
// #define pb push_back

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
        int ans[n];

        for(int i=0 ; i<n ; i++){
            cin >> ans[i];
        }

        vector<int>Fd,Se;
          vector<int>result;

        for(int i=0 ; i<n ; i++){
            if(ans[i]&1){
                Fd.push_back(ans[i]);
            }
            else{
                Se.push_back(ans[i]);
            }
        }

        sort(Se.begin() , Se.end());
        sort(Fd.begin() , Fd.end());

         int O_cnt=0 , E_cnt = 0;
         for(int i=0 ; i<n ; i++){
            if(ans[i]&1){
              result.push_back(Fd[O_cnt]);
              O_cnt++;
            }
            else{
                result.push_back(Se[E_cnt]);
                E_cnt++;
            }
         }

         if(is_sorted(result.begin() , result.end())){
            cout << "YES" << endl;
         }
         else {
            cout << "NO" << endl;
         }

      }
    
    return 0;
}