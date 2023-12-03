#include <iostream>
#include <string>
using namespace std;
class first {
    protected:
        int book_no;
        string book_name;
    public:
        void input() {
            cout << "Enter Book Number: ";
            cin >> book_no;
            cin.ignore();
            cout << "Enter Book Name: ";
            getline(cin, book_name);
        }
        void output() const {
            cout << "\nBook Number: " << book_no ;
            cout<< "\nBook Name: " << book_name << "\n";
        }
};
class second {
    protected:
        string author_name;
        string publisher;
    public:
        void indata() {
            cout << "Enter Author Name: ";
            getline(cin, author_name);
            cout << "Enter Publisher: ";
            getline(cin, publisher);
        }
        void outdata() const {
            cout << "Author Name: " << author_name << "\nPublisher: " << publisher << "\n";
        }
};
class third : public first, public second {
    protected:
        int no_of_pages;
        int year_of_publication;
    public:
        void display() const {
            first::output();   
            second::outdata();  
            cout << "Number of Pages: " << no_of_pages << "\nYear of Publication: " << year_of_publication << "\n";
        }
        void getDetails() {
            input();   
            indata(); 
            cout << "Enter Number of Pages: ";
            cin >> no_of_pages;
            cout << "Enter Year of Publication: ";
            cin >> year_of_publication;
        }
};

int main() {
    int num_books;
    cout << "Enter number of books: ";
    cin >> num_books;
    cin.ignore();
    third books[num_books];
    cout << "Enter details for each book:\n";
    for (int i = 0; i < num_books; ++i) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].getDetails();
    }
    cout << "\nDisplaying information for each book:\n";
    for (int i = 0; i < num_books; ++i) {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].display();
    }
    return 0;
}
