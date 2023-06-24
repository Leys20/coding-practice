#include <iostream>
using namespace std;

int main() {
    
    /*
Vandal Stats
Create a stats program for the famous valorant gun. The program should determine the amount of bullet that the gun have. Ask the user for the current number of ammo, ask if how many shots are fired and ask if he wants to reload. Reloading the gun refreshes the number of bullets to 30 and firing the gun diminishes the number of ammo. Then diisplay the total number of bullets.

Example
Enter number of ammo: 30
How many shots fired: 28
Do you want to reload? 1 - yes 0 - no  
You have 2 bullets left.
    
    
    */
   
   
   char firstName[20];
   char lastName[20];
   int  usersAge;
   int ammo;
   int shotsFired;
   bool reload;
   
   cout<<"Enter user's first name:";
   cin>>firstName;
   
   cout<<"Enter user's last name:";
   cin>>lastName;
   
   cout<<"User's age:";
   cin>>usersAge;
   
   cout<<"Hello my name is"<<" "<<firstName<<" "<<lastName<<" "<<"and my age is"<<" "<<usersAge<<"\n";
   
   
   cout<<"Enter number of ammo:";
   cin>>ammo;
   
   
   cout<<"How many shots fired?:";
   cin>>shotsFired;
   
   cout<<"Do you want to reload? 1- yes 0-no:";
   cin>>reload;
   
   if(reload==0){
       cout<<"You have"<<" "<<ammo-shotsFired<<" "<< "bullets left";
   }else {
       cout<<"Bullets left"<<" "<<ammo;
   }
   
   
    return 0;
}
