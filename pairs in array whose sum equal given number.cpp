#include<bits/stdc++.h>
using namespace std;
    int getPairsCount(int arr[], int n, int k) {
        // code here
         int count=0;
       unordered_map<int,int> m;
       for(int i=0;i<n;i++){
           if(m.find(k-arr[i])!=m.end()){
               count+=m[k-arr[i]];
           }
           m[arr[i]]++;
       }

       return count;
    }
    int main(){
        int arr[]={1,5,7,1};
        int n=sizeof(arr)/sizeof(arr[0]);
        int k=6;
        cout<<getPairsCount(arr,n,k);
    }