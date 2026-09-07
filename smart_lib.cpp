#include <iostream>
using namespace std;

int main() {
    int book[10];       
    int n = 0;          
    int choice;         
    int search;         

    do {
        
        cout << "\n\n========== SMART LIBRARY =========";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: "; 
        cin >> choice;

        if (choice == 1) {
            if (n < 10) { 
                cout << "Enter Book ID: ";
                cin >> book[n];
                n++;
                cout << "Book Added Successfully!";
            } else {
                cout << "Library is full! Cannot add more books (Max 10).";
            }
        } 
        else if (choice == 2) {
            cout << "\nBooks in library:\n"; 
            if (n == 0) {
                cout << "No books in the library.\n";
            } else {
                for (int i = 0; i < n; i++) {
                    cout << "- Book ID: " << book[i] << endl;
                }
            }
        } 
        else if (choice == 3) {
            cout << "\nEnter Book ID to search: ";
            cin >> search; 
            
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (book[i] == search) {
                    found = true; 
                    break;      
                }
            }
            
            if (found) {
                cout << "Book Found!\n";
            } else {
                cout << "Book Not Found!\n";
            }
        } 
        else if (choice == 4) {
            cout << "\nThank you! Exiting program.\n";
        } 
        else {
            cout << "\nInvalid choice! Please enter a number between 1 and 4.\n";
        }

    } while (choice != 4); 

    return 0;
}
