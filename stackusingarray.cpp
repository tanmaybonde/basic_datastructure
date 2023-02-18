#include<iostream>
using namespace std;
#define MAX 15
class stack{
    int data[MAX];
    int top;
    public:
        stack(){
            top=-1;
        }
    int full(){
        if(top==MAX-1){
            return 1;
        }
      return 0;
    }
    int empty(){
        if(top==-1){
            return 1;
        }
        return 0;
    }    
    void push(int x) {
        if(!full()){
            top++;
            data[top]=x;
        }
        else{
                cout<<"Stack is full";
        }
    }
    int pop(){
        if(!empty()){
            int x=data[top];
            top--;
            return x;
           
        }
        else{
            cout<<"Stack is empty";
            return 0;
        }
    }   
 };
int main(){
    stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // cout<< st.pop();
    while(st.empty()==0){
        cout<<st.pop()<<" ";
    }
    return 0;
}