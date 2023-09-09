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
      
        int n , k;
        cin >> n >> k;

        string s;
        cin  >> s;
          int maxi = 0 , cnt=0 , rcnt=k;
          int i=0;
        for(char ch = 'a' ; ch<='z' ; ch++){
            while(i<n){
            if(ch == s[i]){
              while(ch == s[i] && i<n && rcnt>0){
                rcnt--;
                i++;
              }
              if( rcnt == 0){
                cnt++;
                rcnt = k;
              }
            }
            else{
                rcnt = k;
                i++;
            }
            }

            maxi = max(maxi , cnt);
            i=0;
            cnt=0;
            rcnt = k;
        }

        cout << maxi << endl;

    
    return 0;
}