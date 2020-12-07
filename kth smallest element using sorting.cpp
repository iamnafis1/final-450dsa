#include<bits/stdc++.h>
using namespace std;
int kthSmallest(int a[],int n,int k){
    sort(a,a+n);
    return a[k-1];
}
int main(){
    int a[]={5,1,99,76,55,0};
    int n=sizeof(a)/sizeof(a[0]);
    int k=5;
    cout<<"kth samllest element is:"<<kthSmallest(a,n,k);
    return 0;
}
