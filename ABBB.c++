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
       cin >> t;

       while(t--){
          string s;
          cin >> s;
            stack<char>st;
            int i=0;
          while(i<s.size()){
              if(st.empty() && s[i] == 'A'){
                st.push(s[i]);
              }
              else if(st.empty() && s[i] == 'B'){
                 st.push(s[i]);
              }
              else if(!st.empty() && s[i] == 'A'){
                   if(st.top() == 'A'){
                    st.push(s[i]);
                   }
                   else if(st.top() == 'B'){
                      st.push(s[i]);
                   }
                   else{
                       st.pop();
                   }
              }
              else if(!st.empty() && s[i] == 'B'){
                   
                   if(st.top() == 'A' && s[i] == 'B'){
                    st.pop();
                   }
                   else if(st.top() == 'B' && s[i] == 'B'){
                       st.pop();
                   }
                   else {
                    st.push(s[i]);
                   }
              }

              i++;
          }

          if(st.empty()){
            cout << 0 << endl;
          }
          else {
              cout << st.size() << endl;
          }
       }
    
    return 0;
}