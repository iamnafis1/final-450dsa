#include<bits/stdc++.h>
using namespace std;

bool ans(int a[],int n,int sum){
      for(int i=0;i<n-2;i++){
            int l=i+1;
            int h=n-1;

            int  target=sum-a[i];

            while(l<h){
                if(a[l]+a[h]==target){
                    return 1;
                }
                else if(a[l]+a[h]>target) h--;
                else l++;
            }
        }
        return 0;
}

int main()
 {
    int t;
    cin>>t;

    while(t--)
    {
        int n,sum;
        cin>>n>>sum;

        int a[n];

        for(int i=0;i<n;i++)
            cin>>a[i];

        sort(a,a+n);


        cout<<ans(a,n,sum)<<endl;
	}
	return 0;
}