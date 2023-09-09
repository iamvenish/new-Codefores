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
        
        int n;
        cin  >> n;

        vi a(n);

        for(int i=0 ; i<n ; i++){
            cin  >> a[i];
        }

        st(a);
        vi p(n,0);
        int cnt = 0 , j=1;
        int mid = n/2;
        p[mid] = a[n-1];
        for(int i=n-2 ; i>=0 ; i--){
            if(j&1)cnt++;

            if(j&1){
                p[mid-cnt] = a[i];
                j++;
            }
            else{
                p[mid+cnt] = a[i];
                j++;
            }
        }

        for(int i=0 ; i<n ; i++){
            cout << p[i] << " ";
        }

    
    return 0;
}