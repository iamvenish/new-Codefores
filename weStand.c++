#include<bits/stdc++.h>
using namespace std;
#define int long long int


void solve(){
        int n;
          cin >> n;

          vector<int>a(n)  , b , c;
          set<int>s;
          for(auto &it : a){
            cin >> it;
            s.insert(it);
          }

          if(s.size() == 1){
              cout << -1 << endl;
              return;
          }
            int maxi = *max_element(a.begin() , a.end());
            for(auto &it : a){
                if(it!=maxi){
                    b.push_back(it);
                }
                else{
                    c.push_back(it);
                }
            }

               cout << b.size() << " " << c.size() << endl;

               for(int i=0 ; i<b.size() ; i++){
                cout << b[i] << " ";
               }

               for(int j=0 ; j<c.size() ; j++){
                  cout  << c[j] <<  " ";
               }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t; cin>>t;
    while(t--){
           solve();
    }
     
    return 0;
}