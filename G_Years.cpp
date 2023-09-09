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
     

      int n;
      cin >> n;
        
        map<int , int>mp;
        int first=0, second=0;
        // int maxi=0;
        // vector<pair<int , int>>vec;
       for(int i=0 ; i<n ; i++){
          int b , d;
          cin >> b >> d;
          mp[b]++;
          mp[d]--;
       }
         int maxi=0;
       for(auto it : mp){
           maxi+=it.second;
           if(maxi > second){
               second = maxi;
               first = it.first;
           }
       }
       cout << first << " " << second << endl;
    return 0;
}