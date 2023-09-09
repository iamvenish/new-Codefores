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
       
        int n , m;
        cin >> n >> m;
          vector<int>ans;
          int temp;
        for(int i=0 ; i<n ; i++){
            cin >> temp;
            ans.pb(temp);
        }
        vector<int>original = ans;
        // mini find 
        int cnt = m;
        int mini = INT_MAX , index = 0;
        while(cnt>0){
           for(int i=0 ; i<n ; i++){
              if(ans[i] < mini){
                mini = ans[i];
                index = i;
              }
           }

           ans[index]++;
           cnt--;
           mini = INT_MAX;
        }

        int Kmini = *max_element(ans.begin() , ans.end());

        int Kmaxi = *max_element(original.begin() , original.end());

        cout << Kmini << " " << Kmaxi+m << endl;

    
    return 0;
}