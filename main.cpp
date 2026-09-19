// Student Grade Calculator

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SUBJECTS = 4;
    string name;
    double marks[SUBJECTS];
    double sum = 0;

    // Inputt: student name
    cout << "Enter student's name: ";
    getline(cin, name);

    // Input: marks
    for (int i = 0; i < SUBJECTS; i++) {
        cout << "Enter mark for subject " << i + 1 << " (0-100): ";
        cin >> marks[i];
        sum = sum + marks[i];
    }

    // Calculation: average
    double average = sum / SUBJECTS;

    // Output
    cout << "\n--- Results ---\n";
    cout << "Student: " << name << endl;
    for (int i = 0; i < SUBJECTS; i++) {
        cout << "Subject " << i + 1 << ": " << marks[i] << endl;
    }
    cout << "Average: " << average << endl;

    return 0;
}