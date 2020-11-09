// Written By Deepesh Nimma
#include <iostream>
#include <fstream>
using namespace std;

class Student
{
  string name;
  int marks;

public:
  Student()
  {
    name = "";
    marks = 0;
  }

  Student(string name, int marks)
  {
    this->name = name;
    this->marks = marks;
  }

  string getName()
  {
    return name;
  }

  int getMarks()
  {
    return marks;
  }

  void setName(string name)
  {
    this->name = name;
  }

  void setMarks(int marks)
  {
    this->marks = marks;
  }

  ~Student()
  {
    delete &name;
    delete &marks;
  }
};

void getFileData(string names[], int marks[])
{
  fstream myfile;
  myfile.open("student-data.txt");

  for(int i = 0; i < 100; i++)
  {
    myfile >> names[i] >> marks[i];
  }
}

void ArrayToClass(Student students[], string names[], int marks[])
{
  for(int i = 0; i < 100; i++)
  {
    students[i].setName(names[i]);
    students[i].setMarks(marks[i]);
  }
}

int main()
{
  string names[101], student_names[100];
  int marks[101], index[100], j = 0, check_marks, count = 0;
  Student students[101];
  bool flag = false;

  cout << "Enter Marks to Be Searched: ";
  cin >> check_marks;

  for(int i = 0; i < 100; i++)
  {
    index[i] = -1;
  }

  getFileData(names, marks);
  ArrayToClass(students, names, marks);

  for(int i = 0; i < 100; i++)
  {
    if(check_marks == students[i].getMarks())
    {
      index[j] = i;
      student_names[j] = students[i].getName();
      j++; count++;
      flag = true;
    }
  }

  if(flag)
  {
    cout << "There are " << count << " students with those Marks" << endl;
    for(int i = 0; i < 100; i++)
    {
      if(index[i] != -1)
      {
        cout << "Index Number: " << index[i] << ", Name: " << student_names[i] << endl;
      }
    }
  }
  else
  {
    cout << "No Results Found";
  }
}
