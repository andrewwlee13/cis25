
#include <iostream>
#include <fstream> // Need this!
using namespace std;

/* 
int main() {
    
    const int NUM_SCORES = 5;
    int scores[NUM_SCORES];

    scores[0] = 6;
    scores[1] = 7;

    cout << scores[0] << scores[1] << endl;

    return 0;
}
    */

int main(){
    const int size = 10;
    int arr[size] = {2,4,6,8,10,12,14,16,18,20};

    for( int i =0 ; i < size; i++) {
        cout << arr[i] / arr [0] << endl;
    }

    /*int x = 5;

    cout << "x equals " << x << endl;

    addOneAndPrint(x);

    cout << " and x + 1 equals " << endl;*/


    addOneToArrayAndPrint( arr, size);

    return 0;
}

void addOneToArrayAndPrint(int arr[], int size){ 

        // for loop slop to add 1 to each element

        // print slop to print each new element
    }

// what's the purpose of doing addOneAndPrint slop?
// for an integer variable you can reprint the variable
// and you will see it remains x, not x + 1 
// this is pass by value, values are copied over

//for arrays it will be arr[i] + 1
//why? pass by reference? it recieves the actual array variable
//why? well there could be a few reason imagine an array had
// 1 million items, your RAM would need to copy over 1 million
// elements and that would be too much
// the function gets accessed to the memory where the array
// is and it changes it

