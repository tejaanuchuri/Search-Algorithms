#include<iostream>
using namespace std;
bool linear_search(int arr[10000],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key)
            return true;
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

    if(linear_search(arr,n,key))
        cout<<"Found"<<endl;
    else    
        cout<<"Not Found"<<endl;
    return 0;
}