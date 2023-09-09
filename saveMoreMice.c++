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
    int target , n;
    cin >> target >> n;
     vector<int>arr(n);
     for(int i=0 ; i<n ; i++){
        cin >> arr[i];
     }


     sort(arr.rbegin() , arr.rend());
     int catP = 0;
     int cnt=0;
     for(int i=0 ; i<n ; i++){
        if(catP < arr[i]){
            catP+=(target-arr[i]);
            cnt++;
        }
        else{
            break;
        }
     }
      cout  << cnt  << endl;
  }
    
    return 0;
}