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
 
 
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
      int n , m;
      cin  >> n >> m;
 
      vi a(m);
      vi b(n);
 
      for(int i=0 ; i<n ; i++){
        cin  >> b[i];
      }
 
      for(int i=0 ; i<m ; i++){
        cin  >> a[i];
      }
 
      map<int , int>mp;
      vi c = a;
      sort(a.begin() , a.end());
      sort(b.begin() , b.end());
       if(n == 1 && m == 1){
        if(b[0] > a[0]){
            cout  << 0 << endl;
        }
        else{
            cout << 1 << endl;
        }
       }
       else{
      int cnt = 0 , j=n-1 , i=m-1;
       
       while(i>=0){
        while(b[j] >a[i]){
            j--;
            cnt++;
        }
          mp[a[i]] = n-cnt;
          i--;
       }
 
       for(int i=0 ; i<m ; i++){
          if(mp[c[i]]>=0){
            cout << mp[c[i]] << " ";
          }
          else{
            cout << 0 << " ";
          }
       }
       }
    return 0;
}