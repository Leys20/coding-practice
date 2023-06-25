#include <iostream>
using namespace std;
int main() {
    
   /*Odd or Even
Create a program that determines if a number is odd or even number. Ask the user for a number input then display if the given number is odd or event.

Example:
Enter number: 8
The number is even
*/

    int num;
    cout<<"enter number";
    cin>>num;

    if(num%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
        return 0;
    }
