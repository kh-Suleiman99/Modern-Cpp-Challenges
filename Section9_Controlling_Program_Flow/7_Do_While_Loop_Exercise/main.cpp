#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<char> str {'x','y','z','o'};
    unsigned int iterator {};
    char vowel {};
    bool found {false};
    
    if(!str.empty()){
        do{
            switch(str.at(iterator)){
                case 'a':
                    found = true;
                    vowel = 'a';
                    break;
                case 'e':
                    found = true;
                    vowel = 'e';
                    break;
                case 'i':
                    found = true;
                    vowel = 'i';
                    break;
                case 'o':
                    found = true;
                    vowel = 'o';
                    break;
                case 'u':
                    found = true;
                    vowel = 'u';
                    break;
                default : found = false;
            }
            iterator++;
        }while(( !found ) && ( iterator < str.size() ));
    }
    else{/*Nothing*/}
    
    
    if(found){
        cout << "Vowel found: " << vowel << endl; 
    }
    else{
        cout << "No vowel was found" << endl; 
    }
    
    return 0;
}