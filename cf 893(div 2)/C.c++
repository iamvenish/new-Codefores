// brute force approach 
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
int maxi = 0;
void permutations(int arr[] , int n){
    int maxi=0;
    int result[n];
    sort(arr , arr+n);

    do{
        int arr1[n];

    for(int i=0 ; i<n ; i++){
        arr1[i] = __gcd(arr[i] , arr[(i%n)+1]);
    }
      int element = *max_element(arr1 , arr1+n);
      if(maxi<element){
        maxi = element;
        for(int i=0 ; i<n ; i++){
            result[i] = arr[i];
        }
      }
    }while(next_permutation(arr , arr+n));
    for(int i=0 ; i<n ; i++){
        cout  << result[i] << " ";
    }
}
int32_t main()
{
 ios_base:: sync_with_stdio();
 cin.tie(0);
 cout.tie(0);
      int t;
      cin  >> t;

      while(t--){
         int n;
         cin >> n;
         int arr[n];
         for(int i=1 ; i<=n ; i++){
            arr[i-1] = i;
         }

         permutations(arr , n);
      }

    
    return 0;
}