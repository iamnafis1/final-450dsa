#include<bits/stdc++.h>
using namespace std;
void MaxMin(int a[],int n){
    int max=a[0];
    int min=a[0];
  for(int i=1;i<n;i++){
      if(a[i]>max) max=a[i];
      if(a[i]<min) min=a[i];
  }
  cout<<"maximum is:"<<max<<"\n";
  cout<<"minimum is:"<<min;
}
int main(){
    int a[]={12,34,55,70,2,-1,99};
    int n=sizeof(a)/sizeof(a[0]);
    MaxMin(a,n);
}