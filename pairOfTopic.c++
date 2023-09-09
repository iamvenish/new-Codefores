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
       cin  >> n;

       vi a(n);
       vi b(n);

       for(int i=0 ; i<n ; i++){
          cin  >> a[i];
       }

       for(int i=0 ; i<n ; i++){
        cin  >> b[i];
       }

       vi c(n);
       for(int i=0 ; i<n ; i++){
          c[i] = a[i]-b[i];
       }

       st(c);

       int i=0 , j = n-1;
       int cnt=0;
       while(j>0 && i<j){
        if(c[i] + c[j] > 0){
            cnt+=j-i;
            j--;
        }
        else{
            i++;
        }
       }

       cout  << cnt  << endl;
    return 0;
}
