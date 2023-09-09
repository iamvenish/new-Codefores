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
            int n;
            char ch;
            cin >> n >> ch;

            string s;
            cin >> s;
            int result=0;
            if(ch == 'g'){
                result = 0;me
            }
            else{
             int init = 0;
             for(int i=0 ; i<s.size() ;i++){
                if(s[i] == 'g'){
                    init = i;
                    break;
                }
             }
            for(int i=0 ; i<s.size() ; i++){
                if(s[i] == ch){
                    int cnt = 0 ,  flag = 0;
                    for(int j=i+1; j<s.size() ; j++){
                        cnt++;
                        if(s[j] == 'g'){
                            flag++;
                            break;
                        }
                    }
                    i = i+cnt;
                    if(flag){
                        result = max(result , cnt);
                    }
                    else{
                        result = max(result , cnt+1+init);
                    }
                }
            }
        }
            cout << result  << endl;

        }
    return 0;
}