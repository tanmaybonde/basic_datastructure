// #include<iostream>
// using namespace std;
// #define MAX 10
// class stack
// {
//      int data[MAX];
//      int top1;
//      int top2;
//      public:
//      stack()
//      {
//           top1=-1;
//           top2=MAX;
//      }
//      int full()
//      {
//           if(top2==top1+1)
//           {
//                return 1;
//           }
//           return 0;
//      }
//      void push(int stno,int x){
//           if(!full())
//           {
//                if(stno==1)
//                {
//                     top1++;
//                     data[top1]=x;
//                }
//                else if(stno==2)
//                {
//                     top2--;
//                     data[top2]=x;
//                }
//           }
//           else
//           {
//                cout<<"Stack is FULL"<<endl;
//           }
//      }
//      int empty(int stno)
//      {
//           if(stno==1 && top1==-1)
//           {
//                return 1;
//           }
//           if(stno==2 && top2==MAX)
//           {
//                return 1;
//           }
//           return 0;
//      }
     
//      int pop(int stno)
//      {
//           if(!empty(stno))
//           {
//                if(stno==1)
//                {
//                     int x;
//                     x=data[top1];
//                     top1--;
//                     return x;
//                }
//                if(stno==2)
//                {
//                     int x;
//                     x=data[top2];
//                     top2++;
//                     return x;
//                }
//           }
//           else
//           {
//                cout<<"Stack is Empty"<<endl;
               
//           }
//           return 0;
//      }
    
// };
// int main()
// {
//      stack st;
//      st.push(1,10);
//      st.push(1,20);
//      st.push(1,30);
//      st.push(1,40);
//      st.push(2,50);
//      st.push(2,60);
//      st.push(2,70);
//      st.push(1,80);
//      st.push(1,100);
//      st.push(2,110);
//      st.push(1,120);
     
//      while(!st.empty(1))
//      {
//           cout<<st.pop(1)<<" ";
//      }
//        while(!st.empty(2))
//      {
//           cout<<st.pop(2)<<" ";
//      }
//      return 0;
// }

// *******************************************************************************************
// ***************************ANOTHER SOLUTION FOR THIS****************************************
// *******************************************************************************************
#include<iostream>
using namespace std;
#define MAX 10
class stack{
        int data[MAX];
        int top1;
        int top2;
    public:    
    stack()
    {
        top1=-1;
        top2=MAX;
    }
    int full()
    {
        if(top2==top1+1)
        {
            return 1;
        }
       return 0;    
    }  
    int empty1()
    {
        if(top1==-1)
        {
            return 1;
        }
        return 0;    
        }
     int empty2()
    {
        if(top2==MAX)
        {
            return 1;
        }
        return 0;    
        }
           
    void push1(int x)
    {
        if(full()==1)
        {
            cout<<"Stack is FULL";
            }
        else
        {
            top1++;
            data[top1]=x;
        }    
    }   
     void push2(int x)
    {
        if(full()==1)
        {
            cout<<"Stack is FULL";
            }
        else
        {
            top2--;
            data[top2]=x;
        }    
    }    
    int pop1()
    {
        if(empty1()==1)
        {
            cout<<"Stack is Empty";
            return 0;
        }
        else
        {
           int x=data[top1];
            top1--;
            return x;
        }    
    }
     int pop2()
    {
        if(empty2()==1)
        {
            cout<<"Stack is Empty";
            return 0;
        }
        else
        {
           int x=data[top2];
            top2++;
            return x;
        }    
    }
};
    
int main()
{
    stack st;
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);
    st.push1(60);
    st.push2(70);
    st.push2(80);
    st.push2(90);
    st.push1(100);
    st.pop2();
    st.pop1();
    st.pop1();
    //st.push1(500);
   // cout<<"stack is full:"<<endl;
    
    //st.push2(100);
    /* Here we will pop two elemnt from our stack menad in our stak their is 5 elements 10 20 30 40 50 then the 40 50 will be pop*/
    //st.pop();
    //st.pop();   
//    while(st.empty2()==0)
//    {
//         cout<<st.pop2()<<" "<<endl;
//    }

    return 0;
}    
