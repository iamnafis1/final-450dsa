#include<bits/stdc++.h>
using namespace std;
void rotateArray(int a[],int n){
    int last=a[n-1];
    for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
    }
    a[0]=last;
}
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<"original array is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
    rotateArray(a,n);
    cout<<"rotated array is:";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}