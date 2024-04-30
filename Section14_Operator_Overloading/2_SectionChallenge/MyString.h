#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>


class MyString
{
    friend std::ostream &operator<<(std::ostream &os, const MyString &rhs);
    friend std::istream &operator>>(std::istream &is, MyString &rhs);
private:
    char *str;
public:
    //Constructor
    MyString();

    //Overloaded constructor
    MyString(char *s);

    //Copy constructor
    MyString(const MyString &source);

    //Move constructor
    MyString(MyString &&source);

    //Destructor
    ~MyString();

    //Cppy assignment operator overloaded
    MyString &operator=(const MyString &rhs);

    //Move assignment operator overloaded
    MyString &operator=(MyString &&rhs);

    //Equality operator
    bool operator==(MyString &rhs) const;

    //Not equal operator
    bool operator!=(MyString &rhs) const;

    //Convert the string to lower
    MyString operator-() const;
    
    //Less than operator
    bool operator<(MyString &rhs) const;

    //Greater than operator
    bool operator>(MyString &rhs) const;

    //Concatenate operator
    MyString operator+(const MyString &rhs) const;

    //Reabeat string n time
    MyString operator*(int num) const;

};


#endif