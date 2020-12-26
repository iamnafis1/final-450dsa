#include <bits/stdc++.h>
using namespace std;
int duplicate(int arr[], int n){
  unordered_map<int,int> mp;
    for(int i = 0; i<n;i++){
       mp[arr[i]]++;
    }

    for(int i = 0;i <n;i++){
        if(mp[i] > 1)
            return i;
    }
    return 0;
}
 	
int main(){
	int arr[]={1,3,4,2,2};
	int n=sizeof(arr)/sizeof(arr[0]);
   cout<<duplicate(arr,n);
}