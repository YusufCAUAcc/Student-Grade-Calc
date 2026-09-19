// Student Grade Calculator

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SUBJECTS = 4;
    string again = "yes";

    while (again == "yes") {
        string name;
        double marks[SUBJECTS];
        double sum = 0;

        // Input: student name
        cout << "Enter student's name: ";
        getline(cin, name);

        // Input + validation: marks must be between 0 and 100
        for (int i = 0; i < SUBJECTS; i++) {
            double mark;
            cout << "Enter mark for subject " << i + 1 << " (0-100): ";
            cin >> mark;

            // Repeat while the input is not a number or out of range
            while (cin.fail() || mark < 0 || mark > 100) {
                cout << "Error: mark must be a number between 0 and 100.\n";
                cin.clear();             // reset error state
                cin.ignore(1000, '\n');  // throw away the bad input
                cout << "Enter mark for subject " << i + 1 << " (0-100): ";
                cin >> mark;
            }
            cin.ignore(1000, '\n');

            marks[i] = mark;
            sum = sum + mark;
        }

        // Calculation: average and grade
        double average = sum / SUBJECTS;
        char grade;
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 75) {
            grade = 'B';
        } else if (average >= 60) {
            grade = 'C';
        } else if (average >= 50) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Pass if the grade is D or better (average 50+)
        string result;
        if (average >= 50) {
            result = "Pass";
        } else {
            result = "Fail";
        }

        // Output
        cout << "\n--- Results ---\n";
        cout << "Student: " << name << endl;
        for (int i = 0; i < SUBJECTS; i++) {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }
        cout << "Average: " << average << endl;
        cout << "Grade: " << grade << endl;
        cout << "Result: " << result << endl;

        // Loop: ask about another student
        cout << "\nCalculate for another student? (yes/no): ";
        getline(cin, again);
        while (again != "yes" && again != "no") {
            cout << "Please type yes or no: ";
            getline(cin, again);
        }
        cout << endl;
    }

    cout << "Goodbye!" << endl;
    return 0;
}