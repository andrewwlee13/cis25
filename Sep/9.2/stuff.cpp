
// returning a useable value vs just printing something

// least common multiple condition --> while x modulo y does not equal zero
// walk thru numbers

#include <iostream>
#include <string>


int main(){
    // ask user for x and y
    cout << findLeastCommonMultiple(int x, int y); // ??
    return 0;
}

int findLeastCommonMultiple(int x, int y) { 

    int a = 1;

    while( a % x !=0 && a % y !=0){
        a = a + 1;
    }

    return a;

} 

// a global variable can be accessed from anywhere inside the c++ file
// local variables are only accesssible inside their own function
// teach reccomends we don't use global variables, there's a whole package 
// of special bugs that will nip you when you start using them
// still need to learn how they work tho type shit
// teach has a very poor working memory, he says that it has been tested in 
// a controlled environment and that a lot of programmers for whatever reason
// have poor working memories
// the compiler is able to defunctionify the add(1,2) function

// use ofstreamm --> output to your file --> used for writing files
// use ifstream --> input from your file --> used for reading files 