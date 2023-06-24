
#include <iostream>
using namespace std;
int main() {
    
   /*Create a stats program for the famous valorant gun. The program should determine the amount of bullet that the gun have. Ask the user for the current number of ammo, ask if how many shots are fired and ask if he wants to reload. Reloading the gun refreshes the number of bullets to 30 and firing the gun diminishes the number of ammo. Then diisplay the total number of bullets.

    Example
    Enter number of ammo: 30
    How many shots fired: 28
    Do you want to reload? 1 - yes 2 - no  2
    You have 2 bullets left.
    */

int ammo;
int shot;
bool reload;

cout<<"number of ammo";
cin>>ammo;

cout<<"shots fired";
cin>>shot;

cout<<"do you want to reload";
cin>>reload;

if(reload==1){
    cout<<ammo;
}else if(reload==0){
    cout<<ammo-shot;
}





   
    return 0;
}
