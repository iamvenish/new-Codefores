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
void build(int index , int low , int high , int arr[] , int seg[] , int orElement){
    if(low == high){
        seg[index] = arr[low];
        return;
    } 
       int mid  = low + (high - low)/2;
    build(2*index+1 , low , mid , arr , seg , !orElement);
    build(2*index+2 , mid+1 , high , arr , seg , !orElement);

    if(orElement){
        seg[index] = seg[2*index+1] | seg[2*index+2];
    }
    else{
        seg[index] = seg[2*index+1]^seg[2*index+2];
    }
}
void update(int index , int low , int high , int pos , int val , int seg[] , int orElement){
     //base case 
     if(low == high){
        seg[index] = val;
        return;
     }

     int mid = low + (high-low)/2;

     if(pos<=mid){
        update(2*index+1 , low , mid , pos , val , seg , !orElement);
     }
     else{
        update(2*index+2 , mid+1 , high , pos , val , seg , !orElement);
     }

     seg[index] = min(seg[2*index+1] , seg[2*index+2]);

      if(orElement){
        seg[index] = seg[2*index+1] | seg[2*index+2];
    }
    else{
        seg[index] = seg[2*index+1]^seg[2*index+2];
    }
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0); 

    int n , q;
    cin >> n >> q;
    int el = pow(2 , n);
    int arr[el];
     for(int i=0 ; i<el ; i++){
        cin >> arr[i];
     }
     int seg[2*el];

     if(n%2 == 0){
        build(0 , 0 , el-1 , arr , seg ,0);
     }
     else{
        build(0 , 0 , el-1 , arr , seg , 1);
     }

     while(q--){
        int i , val;
        cin  >> i >> val;
        i--;
        
        if(n%2 == 0){
            update(0 , 0 , el-1 , i , val , seg ,0);
        }
        else{
            update(0 , 0 , el-1 , i , val , seg , 1);
        }

        cout << seg[0] << endl;baa
     }
    return 0;
}