#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define vii vector<vector<int>>
#define mii map<int,int>
#define int long long
#define pi  3.14159265358979323846264338327950288419
#define pii pair<int,int> 
#define f first
// #define s second
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
        

          string s;
           cin >> s;

           int mini = INT_MAX , maxi = 0 , cnt=0;

           for(char ch = 'a' ; ch<='z' ; ch++){
             cnt=0 , maxi=0;
             for(int i=0 ; i<s.size() ; i++){

                if(s[i]!=ch){
                    cnt++;
                    if(cnt > maxi){
                        maxi = cnt;
                    }
                }
                else{
                    cnt=0;
                }
             }

             if(maxi < mini){
                mini = maxi;
             }
           }

           if(mini == 0){
            cout << 0 << endl;
           }
           else {
            cnt = 0;
              while(mini!=1){
                mini/=2;
                cnt++;
              }
              cout << cnt+mini << endl;
           }
       }

    
    return 0;
}