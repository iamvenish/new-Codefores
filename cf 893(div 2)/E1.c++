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
       cin  >> t;
       vector<int>ans;
       map<int , int>mp;
       while(t--){
           string s1;
             int n;
           cin >> s1;
           if(s1!="?" && s1!="!"){
            cin  >> n;
           }
           if(s1 == "+"){
            ans.push_back(n);
            mp[n]+=1;
           }
           else if(s1 == "-"){
            while(n--){
               mp[ans.back()]--;
                ans.pop_back();
            }
           }
           else if(s1 == "!"){
             mp[ans.back()]--;
            ans.pop_back();
           }
           else{
              int cnt=0;
              for(auto it : mp){
                  if(it.second!=0){
                    cnt++;
                  }
              }
              cout << cnt << endl;
           }
       }
    return 0;
}