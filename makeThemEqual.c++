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
bool check(string &s){
    int cnt = 0;
    for(int i=0 ; i<s.size()-1 ; i++){
        if(s[i] == s[i+1]){
            cnt++;
        }
    }

    if(cnt == s.size()-1){
        return true;
    }

    return false;
}
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
        char ch;
        cin >>ch;

        string s;
        cin >> s;
         if(check(s) == true){
            cout << 0 << endl;
         }

        int size =1 , cnt=0;
        vector<int>Xs;
        size++;
        while(size<=n){
            for(int i=0 ; i<s.size() ; i++){
                if((i+1)%size!=0 && s[i]!=ch){
                    s[i] = ch;
                    cnt++;
                }
            }
            if(cnt!=0){
                Xs.pb(size);
            }
            size++;
            if(check(s) == true){
                    break;
            }
        }
          if(Xs.size()!=0){
        cout << Xs.size() << endl;

        for(int i=0 ; i<Xs.size() ; i++){
            cout << Xs[i] << " ";
        }
        }
      }
    
    return 0;
}