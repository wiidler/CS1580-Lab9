// Programmer: Will Weidler
// ID: wawq97
// Date: 4/11/22
// File: lab9.cpp
// Assignment: Lab 9
// Purpose: This program takes in information from the user and by using classes, outputs info in an organized manner

#include "functions.h"
#include <iostream>
using namespace std;

int main(){
    GuildMember playerOne;
    string name = "";
    string rank = "";
    int age = -1;
    int level = -1;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter class: ";
    cin >> rank;
    cout << "Enter level: ";
    cin >> level;
    playerOne.setInfo(name,age,level,rank);
    playerOne.passTime();
    playerOne.passTime();
    cout << endl;
    playerOne.print();
    cout << endl;
    cout << "Member's name is: " << playerOne.getName() << endl;
    cout << "Member's age is: " << playerOne.getAge() << endl;
    return 0;
}