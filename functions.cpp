#include "functions.h"
#include <iostream>
using namespace std;

/***********************FUNCTION DEFINITIONS***********************/

string GuildMember::getName() const{
    return m_name;
}

int GuildMember::getAge() const{
    return m_age;
}

void GuildMember::setInfo(string name, int age, int level, string rank){
    m_name = name;
    m_age = age;
    m_level = level;
    m_class = rank;
    return;
}

void GuildMember::passTime(){
    age();
    return;
}

void GuildMember::print() const{
    cout << "Name: " << m_name << endl;
    cout << "Class: " << m_class << endl;
    cout << "Level: " << m_level << endl;
    cout << "Age: " << m_age << endl;
    return;
}

void GuildMember::age(){
    m_age++;
    return;
}