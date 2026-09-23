// Name  : Sujal Biswas
// Roll No : 2026SOC2664
// Q2: Student class - stores and displays student details

#include<iostream>
#include<string>
using namespace std;

class Student
{
    public:
        string name;
        string roll_no;
        string course;
        int year;
        float cgpa;

        // Function to display student details
        void display()
        {
            cout << "-------- STUDENT RECORD --------" << endl;
            cout << "Name    : " << name << endl;
            cout << "Roll No : " << roll_no << endl;
            cout << "Course  : " << course << endl;
            cout << "Year    : " << year << endl;
            cout << "CGPA    : " << cgpa << endl;
        }
};

int main()
{
    Student s1;
    s1.name = "Sujal Biswas";
    s1.roll_no = "2026SOC2664";
    s1.course = "B.Tech - Computer Science";
    s1.year = 2;
    s1.cgpa = 8.7;

    s1.display();

    return 0;
}