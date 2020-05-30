// files start with libraries and header files (.h)
#include <iostream>
#include <string>
#include "hello.h"

// main() is where program execution begins.
int main() {
   cout << "Hello World" << endl; // prints Hello World
   //calling(using) a function
   sayHi();
   sayHiTo("Kubo");
   int result = add(5,6);
   cout << "result: " << result << endl;
   return 0;
}

//function definitions
void sayHi(){
    cout << "Hi y'all" << endl;
}


void sayHiTo(string name){
    cout << "Hi " << name << endl;
}

int add(int n1, int n2){
 return n1 + n2;
}

/*
 *Common Layout
libraries

functional prototypes

main()

function definitions
 *
 */
