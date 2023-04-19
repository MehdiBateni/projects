#include<iostream>
#include"DataStructure.h"

using namespace std;
// stack<float> s1;
// stack<int> s2(20);
queue<int> Q(5);
string name;
int main(){
     cout<<"Enter your name: ";
     cin>> name;
     cout<<"Hello "<<name;
     cout<<"\n\n\n\n";  
    // cout<<s1.stacksize();
    // cout<<"\n"<<s2.stacksize();
    // cout<<"\n\n\n\n";  
    // for(int i=0;i<102;i++)
    //   if(!s1.push(i))
    //     cout<<"\nError "<<i;
    // while(!s1.empty())
    //   cout<<"\n"<<s1.pop();

    for(int i=0;i<2*Q.queuesize();i++){
     if(!Q.insert(i))
       cout<<"\nError....";
     cout<<Q.queuelen();  
    }  
    cout<<"\n\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

    cout<<"\n\n"<<Q.remove();
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();
    
    cout<<"\n\n"<<Q.remove();
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

    cout<<"\n\n"<<Q.remove();
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

    cout<<"\n\n"<<Q.insert(44);
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

    cout<<"\n\n"<<Q.insert(55);
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

    cout<<"\n\n"<<Q.insert(66);
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

    cout<<"\n\n"<<Q.insert(77);
    cout<<"\n"<<Q.queuelen();  
    cout<<"\n"<<Q.atfront();
    cout<<"\n"<<Q.atrear();

return 0;

}