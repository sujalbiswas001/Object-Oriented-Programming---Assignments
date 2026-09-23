// Name  : Sujal Biswas
// Roll No : 2026SOC2664
// Q3: Employee class - stores and displays employee details

#include<iostream>
#include<string>
using namespace std;

class Employee
{
    public:
        int emp_id;
        string name;
        string department;
        string designation;
        float salary;

        // Function to display employee details
        void display()
        {
            cout << "-------- EMPLOYEE DETAILS --------" << endl;
            cout << "Employee ID  : " << emp_id << endl;
            cout << "Name         : " << name << endl;
            cout << "Department   : " << department << endl;
            cout << "Designation  : " << designation << endl;
            cout << "Salary       : " << salary << endl;
        }
};

int main()
{
    Employee e1;
    e1.emp_id = 501;
    e1.name = "Sujal Biswas";
    e1.department = "IT";
    e1.designation = "Software Engineer";
    e1.salary = 45000;

    e1.display();

    return 0;
}