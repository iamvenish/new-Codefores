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
            string str1 , str2;
            cin  >> str1 >> str2;

            if(str1[0] == str1[str1.size()-1] && str2[str2.size()-1] == str2[0] && str1[0] == str2[0]){
                cout  << "YES" << endl;
            }

            if(str1[0] != str2[0] && str1[str1.size()-1]!=str2[str2.size()-1]){
                cout << "NO" << endl;
            }

               bool check = false;

               for(int i=0 ; i<str1.size() ; i++){
                  if(str1[i] == str1[0] && str2[i] == str1[0] && str1[i+1]==str2[i+1] && str1[i+1]==str1[str1.size()-1]){
                     check = true; 
                  }
               }

               if(check){
                  cout << "YES" << endl;
               }
               else{
                cout << "NO" << endl;
               }
             }
    
    return 0;
}