#include<bits/stdc++.h>
using namespace std;
void sort012(int[],int);
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort012(a,n);
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
void sort012(int a[], int n)
{
    // coode here 
    int count_0=0;
    int count_1=0;
    int count_2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) count_0++;
        if(a[i]==1) count_1++;
        if(a[i]==2)count_2++;
    }
    for(int i=0;i<count_0;i++){
        a[i]=0;
    }
    for(int i=count_0;i<(count_0+count_1);i++){
        a[i]=1;
    }
    for(int i=(count_0+count_1);i<n;i++){
        a[i]=2;
    }
}
