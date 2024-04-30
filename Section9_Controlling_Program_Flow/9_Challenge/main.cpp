#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    
    vector<int> vec {};
    char selection {};
    int smallest {};
    int largest {};
    int total {};
    int new_item {};
    
    do{
        cout << "\nP - Print numbers\n";
        cout << "A - Add a number\n";
        cout << "M - Display mean of the numbers\n";
        cout << "S - Display the smallest number\n";
        cout << "L - Display the largest number\n";
        cout << "Q - Quit\n";
        cout << "\nEnter your choice: ";
        cin >> selection;
        
        switch(selection){
            case 'P':
            case 'p':
                if(vec.empty()){
                    cout << "[] - the list is empty\n";
                }
                else{
                    cout <<"[ ";
                    for(auto var: vec){
                        cout << var <<' ';
                    }
                    cout <<"]\n";
                }
                break;
            case 'A':
            case 'a':
                cout << "Enter the integer: ";
                cin >> new_item;
                if(vec.empty()){
                    smallest = new_item;
                    largest = new_item;
                }
                else{
                    if(new_item > largest){
                        largest = new_item;
                    }
                    else if (new_item <  smallest){
                        smallest = new_item;
                    }
                    else{/*nothing*/}
                }
                vec.push_back(new_item);
                cout << new_item << " added\n";
                total += new_item;
                break;
            case 'M':
            case 'm':
                if(vec.empty()){
                    cout <<"There are no data\n";
                }
                else{
                    cout << fixed << setprecision(1);
                    cout << "Mean = " << ( static_cast<double>(total) / vec.size() ) << endl;
                }
                
                break;
            case 'S':
            case 's':
                cout << "The smallest = " << smallest;
                break;
            case 'L':
            case 'l':
                cout << "The larest = " << largest;
                break;
            case 'Q':
            case 'q':
                cout << "Goodbye\n";
                break;
                
            default :
                cout << "Unknown selection, please try again\n";
        }
    }while(selection != 'Q' && selection != 'q');
    return 0;
}