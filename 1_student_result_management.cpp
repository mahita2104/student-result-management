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
    cout<<"--------------------------STUDENT RESULT MANAGEMENT SYSTEM-------------------------"<<endl;
    char choice;
    choice='y';
    while(choice=='Y' || choice=='y'){
        cout<<"MAIN MENU"<<endl;
        cout<<"1.STUDENT RECORDS"<<endl;
        cout<<"2.COURSE RECORDS"<<endl;
        cout<<"3.EXAM RECORDS/EXAM'S SCORES"<<endl;
        cout<<"4.ASSIGN COURSE(S) TO STUDENT"<<endl;
        cout<<"5.ASSIGN EXAM(S) TO COURSE"<<endl;
        cout<<"6.TOTAL MARKS AND PERCENTAGE"<<endl;
        cout<<"7.DISPLAY INDIVIDUAL STUDENT RESULT"<<endl;
        cout<<"8.DISPLAY COURSE WISE RESULT"<<endl;
        cout<<"9.DISPLAY OVERALL RESULT"<<endl;
        cout<<"10.EXIT"<<endl;
        int m;
        cout<<"ENTER YOUR CHOICE:";
        cin>>m;
        if(m==1){
            int k;
            StudentResultManagementSystem srm;
            cout<<"SUB-MENU"<<endl;
            cout<<"1.DISPLAY RECORDS"<<endl;
            cout<<"2.ADD RECORDS "<<endl;
            cout<<"3.UPDATE RECORDS"<<endl;
            cout<<"4.DELETE RECORDS"<<endl;
            cout<<"CHOOSE ONE FROM ABOVE"<<endl;
            cin>>k;
            if(k==2){
            // Create some initial student
            srm.createStudent("mahita","mahita@gmail.com");
            srm.createStudent("anamika","anamika@gmail.com");
            srm.createStudent("priya","priya@gmail.com");
            }
            if(k==1){
            // Display all students
            srm.displayStudents();}
            if(k==3){
            // Update a student's information
            srm.updateStudent(101, "DIVYA VERMA", "divya@gmail.com");}

            if(k==4){
            // Delete a student
            srm.deleteStudent(102);//check this again user input
            // Display all students again
            srm.displayStudents();}
            }
        if(m==2){ 
            int z;
            cout<<"SUB-MENU"<<endl;
            cout<<"1.DISPLAY RECORDS"<<endl;
            cout<<"2.ADD RECORDS "<<endl;
            cout<<"3.UPDATE RECORDS"<<endl;
            cout<<"4.DELETE RECORDS"<<endl;
            cout<<"CHOOSE ONE FROM ABOVE"<<endl;
            cin>>z;


            // Create a student
            Student* student = new Student("CSE");
            if(z==2){
            // Create some courses
            Course* course1 = new Course("Programming 101", "MEGHA ARORA", 3);
            Course* course2 = new Course("Data Structures", "SONALI", 4);
            Course* course3 = new Course("Algorithms", "MITA", 4);
         
           // Add the courses to the student's list of courses
            student->addCourse(course1);
            student->addCourse(course2);
            student->addCourse(course3);}
            
            if(z==1){
    
           // Display the student's courses
           student->displayCourses();}

           if(z==3){
           // Update a course
           Course* course4 = new Course("Advanced Programming", "ISHITA TANDON", 4);
           student->updateCourse(0, course4);}
           if(z==4){
           // Delete a course
           student->deleteCourse(2);
    
           // Display the student's courses again
           student->displayCourses();}
        }
    if(m==3){
        int p;
        cout<<"SUB-MENU"<<endl;
        cout<<"1.DISPLAY RECORDS"<<endl;
        cout<<"2.ADD RECORDS "<<endl;
        cout<<"3.UPDATE RECORDS"<<endl;
        cout<<"4.DELETE RECORDS"<<endl;
        cout<<"CHOOSE ONE FROM ABOVE"<<endl;
        cin>>p;

        Student2 student2("PRIYA", 102);
        if(p==2){
        //exam records
       ExamRecord examRecord1("analog electronics",70, 80, 90);
       ExamRecord examRecord2("intelligent systems",80, 85, 95);

       student2.addExamRecord(examRecord1);
       student2.addExamRecord(examRecord2);}
       if(p==1){
        student2.displayExamRecords();}
       if(p==3){
        ExamRecord examRecord3("analog electronincs",90, 95, 100);
        student2.updateExamRecord(2, examRecord3);}
       if(p==4){
        student2.deleteExamRecord(1);
    
        student2.displayExamRecords();}
    }
    if(m==4){
    //assign course to student and exams to courses
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

    Student9 student9(name, branch);
    student9.assignCourses(allCourses);
    student9.printCourses();}
    if(m==5||m==6){
        //total marks and percentage
        int enrollmentNumber;
        cout << "Enter enrollment number: ";
        cin >> enrollmentNumber;
        Student3 student3;
        student3.setDetails("ANAMIKA", enrollmentNumber);
         student3.calculate();
         }
    if(m==7){
        //display individual student's result
        Student4 student4("ANAMIKA", 1);
        student4.addExam(Exam("ANALOG ELECTRONICS", 75, 100));
        student4.addExam(Exam("PROGRAMMING IN C", 80, 100));
        student4.addExam(Exam("COMMUNICATION SKILLS", 90, 100));
        student4.displayResult();
    
        Student4 student5("MAHITA", 2);
        student5.addExam(Exam("ANALOG ELECTRONICS", 85, 100));
        student5.addExam(Exam("PROGRAMMING IN C", 70, 100));
        student5.addExam(Exam("COMMUNICATION SKILLS", 80, 100));
        student5.displayResult();}
    if(m==8){
        //course wise result
       // Create exam objects
       Exam2 is("INTELLIIGENT SYSTEMS", 90);
    Exam2 de("DIGITAL ELECTRONICS", 85);
    Exam2 ae("ANALOG ELECTRONICS", 92);
    Exam2 am("APPLIED MATHEMATICS", 88);

    // Create student objects
    vector<Exam2> exams1 = {is, de, ae, am};
    Student7 st1("MAHITA BOYINA", 101, exams1);

    vector<Exam2> exams2 = {de, ae};
    Student7 st2("PRIYA PAHWA", 102, exams2);

    vector<Exam2> exams3 = {is, de, am};
    Student7 st3("ANAMIKA KUMARI", 103, exams3);

    // Create course object
    vector<Student7> students = {st1, st2, st3};
    Course2 c("Computer Science", students);

    // Display course result
    c.displayCourseResult();}
    if(m==9){
    // overall result
    // Create an exam object
    Exam3 exam;

    // Add some students to the exam
    exam.addStudent({"ANAMIKA", 103, 80});
    exam.addStudent({"MAHITA", 100, 90});
    exam.addStudent({"PRIYA", 102, 70});

    // Display the overall result
    exam.displayResult();}
    if(m==10){
        break;
    }
    cout<<"do you want to continue(y/n)";
    cin>>choice;
    }
    return 0;
}
    



