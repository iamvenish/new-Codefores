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
        vector<int>vals(n);

        for(int i=0 ; i<n ; i++){
            cin >> vals[i];
        }

         sort(vals.rbegin() , vals.rend());


        bool flag = false;
        for(int i=0 ; i<n-2 ; i++){
             int lo = i+1;
             int  hi = n-1;
             int first = vals[i]*vals[i];
             while(lo<hi){
                int second = vals[lo]*vals[lo];
                int third = vals[hi]*vals[hi];
                int sum = first - (second + third);

                if(sum == 0){
                    flag = true;
                    break;
                }
                else if(sum > 0){
                    hi--;
                }
                else{
                    lo++;
                }
             }
        }

        if(flag == true){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
      }

    
    return 0;
}