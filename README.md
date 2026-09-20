# Student-Grade-Calculator

Simple application written in C++. The user enters a student's name and marks for 4 subjects. The program checks that every mark is valid, then shows the average mark, letter grade and Pass/Fail result. After each student it asks whether to calculate for another one.

## Features

- Input of the student's name
- 4 subjects
- Validation: every mark must be a number from 0 to 100 
- Average mark calculation
- Letter grade: A (90-100), B (75-89), C (60-74), D (50-59), F (below 50)
- Pass/Fail: Pass if the average is 50 or higher (grades A-D), otherwise Fail
- yes/no loop to calculate for several students

## How to compile and run

Compile `main.cpp` with any C++ compiler (for example g++, clang++ or Visual Studio). Example with g++:

```bash
g++ main.cpp -o grade_calculator
./grade_calculator
```

## Sample output

```
Enter student's name: Anna Petrova
Enter mark for subject 1 (0-100): 95
Enter mark for subject 2 (0-100): 150
Error: mark must be a number between 0 and 100.
Enter mark for subject 2 (0-100): 88
Enter mark for subject 3 (0-100): abc
Error: mark must be a number between 0 and 100.
Enter mark for subject 3 (0-100): 72
Enter mark for subject 4 (0-100): 91

--- Results ---
Student: Anna Petrova
Subject 1: 95
Subject 2: 88
Subject 3: 72
Subject 4: 91
Average: 86.5
Grade: B
Result: Pass

Calculate for another student? (yes/no): maybe
Please type yes or no: yes

Enter student's name: Ivan
Enter mark for subject 1 (0-100): 40
Enter mark for subject 2 (0-100): 45
Enter mark for subject 3 (0-100): 30
Enter mark for subject 4 (0-100): 55

--- Results ---
Student: Ivan
Subject 1: 40
Subject 2: 45
Subject 3: 30
Subject 4: 55
Average: 42.5
Grade: F
Result: Fail

Calculate for another student? (yes/no): no

Goodbye!
```

## Project structure

```
student-grade-calculator/
|-- main.cpp    # source code
|-- README.md   # this file
```