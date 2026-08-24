#include <iostream>
#include <string> // Required for std::string
using namespace std;

int main() 
{
    int id1, id2, id3;
    string t1, t2, t3;

    // Book 1
    cout << "Enter id1: ";
    cin >> id1;
    cin.ignore(); // Clears the newline character from the buffer
    cout << "Enter title 1: ";
    getline(cin, t1);

    // Book 2
    cout << "Enter id2: ";
    cin >> id2;
    cin.ignore();
    cout << "Enter title 2: ";
    getline(cin, t2);

    // Book 3
    cout << "Enter id3: ";
    cin >> id3;
    cin.ignore();
    cout << "Enter title 3: ";
    getline(cin, t3);

    // Display the library data
    cout << "\n===LIBRARY===\n";
    cout << "ID: " << id1 << " | Title: " << t1 << "\n";
    cout << "ID: " << id2 << " | Title: " << t2 << "\n";
    cout << "ID: " << id3 << " | Title: " << t3 << "\n";

    return 0;
}
