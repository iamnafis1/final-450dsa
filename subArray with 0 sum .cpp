#include<bits/stdc++.h>
using namespace std;
bool subArrayExist(int arr[],int n){
for(int i = 0; i < n; i++)
{
if(arr[i] == 0)
return true;
int sum = arr[i];
for(int j = i + 1; j < n; j++)
{
sum += arr[j];
if(sum == 0)
return true;
}
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