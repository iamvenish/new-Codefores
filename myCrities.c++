#include <bits/stdc++.h>
using namespace std;

int32_t main(){

         
       int t;
       cin >> t;

       while(t--){
           int a ,b ,c;
            cin >> a >> b >> c;
          vector<int>arr(3);

          arr[0] = a;
          arr[1] = b;
          arr[2] = c;

          sort(arr.begin() , arr.end());

          int lo=0 , hi=2;
         bool flag = false;
          while(lo<hi){
              int sum = arr[lo] + arr[hi];

              if(sum>=10){
                 flag = true;
                  break;
              }
              else {
                   lo++;
              }
          }

          if(flag){
            cout << "YES" << endl;
          }
          else {
            cout << "NO" << endl;
          }
       }
       return 0;}
