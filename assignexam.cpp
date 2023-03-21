#include <iostream>
#include <map>
#include <vector>
using namespace std;

// Define the Course struct
struct Course {
    int id;
    string name;
    int creditHours;
    int examId;
};

// Define the Exam struct
struct Exam {
    int id;
    string name;
};

// Define the Student struct
struct Student {
    int id;
    string name;
    vector<int> courses;
};

// Define the Result struct
struct Result {
    int studentId;
    int courseId;
    int examId;
    int marksObtained;
};

// Define the StudentResultManagementSystem class
class StudentResultManagementSystem {
public:
    // ...

    void displayCourseResult(int courseId) {
        // Check if the course exists
        if (courses.count(courseId) == 0) {
            cout << "Course not found!" << endl;
            return;
        }

        // Find the course
        Course c = courses[courseId];

        // Find the exam
        Exam e = exams[c.examId];

        // Display the course and exam information
        cout << "Course: " << c.name << endl;
        cout << "Exam: " << e.name << endl;

        // Calculate and display the results for each student
        for (int i = 0; i < students.size(); i++) {
            // Find the student
            Student s = students[i];

            // Check if the student is enrolled in the course
            bool enrolled = false;
            for (int j = 0; j < s.courses.size(); j++) {
                if (s.courses[j] == c.id) {
                    enrolled = true;
                    break;
                }
            }

            if (enrolled) {
                // Find the result
                for (int j = 0; j < results.size(); j++) {
                    if (results[j].studentId == s.id &&
                        results[j].courseId == c.id &&
                        results[j].examId == e.id) {
                        cout << "Student ID: " << s.id << endl;
                        cout << "Name: " << s.name << endl;
                        cout << "Marks Obtained: " << results[j].marksObtained << endl;
                        break;
                    }
                }
            }
        }
    }

private:
    map<int, Course> courses;
    map<int, Exam> exams;
    vector<Student> students;
    vector<Result> results;
};

int main() {
    StudentResultManagementSystem srm;

    // ...

    // Display the result for a course with ID 456
    srm.displayCourseResult(456);

    return 0;
}