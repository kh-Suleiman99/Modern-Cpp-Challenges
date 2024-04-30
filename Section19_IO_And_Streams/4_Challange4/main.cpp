// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {
    ifstream inFile {"romeoandjuliet.txt"};
    ofstream outFile {"romeoandjuliet-out.txt"};
    string line{};
    int LineNum{};

    if(!(inFile&&outFile)){
        cerr <<"Problem Opening File." <<endl;
        return 1;
    }
    
    while (getline(inFile, line))
    {
        outFile << left << setw(6) << ++LineNum;  
        outFile << line << endl;
    }
    inFile.close();
    outFile.close();
    cout << "copy Done" << endl << endl;
    return 0;
}

