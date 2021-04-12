#include<iostream>
using namespace std;
bool Binary_search(int arr[10000],int l,int r,int key){
    while(l<=r){
        int m = l+(r-l)/2;
        if(arr[m]==key)
            return true;
        else if(key<arr[m])
            r = m-1;
        else    
            l = m+1;
    }
    return false;
}
int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>key;

    if(Binary_search(arr,0,n-1,key))
        cout<<"Found"<<endl;
    else    
        cout<<"Not Found"<<endl;
    return 0;
}