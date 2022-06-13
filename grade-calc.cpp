#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string weightlabel;
    string step = "noxt";
    int weightPercent;
    double gradeArray[20];
    double catArray[20];
    double temp
    //Ask for weight category
    cout << "Category: ";
    cin >> weightlabel;
    cin.clear();
    cin.ignore();
    //ask for weight
    cout << "Weight %: ";
    cin >> weightPercent;
    cin.clear();
    cin.ignore();
    //input grades
    cout << "Input Grades for" << weightlabel;
    while(step != "n"){
        for(int i = 0; i > 20; i++){
            cout << "add grade: ";
            cin >> temp;
            gradeArray[i] = temp;
            cin.clear();
            cin.ignore();
            cout << "cont? y/n";
            cin >> step;
        }
    }
    //calc weight avg
    //next for next
    //stop to quit
    //print results
}
double weightAvg(){
    
}
void clearScreen(){
    cout << "\033[2J\033[1;1H";
}