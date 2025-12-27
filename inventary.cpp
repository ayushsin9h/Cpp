#include <iostream>
#include <string>
using namespace std;

class inventary {
private:
    string author, publisher, title;
    double price;
    int stock;

public:
    // Initialization of the constructor
    inventary(string t, string a, string p, double pr, int st)
        : author(a), publisher(p), title(t), price(pr), stock(st)
    {}

    // Function to see the availability of the book
    bool isAvailable(string a, string p, string t) {
        return (title == t && publisher == p && author == a);
    }

    // Function to sell the books
    void sellbooks(int qunt) {
        if (stock >= qunt) {
            stock = stock - qunt;
            cout << "The total price for the books is: " << (price * qunt) << endl;
        } else {
            cout << "The required amount of stock is not available." << endl;
        }
    }

    void display() {
        cout << "Author: " << author << endl;
        cout << "Title: " << title << endl;
        cout << "Publisher: " << publisher << endl;
        cout << "Stock: " << stock << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    string title, author, publisher;
    double price;
    int stock;

    // Take book details from the user to create an inventory object
    cout << "Enter book title: ";
    getline(cin, title);  // Use getline for multi-word input

    cout << "Enter author name: ";
    getline(cin, author);  // Use getline for multi-word input

    cout << "Enter publisher name: ";
    getline(cin, publisher);  // Use getline for multi-word input

    cout << "Enter price of the book: ";
    cin >> price;

    cout << "Enter stock quantity: ";
    cin >> stock;

    inventary book(title, author, publisher, price, stock);

    // Ask for book details to search in the inventory
    cin.ignore();  // Clear the newline character from the input buffer
    cout << "Enter book title to search: ";
    getline(cin, title);

    cout << "Enter author name to search: ";
    getline(cin, author);

    cout << "Enter publisher name to search: ";
    getline(cin, publisher);

    if (book.isAvailable(author, publisher, title)) {
        int quantity;
        cout << "Enter quantity to buy: ";
        cin >> quantity;
        book.sellbooks(quantity);  // Sell books after getting the quantity
        book.display();            // Display updated book details
    } else {
        cout << "Book not available." << endl;
    }

    return 0;
}
