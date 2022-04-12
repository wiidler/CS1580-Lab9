#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

/***********************FUNCTION DOCUMENTATION***********************/

// Function: string getName() const;
// Description: This function returns the name of the current GuildMember
// Pre: None
// Post: The string value will be returned

// Function: int getAge() const;
// Description: This function returns the age of the current GuildMember
// Pre: None
// Post: The integer value will be returned

// Function: void setInfo(string name, int age, int level, string rank);
// Description: This function sets the values for the GuildMember
// Pre: None
// Post: The name, age, level, and class will be entered into the object.

// Function: void passTime();
// Description: This function calls the private function age();
// Pre: None
// Post: Calls age()

// Function: void print() const;
// Description: This function outputs the data stored in the object
// Pre: A previously filled in object GuildMember
// Post: Outputs text into the console corresponding to the set GuildMember data

// Function: void age();
// Description: This function increments the age value of the GuildMember
// Pre: None
// Post: Increments age, returns void

/***********************CLASS DEFINITION***********************/
class GuildMember{
    public:
        // Getter and Setter functions
        string getName() const;
        int getAge() const;
        void setInfo(string name, int age, int level, string rank);
        void passTime();
        void print() const;
    private:
        string m_name;
        string m_class;
        int m_level;
        int m_age;
        void age();
};
#endif