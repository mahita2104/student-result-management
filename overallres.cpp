#include <iostream>
#include <vector>

using namespace std;

class Student8 {
public:
    string name;
    int rollNo;
    float marks;
};

class Exam3 {
public:
    vector<Student8> students;

    // Function to add a student to the exam
    void addStudent(Student8 student) {
        students.push_back(student);
    }

    // Function to display the overall result
    void displayResult() {
        int totalStudents = students.size();
        float totalMarks = 0;

        // Calculate the total marks of all students
        for (Student8 student : students) {
            totalMarks += student.marks;
        }

        float averageMarks = totalMarks / totalStudents;
        float percentage = (totalMarks / (totalStudents * 100)) * 100;

        cout << "Overall number of students: " << totalStudents << endl;
        cout << "Overall average marks: " << averageMarks << endl;
        cout << "Overall percentage: " << percentage << "%" << endl;

        // Display the individual scores of all students
        for (Student8 student : students) {
            cout << "Name: " << student.name << ", Roll No: " << student.rollNo << ", Marks: " << student.marks << endl;
        }
    }
};

int main() {
    // Create an exam object
    Exam3 exam;

    // Add some students to the exam
    exam.addStudent({"John Doe", 1, 80});
    exam.addStudent({"Jane Doe", 2, 90});
    exam.addStudent({"Bob Smith", 3, 70});

    // Display the overall result
    exam.displayResult();

    return 0;
}