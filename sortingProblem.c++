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
void convert(int j , vector<vector<char>>&ch){
      int n = ch.size();
     for(int i=0 ; i<n ; i++){
         int index = ch[i][j]-'A';
         ch[i][j] = 'A'+25-index;
     }
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
             
       int n , m;
       cin >> n >> m;

       vector<vector<char>>ch(n , vector<char>(m));
       map<string , int>mp;
           string str;
       for(int i=0 ; i<n ; i++){
        string str;
        for(int j=0 ; j<m ; j++){
            cin  >> ch[i][j];
            str+=ch[i][j];
        }
        mp[str] = i+1;
       } 

        for(int i=0 ; i<m ; i++){
            if((i+1)%2==0){
                 // convert first a-z to z-a;
                 convert(i , ch);
            }
        }


        vector<string>st;

        for(int i=0 ; i<n ; i++){
            string st1;
            for(int j=0 ; j<m ; j++){
                st1+=ch[i][j];
            }
            st.pb(st1);
        }

        sort(st.begin() , st.end());

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                ch[i][j] = st[i][j];
            }
        }


         for(int i=0 ; i<m ; i++){
            if((i+1)%2==0){
                 // convert first Z-A to A-Z;
                 convert(i , ch);
            }
        }


        vector<int>maped;

        for(int i=0 ; i<n ; i++){
            string newStr;

            for(int j=0 ;j<m ; j++){
                newStr+=ch[i][j];
            }

            maped.pb(mp[newStr]);
        }


         for(int i=0 ; i<maped.size() ; i++){
            cout << maped[i] << " ";
         }
    return 0;
}