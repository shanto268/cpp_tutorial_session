#include <iostream>
#include <string>

using namespace std;

typedef struct{
   string  title;
   string  author;
   string  subject;
   int   book_id;
   string year;
} Books;

typedef struct {
    string name;
    int age;
} Author;

void printBook( Books *book );
void printAuthorData( Author *author);

int main() {
   Books Book1;        // Declare Book1 of type Book
   Books Book2;        // Declare Book2 of type Book
    
   Author author1;
   Author author2;  

   // Book 1 specification
   Book1.title = "Learn C++ Programming";
   Book1.author =  "Sadman Ahmed Shanto";
   Book1.subject = "C++";
   Book1.year = "2020";
   Book1.book_id = 6495407;

   // Book 2 specification
   Book2.title = "Learn Python Programming";
   Book2.author =  "Raul Kubo Mohammad";
   Book2.subject = "Python";
   Book2.book_id = 6495700;
   Book2.year = "1910";
 
   // Print Book1 info, passing address of structure
   // remember that pointer variable contains the address of the variable hence we are passing the address
   printBook( &Book1 );
   printBook( &Book2 );
    
    // Author
    author1.name = Book1.author;
    author2.name = Book2.author;
    author1.age = 21;
    author2.age = 170;
    
    printAuthorData( &author1);
    printAuthorData( &author2);

   return 0;
}

// This function accept pointer to structure as parameter.
void printBook( Books *book ) {
   cout << "Book title : " << book->title <<endl;
   cout << "Book author : " << book->author <<endl;
   cout << "Book subject : " << book->subject <<endl;
   cout << "Book id : " << book->book_id <<endl;
   cout << "Book release year : " << book->year <<endl;
   cout << " " << endl;
}


void printAuthorData( Author *author){
    cout << "Author name: " << author->name << endl;
    cout << "Author age: " << author->age << endl;
    int old = author->age;
    if (old > 45)
        cout << "Author is dead" << endl;
    else
        cout << "Author is not dead.... yet" << endl;
   cout << " " << endl;
}
