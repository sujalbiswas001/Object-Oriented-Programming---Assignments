// Name  : Sujal Biswas
// Roll No : 2026SOC2664
// Q1: Book class - stores and displays book details

#include <iostream>
#include <string>
using namespace std;

class Book
{
    public:
        string book_name;
        int book_id;
        float price;
        string author;
        string publish_date;

        // Function to display book details
        void display()
        {
            cout << "-------- BOOK DETAILS --------" << endl;
            cout << "Book Name    : " << book_name << endl;
            cout << "Book ID      : " << book_id << endl;
            cout << "Price        : " << price << endl;
            cout << "Author       : " << author << endl;
            cout << "Publish Date : " << publish_date << endl;
        }
};

int main()
{
    Book b1;
    b1.book_name = "The Alchemist";
    b1.book_id = 101;
    b1.price = 350.50;
    b1.author = "Sujal Biswas";
    b1.publish_date = "15-08-2023";

    b1.display();

    return 0;
}