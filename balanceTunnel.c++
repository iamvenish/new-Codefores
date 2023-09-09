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
   
      int n;
      cin >> n;
      
      vi a(n);
      vi b(n);

      fr(i,n){
         cin  >> a[i];
         a[i]--;
      }

      fr(i , n){
         cin  >> b[i];
         b[i]--;
      }
        
        vi vis(n , 0);

        fr(i,n){
         vis[b[i]] = i;
        }
        vi pos(n , 0);
        fr(i,n){
            pos[i] = vis[a[i]];
        }
   

        int maxi = -1 , cnt=0;

        fr(i , n){
         if(pos[i] > maxi){
            maxi = pos[i];
         }
         else{
            cnt++;
         }
        }

        cout << cnt  << endl;
   return 0;
}