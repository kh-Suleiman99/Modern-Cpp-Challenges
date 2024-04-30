// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    
    ifstream inFile;
    inFile.open("romeoandjuliet.txt");
    if(!inFile){
        cerr << "Problem Opening file." << endl;
        return 1;
    }
    int wordCount{};
    int matchCount{};
    string substring_to_find{};
    string word{};
    
    cout << "Enter the substring to search for: ";
    cin >> substring_to_find;
    while (!inFile.eof())
    {
        wordCount++;
        inFile >> word;

        if(word.find(substring_to_find) != string::npos)
        {
            matchCount++;
        }
    }

    cout << wordCount <<" words were searched..." <<endl;
    cout << "The substring Romeo was found "<< matchCount << " times" <<endl;
    cout << endl;

    inFile.close();
    return 0;
}

