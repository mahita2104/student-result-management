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
class ExamRecord {
    private:
        string subject_name;
        int midSemesterMarks;
        int endSemesterMarks;
        int internals;
    
    public:
        ExamRecord() {}
        
        ExamRecord(string subject_name,int midSemesterMarks, int endSemesterMarks, int internals) {
            this->subject_name=subject_name;
            this->midSemesterMarks = midSemesterMarks;
            this->endSemesterMarks = endSemesterMarks;
            this->internals = internals;
        }
        void setsubject_name(string subject_name) {
            this->subject_name = subject_name;
        }
        
        string getsubject_name() {
            return this->subject_name;
        }
        
        void setMidSemesterMarks(int midSemesterMarks) {
            this->midSemesterMarks = midSemesterMarks;
        }
        
        int getMidSemesterMarks() {
            return this->midSemesterMarks;
        }
        
        void setEndSemesterMarks(int endSemesterMarks) {
            this->endSemesterMarks = endSemesterMarks;
        }
        
        int getEndSemesterMarks() {
            return this->endSemesterMarks;
        }
        
        void setInternals(int internals) {
            this->internals = internals;
        }
        
        int getInternals() {
            return this->internals;
        }
};

class Student2 {
    private:
        string name;
        int enrollment_Number;
        vector<ExamRecord> examRecords;
    
    public:
        Student2() {}
        
        Student2(string name, int enrollment_Number) {
            this->name = name;
            this->enrollment_Number = enrollment_Number;
        }
        
        void addExamRecord(ExamRecord examRecord) {
            examRecords.push_back(examRecord);
        }
        
        void displayExamRecords() {
            cout << "Exam Records for enrollment number:" << this->enrollment_Number << endl;
            for (int i = 0; i < examRecords.size(); i++) {
                cout << "Subject number :" <<i+1<<":"<<endl;
                cout << "Subject name :" <<examRecords[i].getsubject_name()<< endl;
                cout << "Mid-Semester Marks: " << examRecords[i].getMidSemesterMarks() << endl;
                cout << "End-Semester Marks: " << examRecords[i].getEndSemesterMarks() << endl;
                cout << "Internals: " << examRecords[i].getInternals() << endl;
            }
        }
        
        void updateExamRecord(int subjectNumber, ExamRecord examRecord) {
            examRecords[subjectNumber-1] = examRecord;
        }
        
        void deleteExamRecord(int subjectNumber) {
            examRecords.erase(examRecords.begin() + subjectNumber-1);
        }
};
class Student3 {
  private:
    string name;
    int enrollmentNumber;
    int marks[5];
  
  public:
    void setDetails(string n, int e) {
      name = n;
      enrollmentNumber = e;
      cout << "Enter marks for 5 subjects: " << endl;
      for (int i = 0; i < 5; i++) {
        cin >> marks[i];
      }
    }
  
    void calculate() {
      int totalMarks = 0;
      for (int i = 0; i < 5; i++) {
        totalMarks += marks[i];
      }
      float percentage = (float)totalMarks / 5;
      cout << "Total marks: " << totalMarks << endl;
      cout << "Percentage: " << percentage << "%" << endl;
    }
};
class Exam {
    private:
        string examName;
        int marksObtained;
        int totalMarks;
    
    public:
        Exam() {}
        
        Exam(string examName, int marksObtained, int totalMarks) {
            this->examName = examName;
            this->marksObtained = marksObtained;
            this->totalMarks = totalMarks;
        }
        
        string getExamName() {
            return examName;
        }
        
        int getMarksObtained() {
            return marksObtained;
        }
        
        int getTotalMarks() {
            return totalMarks;
        }
        
        float getPercentage() {
            return ((float)marksObtained/totalMarks)*100;
        }
};

class Student4 {
    private:
        string name;
        int rollNumber;
        vector<Exam> exams;
    
    public:
        Student4() {}
        
        Student4(string name, int rollNumber) {
            this->name = name;
            this->rollNumber = rollNumber;
        }
        
        void addExam(Exam exam) {
            exams.push_back(exam);
        }
        
        void displayResult() {
            cout << "Student Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
            cout << "Exams: " << endl;
            for (int i = 0; i < exams.size(); i++) {
                cout << exams[i].getExamName() << ": " << exams[i].getMarksObtained() << "/" << exams[i].getTotalMarks() << " (" << exams[i].getPercentage() << "%)" << endl;
            }
        }
};
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
    StudentResultManagementSystem srm;

    // Create some initial student
    srm.createStudent("mahita","mahita@gmail.com");
    // Display all students
    srm.displayStudents();

    // Update a student's information
    srm.updateStudent(101, "DIVYA VERMA", "divya@gmail.com");

    // Delete a student
    srm.deleteStudent(102);

    // Display all students again
    srm.displayStudents();
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
    
    Student2 student2("John", 1);
    //exam records
    ExamRecord examRecord1("analog electronics",70, 80, 90);
    ExamRecord examRecord2("intelligent systems",80, 85, 95);
    
    student2.addExamRecord(examRecord1);
    student2.addExamRecord(examRecord2);
    
    student2.displayExamRecords();
    
    ExamRecord examRecord3("analog electronincs",90, 95, 100);
    student2.updateExamRecord(2, examRecord3);
    
    student2.displayExamRecords();
    
    student2.deleteExamRecord(1);
    
    student2.displayExamRecords();
    //total marks and percentage
    int enrollmentNumber;
    cout << "Enter enrollment number: ";
    cin >> enrollmentNumber;
    Student3 student3;
    student3.setDetails("John", enrollmentNumber);
    student3.calculate();
    //display individual student's result
    Student4 student4("John", 1);
    student4.addExam(Exam("Maths", 75, 100));
    student4.addExam(Exam("Science", 80, 100));
    student4.addExam(Exam("English", 90, 100));
    student4.displayResult();
    
    Student4 student5("Jane", 2);
    student5.addExam(Exam("Maths", 85, 100));
    student5.addExam(Exam("Science", 70, 100));
    student5.addExam(Exam("English", 80, 100));
    student5.displayResult();
    //course wise result
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
    // overall result
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
    


