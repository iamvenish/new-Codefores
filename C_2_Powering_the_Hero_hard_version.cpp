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
          int n;
          cin >> n;
            vi a(n);

            forn(i,n){
                cin >> a[i];
            }

            priority_queue<int>pq;
             int power = 0;
             bool flag = false;
            for(int i=0 ; i<n ; i++){
                if(a[i] == 0){
                    if(!pq.empty()){
                       power+=pq.top();
                       pq.pop();
                       flag = true;
                    }
                    else {
                        continue;
                    }
                }
                else{
                    if(flag == true){
                        pq = priority_queue<int>();
                        flag = false;
                    }
                    pq.push(a[i]);
                }
            }

            cout << power << endl;
       }
    return 0;
}