//Grade calculator code
#include <iostream>

using namespace std;

int main() {
    char grade;
    float marks, totalmarks, average;
    int subjectscount;

    do {
        totalmarks = 0;
        cout << "Enter the number of subjects: ";
        cin >> subjectscount;

        if (subjectscount == 0) {
            cout << "Program Exit";
            break;
        }

        for (int i = 1; i <= subjectscount; i++) {
            cout << "Enter marks for Subject " << i << ": ";
            cin >> marks;
            totalmarks=totalmarks + marks;
        }

        average = totalmarks / subjectscount;

        if (average >= 90) {
            grade = 'A';
        } else if (average >= 80) {
            grade = 'B';
        } else if (average >= 70) {
            grade = 'C';
        } else if (average >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        cout << "Average marks: " << average <<"%"<< endl;
        cout << "Grade: " << grade <<"!"<<endl;

    } while (true);

    return 0;
}

