#include <iostream>
#include <vector>
#include<string>
#include<map>
using namespace std;

// Define the Student struct
struct Student1 {
    int enrollment_no;
    string student_name;
    string email_id;
};

// Define the StudentResultManagementSystem class
class StudentResultManagementSystem {
public:
    // Constructor
    StudentResultManagementSystem() {
        nextStudentId = 100;
    }

    // Function to create a new student
    void createStudent(string name, string email) {
        Student1 s;
        s.enrollment_no = nextStudentId;
        s.student_name= name;
        s.email_id = email;
        students.push_back(s);
        nextStudentId++;
        cout << "Student created successfully with Enrollment Number: " << s.enrollment_no << endl;
    }

    // Function to display all students
    void displayStudents() {
        cout << "ID\tName\tEmail" << endl;
        for (int i = 0; i < students.size(); i++) {
            cout << students[i].enrollment_no << "\t" << students[i].student_name << "\t" << students[i].email_id << endl;
        }
    }

    // Function to update a student's information
    void updateStudent(int id, string name, string email) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].enrollment_no == id) {
                students[i].student_name = name;
                students[i].email_id = email;
                cout << "Student information updated successfully" << endl;
                return;
            }
        }
        cout << "Student not found with Enrollment Number: " << id << endl;
    }

    // Function to delete a student
    void deleteStudent(int id) {
        for (int i = 0; i < students.size(); i++) {
            if (students[i].enrollment_no == id) {
                students.erase(students.begin() + i);
                cout << "Student deleted successfully" << endl;
                return;
            }
        }
        cout << "Student not found with Enrollment Number: " << id << endl;
    }

private:
    vector<Student1> students;
    int nextStudentId;
};
int main(){
            StudentResultManagementSystem srm;
            // Create some initial student
            srm.createStudent("mahita","mahita@gmail.com");
            srm.createStudent("anamika","anamika@gmail.com");
            srm.createStudent("priya","priya@gmail.com");
            //check this again user input
           
            // Display all students
            srm.displayStudents();
            
            // Update a student's information
            srm.updateStudent(101, "DIVYA VERMA", "divya@gmail.com");//check this again user input
            
            // Delete a student
            srm.deleteStudent(102);//check this again user input
            // Display all students again
            srm.displayStudents();
            return 0;
}
