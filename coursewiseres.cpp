#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Exam class
class Exam2 {
private:
    string name;
    int marksObtained;
public:
    Exam2(string n, int m) {
        name = n;
        marksObtained = m;
    }
    string getName() {
        return name;
    }
    int getMarksObtained() {
        return marksObtained;
    }
};

// Student class
class Student7 {
private:
    string name;
    int rollNo;
    vector<Exam2> exams;
public:
    Student7(string n, int r, vector<Exam2> e) {
        name = n;
        rollNo = r;
        exams = e;
    }
    string getName() {
        return name;
    }
    int getRollNo() {
        return rollNo;
    }
    vector<Exam2> getExams() {
        return exams;
    }
};

// Course class
class Course2 {
private:
    string name;
    vector<Student7> students;
public:
    Course2(string n, vector<Student7> s) {
        name = n;
        students = s;
    }
    void displayCourseResult() {
        cout << "Course Name: " << name << endl;
        cout << "Total number of students: " << students.size() << endl;

        // Calculate total marks and count number of exams
        int totalMarks = 0;
        int numExams = 0;
        for (Student7 s : students) {
            for (Exam2 e : s.getExams()) {
                totalMarks += e.getMarksObtained();
                numExams++;
            }
        }

        // Calculate average marks and percentage
        double averageMarks = (double)totalMarks / numExams;
        double percentage = (averageMarks / 100) * 100;
        cout << "Average Marks: " << averageMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;

        // Display exam scores
        cout << "Exam Scores: " << endl;
        for (Student7 s : students) {
            cout << "Student Name: " << s.getName() << ", Roll No: " << s.getRollNo() << endl;
            cout << "Exam Scores: ";
            for (Exam2 e : s.getExams()) {
                cout << e.getName() << ": " << e.getMarksObtained() << " ";
            }
            cout << endl;
        }
    }
};

// Main function
int main() {
    // Create exam objects
    Exam2 math("Mathematics", 90);
    Exam2 science("Science", 85);
    Exam2 english("English", 92);
    Exam2 socialScience("Social Science", 88);

    // Create student objects
    vector<Exam2> exams1 = {math, science, english, socialScience};
    Student7 st1("John Doe", 101, exams1);

    vector<Exam2> exams2 = {science, english};
    Student7 st2("Jane Doe", 102, exams2);

    vector<Exam2> exams3 = {math, english, socialScience};
    Student7 st3("Jim Smith", 103, exams3);

    // Create course object
    vector<Student7> students = {st1, st2, st3};
    Course2 c("Computer Science", students);

    // Display course result
    c.displayCourseResult();

    return 0;
}