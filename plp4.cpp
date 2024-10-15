#include <iostream> 
using namespace std; 

int main(){ 
    int num; 
    cout << "enter a number "; 
    cin >> num; 

    // basic if/else statement
    if (num %2 == 0){ // one condition if/else statement 
        cout << "your number is even" << endl; 
    }
    else{
        cout << "your number is odd" << endl;
    }


    //multi condition and if/else if statement 
    if (num  % 5 == 0 && num  % 2 == 0){ //multi condition if/else statement 
        cout << "your number is divisable by 10" << endl; 
    }
    else if (num % 2 == 0){ // if/elseif/else statement
        cout << "your number is even" << endl;
     }
    else{
        cout << "your number is odd" << endl;
    }

    //short circuit statements
    int a = 1;
    int b = 2;

    if (b != 0 && (a/b) > 1 ){ // && statement
        cout << "this won't print becuase it is not true, a/b is not greater than 1" << endl;
    }
    else {
        cout << "this will print because the second statement is false, though the first is true" << endl; 
    }

    if (b != 0 || (a/b) > 1){ 
        cout << "this will print because both statements don't need to be true" << endl; 
    }
    else {
        cout << "this will not print because only one statement needed to be true" << endl;
    }


    //switch case statement
    int num2; 
    cout << "enter another number between one and four "; 
    cin >> num2;

    switch (num2){ 
        case 1: // each case is for the number you chose
            cout << "your number was 1" << endl; 
            break;
        case 2: 
            cout << "your number was 2" << endl; 
            break; 
        case 3: 
            cout << "your number was 3" << endl; 
            break; 
        case 4: 
            cout << "your number was 4" << endl; 
            break; 
        default: //this is for if you picked a different number 
            cout << "your number is either <1 or > 4" << endl; 
            break;
    }




}