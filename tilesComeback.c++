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
#define forn(i,n) for(int i=0 ; i<n ; i++)


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
       int t;
       cin >> t;

       while(t--){
         int n , k;
         cin  >> n >> k;

         vi a(n);
         map<int , int>mp;
         for(int i=0 ; i<n ; i++){
            cin >> a[i];
            mp[a[i]]++;
         }
         
           int rcnt=0;
           forn(i,n-1){
             if(a[i] == a[i+1])rcnt++;
           }

            if(rcnt==n-1){
                 if(n%k == 0 ||  n>k){
                    cout << "YES" << endl;
                 }
                 else{
                    cout << "NO" << endl;
                 }
            }
            else{

         int cnt=0;

           int i=0 , j=0;
            
            while(i<n){
                int t = k;
                if(mp[a[i]]>=k){
                while(j<n && t>0){
                    if(a[j] == a[i]){
                        t--;
                        j++;
                    }
                    else{
                        j++;
                    }
                }
                if(t==0)cnt++;
                i=j;
                }
                else{
                    i++;
                    j=i;
                }
            }


            if(cnt>=2){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
            }
       }
    
    return 0;
}