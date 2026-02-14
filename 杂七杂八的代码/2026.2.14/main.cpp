#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

class Dish {
public:
    string name;
};

void print(string str) {
    cout << str << endl;
}

void askForMore(string dishName) {
    while(true) {
        print("Do you want more?");
        string choice2;
        cin >> choice2;
        if(choice2 == "yes") {
            print("Give you, it is my " + dishName + "!Hhh");
        }
        else if(choice2 == "no") {
            print("Thank you, sir.");
            break;
        }
        else {
            print("I don't understand, please input yes or no.");
        }
    }
}

int main() {
    print("Hello! Sir, Welcome to the bitchespark, what dishes you want?");
    print("Please look at the menu:");
    print("1. Bitches'ass");
    print("2. Dick");
    print("3. Pussy");
    print("4. semen");
    print("Please input your choice:");

    cout << "I want a/some ";
    string choice;
    cin >> choice;

    if(choice == "Bitches'ass") {
        print("Give you, it is my ass!Hhh");
        askForMore("ass");
    }
    else if(choice == "Dick") {
        print("Give you, it is my dick!Hhh");
        askForMore("dick");
    }
    else if(choice == "Pussy") {
        print("Give you, it is my pussy!Hhh");
        askForMore("pussy");
    }
    else if(choice == "semen") {
        print("Give you, it is my semen!Hhh");
        askForMore("semen");
    }
    else {
        print("I don't have this dish, please choose other one asshole.");
    }

    return 0;
}
