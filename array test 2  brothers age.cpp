#include <iostream>
using namespace std;

int main() {
    
    /*
    There are two brothers with different ages. Ask for their name and age then display who is older.

    Name of brother 1: clarence
    Enter age: 12
    Name of brother 2: kim
    Enter age: 10
    clarence is older
        
        
    
    */
    
    
    char bro1name[10];
    int bro1age;
    char bro2name[10];
    int bro2age;
    
    cout<<"Enter name of brother 1:";
    cin>>bro1name;
    cout<<"Enter bro1 age:";
    cin>>bro1age;
    cout<<"Enter name of brother 2:";
    cin>>bro2name;
    cout<<"Enter bro2 age:";
    cin>>bro2age;
    
    if(bro1age>bro2age){
        cout<<bro1name<<" is older";
    }else{
        cout<<bro2name<<" is older";
    }
    
    
    
    
    return 0;
}
