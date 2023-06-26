#include <iostream>
using namespace std;

int main() {
    
    /*
    Summation of numbers
    Make use of an array to get 5 numbers from a user then display the total of all given numbers;

    Enter number 1: 5
    Enter number 2: 5
    Enter number 3: 5
    Enter number 4: 5
    Enter number 5: 1
    Total: 21
        
    
    
    */
   
   
   int num[5];
   
    cout<<"Enter number 1:";
    cin>>num[0];
   
    cout<<"Enter number 2:";
    cin>>num[1];
        
    cout<<"Enter number 3:";
    cin>>num[2];
    
    cout<<"Enter number 4:";
    cin>>num[3];
    
    cout<<"Enter number 5:";
    cin>>num[4];
    
    int totalNumber=num[0]+num[1]+num[2]+num[3]+num[4];
    
   cout<<"total:"<<totalNumber;
    return 0;
}
