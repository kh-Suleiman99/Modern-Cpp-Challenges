#include "MyString.h"

using namespace std;

int main(){
    std::cout << std::boolalpha << std::endl;
    char s[] ="HELLO";
    char s2[] ="EVERYONE";
    char space[] =" ";

    MyString str{};
    MyString str2{s};

    cout << "(str2 == str)? " << (str2 == str) << endl; 
    cout << "(str2 != str)? " << (str2 != str) << endl; 
    cout << "-------------------------------" << endl;

    str = str2;
    cout << "(str2 == str)? " << (str2 == str) << endl;
    cout << "(str2 != str)? " << (str2 != str) << endl; 
    cout << "-------------------------------" << endl; 

    str2 = MyString{s2};
    cout << str << endl;
    cout << str2 << endl;
    cout << "-------------------------------" << endl;

    str = -str;
    str2 = -str2;
    cout << str << endl;
    cout << str2 << endl;
    cout << "-------------------------------" << endl;

    cout << "str2<str? " << (str2<str) << endl;
    cout << "str<str2? " << (str<str2) << endl;
    cout << "str<str? "  << (str<str) << endl;
    cout << "-------------------------------" << endl;

    cout << "str2>str? " << (str2>str) << endl;
    cout << "str>str2? " << (str>str2) << endl;
    cout << "str>str? "  << (str>str) << endl;
    cout << "-------------------------------" << endl;
    
    cout << "str+str2 is "  << (str+space+str2) << endl;
    cout << "-------------------------------" << endl;
    cout << "str*3 is "  << (str*3) << endl;
    return 0;
}