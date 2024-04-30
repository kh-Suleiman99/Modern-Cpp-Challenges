#include "MyString.h"


//Constructor
MyString::MyString():MyString(nullptr){}

//Overloaded constructor
MyString::MyString(char *s) :str{nullptr}{
    if(s == nullptr ){
        str =new char[1];
        *str ='\0';
    }
    else{
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

//Copy constructor
MyString::MyString(const MyString &source): str{nullptr}{
    str = new char[strlen(source.str)+1];
    strcpy(str, source.str);
}

//Move constructor
MyString::MyString(MyString &&source): str{source.str}{
    source.str =nullptr;
}

//Destructor
MyString::~MyString(){
    delete []str;
}

//Cppy assignment operator overloaded
MyString &MyString::operator=(const MyString &rhs){
    if(this==&rhs){
        return *this;
    }
    delete [] this->str;
    this->str = new char[strlen(rhs.str)+1];
    strcpy(this->str, rhs.str);
    return *this;
}

//Move assignment operator overloaded
MyString &MyString::operator=(MyString &&rhs){
    if(this == &rhs){
        return *this;
    }
    delete []this->str;
    this->str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

//Equality operator
bool MyString::operator==(MyString &rhs) const{
    return(strcmp(this->str, rhs.str) == 0);
}

//Not equal operator
bool MyString::operator!=(MyString &rhs) const{
    return(!(strcmp(this->str, rhs.str) == 0));
}

//Convert the string to lower
MyString MyString::operator-() const{
    char *buff = new char[strlen(this->str) + 1];
    for(size_t i=0;i <strlen(this->str); i++){
        buff[i] = tolower(this->str[i]);
    }
    MyString temp {buff};
    delete []buff;
    return temp;
}


//Less than operator
bool MyString::operator<(MyString &rhs) const{
    for(size_t i=0; i<strlen(rhs.str); i++){
        if(this->str[i] == rhs.str[i]){
            i++;
        }
        else if(this->str[i] < rhs.str[i]){
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}

//Greater than operator
bool MyString::operator>(MyString &rhs) const{
    for(size_t i=0; i<strlen(rhs.str); i++){
        if(this->str[i] == rhs.str[i]){
            i++;
        }
        else if(this->str[i] > rhs.str[i]){
            return true;
        }
        else{
            return false;
        }
    }
    return false;
}

//Concatenate operator
MyString MyString::operator+(const MyString &rhs) const{
    char *temp = new char[strlen(this->str) + strlen(rhs.str) + 1];
    strcpy(temp, this->str);
    strcat(temp, rhs.str);
    MyString result {temp};
    delete []temp;
    return result;
}

//Reabeat string n time
MyString MyString::operator*(int num) const{
    char *buff = new char[(strlen(this->str)*num) +1];
    strcpy(buff,this->str);
    for(int i = 1; i< num; i++){
        strcat(buff, this->str);
    }
    MyString temp {buff};
    delete []buff;
    return temp;
}

//Insertion operator overloaded
std::ostream &operator<<(std::ostream &os, const MyString &rhs){
    os << rhs.str;
    return os;
}

//Extraction operator overloaded
std::istream &operator>>(std::istream &is, MyString &rhs){
    delete [] rhs.str;
    char *buff = new char [1000];
    is >> buff; 
    rhs = MyString{buff};
    delete [] buff;
    return is;
}