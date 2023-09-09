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
#define  deq deque<int>
#define pb push_back
#define st(a) sort(a.begin() , a.end())
#define forn(i,n) for(int i=0 ; i<n ; i++)


int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
    
        int n , k;
        cin >> n >> k;

        vi a(n);
        deque<int>dq;
        map<int , int>mp;
        forn(i,n){
            cin >> a[i];
            dq.push_back(a[i]);
            mp[a[i]]++;
        } 

          if(n<k){
            int maxi = 0;
              for(int i=0 ; i<n ; i++){
                  maxi =  max(maxi , a[i]);
              }

              cout << maxi << endl;
          }
          else{
         bool flag = true;
         int ans = 0;
         while(flag){
             int first = dq.front();
             dq.pop_front();
             int second = dq.front();
             dq.pop_front();

             if(first > second){
                 dq.push_front(first);
                 dq.push_back(second);
                 mp[first]++;
                 if(mp[first]-1==k){
                    ans = first;
                   break;
                 }
             }
             else{
                dq.push_front(second);
                dq.push_back(second);
                mp[second]++;
                if(mp[second]-1 == k){
                    ans = second;
                  break;
                }
             }
         }
         cout << ans << endl; 
        }

   
    return 0;
}