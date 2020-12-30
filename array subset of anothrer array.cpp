#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int m,n,x=0,count=0;
	    cin>>m>>n;
	    set<int> s1;
	    int arr[n];
	    for(int i=0;i<m;i++){
	        cin>>x;
	        s1.insert(x);
	    }
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
	        if(s1.count(arr[i])){
	            count++;
	        }
	    }
	    if(count==n)cout<<"Yes\n";
	    else cout<<"No\n";
	    
	}
}