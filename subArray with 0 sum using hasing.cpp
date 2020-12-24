#include<bits/stdc++.h>
using namespace std;
bool subArrayExist(int arr[],int n){
unordered_set<int>sumSet;
int sum=0;
for(int i=0;i<n;i++){
	sum+=arr[i];
	if(sum==0||sumSet.find(sum)!=sumSet.end())
	return true;
	
	sumSet.insert(sum);
}
return false;
}
int main(){
    int arr[]={4, 2 , -3 ,1 ,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    if(subArrayExist(arr,n))
    cout<<"yes a subarray found with 0 sum";
    else
    cout<<"no such subarray";
    return 0;
}