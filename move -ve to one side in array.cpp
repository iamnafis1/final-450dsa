#include <bits/stdc++.h>
using namespace std;
void arrangeArray(int a[],int n){
	int i,j;
	j=0;
	for(int i=0;i<n;i++){
		if(a[i]<0){
			if(i!=j){
				int temp= a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			j++;
		}
	}
}
void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
	int a[]={1,-3,5,6,-4,-6,7,-8,7};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"original array is:"<<"\n";
	printArray(a,n);
	arrangeArray(a,n);
	cout<<"\n";
	cout<<"arranged array is:"<<"\n";
	printArray(a,n);
}