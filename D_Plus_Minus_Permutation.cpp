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
int lcm(int a , int b){
  return (a/__gcd(a,b))*b;
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
      

       int t;
       cin >> t;

       while(t--){
         int a , b , c;
         cin >> a >> b >> c;

           int mxCnt=a/b;
           int mnCnt = a/c;

             int val =  lcm(b ,c);
             
             int newVal = a/val;
             mxCnt-=newVal;
             mnCnt-=newVal;

           int mxAns = 0;
           int mnAns = 0;
           
           int l = 1;
           int r = a;

             int start1 = r-mxCnt+1;
             int end1 = r;

             int start2 = 1 , end2 = l+mnCnt-1;

             mxAns =((mxCnt)*(start1+end1))/2;
             mnAns = ((mnCnt)*(start2+end2))/2;

           cout << mxAns-mnAns << endl;
       }    
    return 0;
}