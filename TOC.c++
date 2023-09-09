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
    string s;
    cin  >> s;
    bool flag = false;
    for(int i=0 ; i<s.size() ; i++){

        if((s[i]>='a' && s[i]<='z') || s[i] == '#'){
            flag = true;
        }
    }

     if(flag){
        cout << "true" << endl;
     }
     else{
        cout << "false" << endl;
     }
    
    return 0;
}