// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

void PrintHeader();
void PrintFoter(double avg);

struct Student
{
    string name;
    string answer;
};

int main() {

    ifstream responses;
    string modelAnswer{};
    Student student{};
    int score{};
    int numOfStudent{};
    int total{};
    double avg{};
    
    responses.open("responses.txt");
    if(!responses){
        cerr << "Problem Opening file." << endl;
        return 1;
    }

    responses >> modelAnswer;
    PrintHeader();

    while (!responses.eof())
    {
        numOfStudent++;
        responses >> student.name >> student.answer;
        cout << setw(15) << left << student.name;
        for(size_t i{}; i<modelAnswer.size(); i++){
            if(modelAnswer.at(i) == student.answer.at(i)) score++;
        }
        cout << setw(5) << right << score << endl;
        total += score;
        score = 0; 
    }
    
    avg = static_cast<double>(total) / numOfStudent;
    PrintFoter(avg);
    return 0;
}

void PrintHeader(){
    cout << setw(15) << left << "Studend" << setw(5) << left << "Score" << endl;
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
}

void PrintFoter(double avg){
    cout << setw(20) << setfill('-') << "" << setfill(' ') << endl;
    cout << "Avarage Score" << setw(7) << setprecision(1) << fixed << right << avg << endl;
}


