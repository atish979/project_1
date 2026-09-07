#include <iostream>
using namespace std;

int main() {
    int book[5];
    cout << "Enter 5 Book IDs:\n";
    
    // 1. Input: Read 5 Book IDs
    for (int i = 0; i < 5; i++) {
        cin >> book[i]; // Fixed: was book[1], now correctly uses book[i]
    }
    
    // 2. Sorting: Bubble Sort algorithm
    for (int i = 0; i < 4; i++) { 
        for (int j = 0; j < 4 - i; j++) { // Fixed: changed comma to semicolon
            if (book[j] > book[j + 1]) {
                int temp = book[j];
                book[j] = book[j + 1];
                book[j + 1] = temp; // Fixed: added missing semicolon
            }
        }
    }
    
    // 3. Output: Print the sorted array
    cout << "\nBooks after sorting:\n"; // Fixed: added missing semicolon and space
    for (int i = 0; i < 5; i++) {
        cout << book[i] << " ";
    }
    cout << endl;
    
    return 0;
}
