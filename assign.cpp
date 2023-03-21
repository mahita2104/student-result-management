#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Exam4 {
public:
    string name;
    int marks;

    Exam4(string name, int marks) {
        this->name = name;
        this->marks = marks;
    }
};

class Course4 {
public:
    string name;
    string branch;
    int semester;
    vector<Exam4> exams;

    Course4(string name, string branch, int semester) {
        this->name = name;
        this->branch = branch;
        this->semester = semester;
    }

    void assignExams() {
        // Mid-semester exam
        Exam4 midSemesterExam("Mid-Semester Exam", 30);
        this->exams.push_back(midSemesterExam);

        // End-semester exam
        Exam4 endSemesterExam("End-Semester Exam", 60);
        this->exams.push_back(endSemesterExam);

        // Internal assessment
        Exam4 internalExam("Internal Assessment", 10);
        this->exams.push_back(internalExam);
    }

    int getTotalMarks() {
        int totalMarks = 0;
        for (Exam4 exam : this->exams) {
            totalMarks += exam.marks;
        }
        return totalMarks;
    }
};

class Student9 {
public:
    string name;
    string branch;
    vector<Course4> courses;

    Student9(string name, string branch) {
        this->name = name;
        this->branch = branch;
    };

    void assignCourses(vector<Course4> allCourses) {
        for (Course4 course : allCourses) {
            if (course.branch == this->branch) {
                course.assignExams(); // Assign exams to the course
                this->courses.push_back(course);
            }
        }
    };

    void printCourses() {
        cout << "Courses for " << this->name << " in " << this->branch << " branch:\n";
        for (Course4 course : this->courses) {
            cout << course.name << " (Semester " << course.semester << ")\n";
            cout<< "mid semester marks:30" << endl;
            cout<< "end semester marks:60" << endl;
            cout<< "internal marks:10" << endl;
            cout << "Total Marks: " << course.getTotalMarks() << "\n";
        }
    }
};

int main() {
    vector<Course4> allCourses = {
        Course4("Maths", "CSE", 1),
        Course4("Programming", "CSE", 1),
        Course4("Database", "CSE", 2),
        Course4("Data Structures", "CSE", 2),
        Course4("Algorithms", "CSE", 3),
        Course4("AI", "CSE", 4),
        Course4("Networking", "ECE", 1),
        Course4("Electronics", "ECE", 1),
        Course4("Signals and Systems", "ECE", 2),
        Course4("Digital Communications", "ECE", 3),
        Course4("Control Systems", "ECE", 4),
        Course4("Microwave Engineering", "ECE", 4)
    };

    string name, branch;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student branch: ";
    cin >> branch;

    Student9 student(name, branch);
    student.assignCourses(allCourses);
    student.printCourses();

    return 0;
}