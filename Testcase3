#include <iostream>
#include <vector>
#include <string>
using namespace std;

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

class Student {
    private:
        string name;
        int enrollment_Number;
        vector<ExamRecord> examRecords;
    
    public:
        Student() {}
        
        Student(string name, int enrollment_Number) {
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

int main() {
    Student student("John", 1);
    
    ExamRecord examRecord1("analog electronics",70, 80, 90);
    ExamRecord examRecord2("intelligent systems",80, 85, 95);
    
    student.addExamRecord(examRecord1);
    student.addExamRecord(examRecord2);
    
    student.displayExamRecords();
    
    ExamRecord examRecord3("analog electronincs",90, 95, 100);
    student.updateExamRecord(2, examRecord3);
    
    student.displayExamRecords();
    
    student.deleteExamRecord(1);
    
    student.displayExamRecords();
    
    return 0;
}
