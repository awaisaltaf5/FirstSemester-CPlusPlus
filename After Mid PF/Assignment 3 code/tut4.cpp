#include <iostream>
using namespace std;

struct date_of_birth {
    int day;
    int month;
    int year;
};

struct student {
    string name;
    date_of_birth dob;
};

int main() {
    student students[3];
    int oldestIndex = 0;

    // Input records for three students
    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for student " << i + 1 << ":\n";
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Date of Birth (DD MM YYYY): ";
        cin >> students[i].dob.day >> students[i].dob.month >> students[i].dob.year;

        // Determine the oldest student
        if (students[i].dob.year < students[oldestIndex].dob.year ||
            (students[i].dob.year == students[oldestIndex].dob.year && students[i].dob.month < students[oldestIndex].dob.month) ||
            (students[i].dob.year == students[oldestIndex].dob.year && students[i].dob.month == students[oldestIndex].dob.month && students[i].dob.day < students[oldestIndex].dob.day)) {
            oldestIndex = i;
        }
    }

    // Output the record of the oldest student
    cout << "\nOldest student is:\n";
    cout << "Name: " << students[oldestIndex].name << "\n";
    cout << "Date of Birth: " << students[oldestIndex].dob.day << "/"
         << students[oldestIndex].dob.month << "/"
         << students[oldestIndex].dob.year << "\n";

    return 0;
}
