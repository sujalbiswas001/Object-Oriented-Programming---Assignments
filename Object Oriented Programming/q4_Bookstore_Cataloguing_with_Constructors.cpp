// Name  : Sujal Biswas
// Roll No : 2026SOC2664
// Q4: Book class with Default and Parameterized Constructors

#include<iostream>
#include<string>
using namespace std;

class Book
{
    public:
        string book_name;
        int book_id;
        float price;
        string author;

        // Default Constructor - used when no details are given
        Book()
        {
            book_name = "Untitled";
            book_id = 0;
            price = 0.0;
            author = "Unknown";
        }

        // Parameterized Constructor - used when full details are given
        Book(string name, int id, float p, string a)
        {
            book_name = name;
            book_id = id;
            price = p;
            author = a;
        }

        // Function to display book details
        void display()
        {
            cout << "-------- BOOK DETAILS --------" << endl;
            cout << "Book Name : " << book_name << endl;
            cout << "Book ID   : " << book_id << endl;
            cout << "Price     : " << price << endl;
            cout << "Author    : " << author << endl;
            cout << endl;
        }
};

int main()
{
    // Object created using Default Constructor
    Book b1;

    // Object created using Parameterized Constructor
    Book b2("Wings of Fire", 202, 299.99, "A.P.J Abdul Kalam");

    cout << "Book 1 (Default Constructor):" << endl;
    b1.display();

    cout << "Book 2 (Parameterized Constructor):" << endl;
    b2.display();

    return 0;
}