#include<bits/stdc++.h>
using namespace std;
void reverseArray(int A[],int start, int end){
    while(end>start){
        int temp=A[start];
        A[start]=A[end];
        A[end]=temp;
        start++;
        end--;
    }
}
void printArray(int A[],int size){
    for(int i=0;i<size;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={1,2,3,4,5,6,7,8,9,10};
    int size=sizeof(A)/sizeof(A[0]);
    printArray(A,size); //to print original array;
    reverseArray(A,0,size-1);
    cout<<endl;
    cout<<"Reverse Array is:"<<"\n";
    //now calling reverse array
    printArray(A,size);
    
}