#include <iostream>
#include <vector>

using namespace std;
//done
// Course class
class Course {
    private:
        string branch_name;
        string instructor;
        int credits;
    
    public:
        Course(string branch_name, string instructor, int credits) {
            this->branch_name = branch_name;
            this->instructor = instructor;
            this->credits = credits;
           }
    
        // Getter methods
        string getName() {
            return branch_name;
        }
    
        string getInstructor() {
            return instructor;
        }
    
        int getCredits() {
            return credits;
        }
    
        // Setter methods
        void setName(string branch_name) {
            this->branch_name = branch_name;
        }
    
        void setInstructor(string instructor) {
            this->instructor = instructor;
            }
    
        void setCredits(int credits) {
            this->credits = credits;
        }
};

// Student class
class Student {
    private:
        string branch_name;
        vector<Course*> courses;
    
    public:
        Student(string branch_name) {
            this->branch_name = branch_name;
        }
    
        // Getter methods
        string getName() {
            return branch_name;
        }
        vector<Course*> getCourses() {
            return courses;
        }
    
        // Add a course to the student's list of courses
        void addCourse(Course* course) {
            courses.push_back(course);
        }
    
        // Update a course in the student's list of courses
        void updateCourse(int index, Course* course) {
            courses[index] = course;
        }
    
        // Display all of the student's courses
        void displayCourses() {
            cout << "Courses for " << branch_name << ":" << endl;
            for (int i = 0; i < courses.size(); i++) {
                cout << i + 1 << ". " << courses[i]->getName() << " with " << courses[i]->getInstructor() << " (" << courses[i]->getCredits() << " credits)" << endl;
            }
        }
        // Remove a course from the student's list of courses
        void deleteCourse(int index) {
            courses.erase(courses.begin() + index);
        }
};

int main() {
    // Create a student
    Student* student = new Student("CSE");
    
    // Create some courses
    Course* course1 = new Course("Programming 101", "Jane Smith", 3);
    Course* course2 = new Course("Data Structures", "Bob Johnson", 4);
    Course* course3 = new Course("Algorithms", "Alice Lee", 4);
    
    // Add the courses to the student's list of courses
    student->addCourse(course1);
    student->addCourse(course2);
    student->addCourse(course3);
    
    // Display the student's courses
    student->displayCourses();
    
    // Update a course
    Course* course4 = new Course("Advanced Programming", "Jane Smith", 4);
    student->updateCourse(0, course4);
    
    // Display the student's courses again
    student->displayCourses();
    
    // Delete a course
    student->deleteCourse(2);
    
    // Display the student's courses again
    student->displayCourses();
    
    return 0;
}
    
