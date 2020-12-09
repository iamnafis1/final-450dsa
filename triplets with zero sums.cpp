#include<bits/stdc++.h>
using namespace std;
bool findTriplets(int arr[], int n)
{ 
    //Your code here
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==0) return 1;
            if(sum>0) k--;
            else j++;
            
            
        }
    }
    return 0;
}
int main(){
	int arr[]={-1,0,1,2,-1,-4};
	int n=sizeof(arr)/sizeof(arr[0]);
	if(findTriplets(arr,n))
	cout<<"1"<<"\n";
	else
	cout<<"0";
}