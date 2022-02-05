// SWITCH STATEMENT 



#include <iostream>
using namespace std;

 int main(){

     int age;
     cout << "Enter your age" << endl;
     cin >> age;

     switch(age){
         case 18:
             cout << "You are 18 years old" << endl;
             break;

        case 20:
            cout << "You are 20 years old" << endl;
            break;

        case 23:
            cout << "You are 23 years old" << endl;
            break;

        default:
            cout << "No given value matched" << endl;
        
     }
}