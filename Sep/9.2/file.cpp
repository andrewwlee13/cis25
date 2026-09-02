#include <iostream>
#include <fstream> // Need this!

int main() {
    std::ofstream outputFile; // Create an output file stream object
    outputFile.open("numbers.txt"); // Open (or create) a file

    for (int i = 1; i <= 10; i++) {
        outputFile << i << std::endl; // Write the number and a newline to the file
    }

    outputFile.close(); // Always close the file when you're done
    std::cout << "Done writing to file." << std::endl;
    return 0;
}
