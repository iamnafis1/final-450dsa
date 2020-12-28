#include <bits/stdc++.h>
using namespace std;
 void NbyKelement(int a[],int n,int k){
 	int x=n/k;
 	unordered_map<int,int> freq;
 	for(int i=0;i<n;i++){
 		freq[a[i]]++;
 	}
 	for(auto i:freq){
 		if(i.second>x){
 			cout<<i.first<<"\n";
 		}
 	}
 }

int main() {
	  int a[]=  { 1, 1, 2, 2, 3, 5, 
                  4, 2, 2, 3, 1, 1, 1 };
    int n = sizeof(a) / sizeof(a[0]);
    int k = 4;
     NbyKelement(a,n,k);
	return 0;
}