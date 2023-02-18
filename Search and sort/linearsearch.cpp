#include<iostream>
using namespace std;
int lsearch(int num[],int ind,int key){
    for(int i=0;i<=5;i++){
        if(num[i]==key){
          return 1;
        }
    }
    return 0;
}
int main(){
    int num[5]={10,20,50,60,80};
    int a;
    cout<<"Enter the no you want to search-->";
    cin>>a;
    if(lsearch(num,5,a)==0){
        cout<<"not found";
        }
        else{
            cout<<"found";
            
    }
    return 0;
}
