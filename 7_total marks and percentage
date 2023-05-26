#include <iostream>
using namespace std;
// Done
class Student3
{
private:
  string name;
  int enrollmentNumber;
  int marks[5];

public:
  void setDetails(string n, int e)
  {
    name = n;
    enrollmentNumber = e;
    cout << "Enter marks for 5 subjects: " << endl;
    for (int i = 0; i < 5; i++)
    {
      cin >> marks[i];
    }
  }

  void calculate()
  {
    int totalMarks = 0;
    for (int i = 0; i < 5; i++)
    {
      totalMarks += marks[i];
    }
    float percentage = (float)totalMarks / 5;
    cout << "Total marks: " << totalMarks << endl;
    cout << "Percentage: " << percentage << "%" << endl;
  }
};

int main()
{
  int enrollmentNumber;
  cout << "Enter enrollment number: ";
  cin >> enrollmentNumber;
  Student3 student3;
  student3.setDetails("John", enrollmentNumber);
  student3.calculate();
  return 0;
}
