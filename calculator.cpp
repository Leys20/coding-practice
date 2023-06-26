#include <iostream>
using namespace std;
int main() {
    
   /*Enter operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division): 0
Invalid operation

Enter operation (1 - addition, 2 - subtraction, 3 - multiplication, 4 - division): 1
Enter first number: 3
Enter second number: 7
Output is 10
*/



int operation;
int firstnumber;
int secondnumber;
    
        cout<<"enter operation";
        cin>>operation;

        if(operation==1){cout<<"first number";
            cin>>firstnumber;
            cout<<"second number";
            cin>>secondnumber;
            cout<<firstnumber+secondnumber;
        }else if(operation==2){cout<<"first number";
            cin>>firstnumber;
            cout<<"second number";
            cin>>secondnumber;
            cout<<firstnumber-secondnumber;
        }else if(operation==3){cout<<"first number";
            cin>>firstnumber;
            cout<<"second number";
            cin>>secondnumber;
            cout<<firstnumber*secondnumber;
        }else if(operation==4){cout<<"first number";
            cin>>firstnumber;
            cout<<"second number";
            cin>>secondnumber;
            cout<<firstnumber/secondnumber;
        }else{
            cout<<"invalid operation";
        }
        


    return 0;
}
