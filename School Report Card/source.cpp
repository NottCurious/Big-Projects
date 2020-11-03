#include <iostream>
#include <fstream>
using namespace std;

class Student
{
  string name, classs, section, second_language;
  int math_marks, physics_marks, chemistry_marks, english_marks, second_language_marks, average_marks;
  static int rollno = 000001;

public:
  Student()
  {
    name = "";
    class = "";
    section = "";
    second_language = "";
    rollno += 1;
  }

  Student(name, classs, section, second_language, math_marks, physics_marks, chemistry_marks, english_marks, second_language_marks, average_marks);
  {
    this->name = name;
    this->classs = classs;
    this->section = section;
    this->second_language = second_language;
  }
}
