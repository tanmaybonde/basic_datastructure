#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int i=1;
    int j=0;
    int flag=0;
    for(i=1;i<n && flag==0;i++){
        flag=1;
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=0;
            }
        }
    }

    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


// time complexity is O(n)