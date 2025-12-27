#include<iostream>
#include<string>
using namespace std;
class inventary{
private:
string author, publisher, title;
double price;
int stock;
public:
//initialisation of the constructor
inventary(string t, string a, string p, double pr, int st)
: author(a), publisher(p), title(t), price(pr), stock(st)
{};
//function to see the availability of the book
bool isAvailable(string a, string p, string t){
return(title == t && publisher == p && author == a);
}
//function to sell the books 
void sellbooks(int qunt){
if (stock>=qunt){
    stock=stock-qunt;
cout<<"the price of the books are:"<<(price*qunt)<<endl;}
else{
cout<<"the required amount of stocks are not available"<<endl;
}
}
void display()
{
cout<<"the  author of the book is:"<<author;
cout<<"with the title"<<title<<endl;
cout<<",publisher:"<<publisher<<endl;
cout<<"and the stock:"<<stock<<endl;
cout<<"having the price:"<<price<<endl;
}
};
int main(){
string title, author,publisher;
double price;
    int stock;
// Take book details from the user to create an inventory object
    cout << "Enter book title: ";
    getline(cin, title);
    cout << "Enter author name: ";
   getline(cin, author);
    cout << "Enter publisher name: ";
    getline(cin, publisher);
    cout << "Enter price of the book: ";
    cin>>price;
    cout << "Enter stock quantity: ";
    cin>>stock;
inventary book(title,author,publisher,price,stock);
cin.ignore();
cout << "Enter book title to search: ";
getline(cin, title);
cout << "Enter author name to search: ";
getline(cin, author);
cout << "Enter publisher name to search : ";
 getline(cin, publisher);
if (book.isAvailable(author,publisher,title)) {
int quantity;
cout << "Enter quantity to buy: ";
cin >> quantity;
book.sellbooks(quantity);
book.display();
} else {
cout << "Book not available" << endl;
}
return 0;
}