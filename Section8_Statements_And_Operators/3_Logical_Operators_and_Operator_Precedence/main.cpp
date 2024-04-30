#include <iostream>
using namespace std;


int main(){
    int age {};
    bool parental_consent {false}, ssn {false}, accidents {false};
    
    cout << "age: ";
    cin >> age;
    cout << "parental consent: ";
    cin >> parental_consent;
    cout << "is ssn valid : ";
    cin >> ssn;
    cout << "accidents: ";
    cin >> accidents;
    
    if( (age >= 18 || ((age > 16) && (parental_consent == true))) && (ssn == true) && (accidents == false)){
        cout << "Yes, you can work." << endl;
    }
    return 0;
    /*
     //enhanced
     if( (age >= 18 || (age > 16 && parental_consent)) && ssn && !accidents){
        cout << "Yes, you can work." << endl;
    }
     * */
     
    return 0;
}