// //write  menu driven c++ program for a simple library system that allows the user to add a book id ,display all book id, search for a book id and exit the program

// #include <iostream>
// using namespace std;

// int main()
// {
//     int book[10];
//     int n = 0;
//     int choice;
//     int search;

//     do
//     {
//        cout<<"\n\n==========SMART LIBRARY=========";
//        cout<<"\n1. Add Book";
//        cout<<"\n2. Display Books";
//        cout<<"\n3. Search Box";
//        cout<<"\n4. Exit";
//        cout<<"\n5. Enter Ypur choice: "
//        cin>>choice;

//        if (choice == 1)
//        {
//           cout<<"Enter BookID: ";
//           cin>>book[n];
//           n++;
//           cout<<"Book Added: ";  
//        }
       
//         else if(choice == 2)
//        {
//           cout<<"nBooks in library";
//           for (int i = 0; i < n; i++)
//           {
//             cout<<book[i]<<endl;
          
//           }
//        }
//         else if(choice == 3)
//         {
//             cout<<"nEnter Books ID to search: ";
//             cin>>searchID;
//             bool found = false;
//             for (int i = 0; )
//         }
//        }

//     } 
    
// }//write  menu driven c++ program for a simple library system that allows the user to add a book id ,display all book id, search for a book id and exit the program

// #include <iostream>
// using namespace std;

// int main()
// {
//     int book[10];
//     int n = 0;
//     int choice;
//     int search;

//     do
//     {
//        cout<<"\n\n==========SMART LIBRARY=========";
//        cout<<"\n1. Add Book";
//        cout<<"\n2. Display Books";
//        cout<<"\n3. Search Box";
//        cout<<"\n4. Exit";
//        cout<<"\n5. Enter Ypur choice: "
//        cin>>choice;

//        if (choice == 1)
//        {
//           cout<<"Enter BookID: ";
//           cin>>book[n];
//           n++;
//           cout<<"Book Added: ";  
//        }
       
//         else if(choice == 2)
//        {
//           cout<<"nBooks in library";
//           for (int i = 0; i < n; i++)
//           {
//             cout<<book[i]<<endl;
          
//           }
//        }
//         else if(choice == 3)
//         {
//             cout<<"nEnter Books ID to search: ";
//             cin>>searchID;
//             bool found = false;
//             for (int i = 0; i < n; i++)
//             {
//                 if (book[i] == search)
//                 {
//                     found == true;
//                 }
//             }
//             if (found)
//             {
//                 cout<<"Book Found!";
//             }
//             else
//             {
//                 cout<<"Book Not Found!";
//             }
//             else if (choice == 4)
//             {
//                 cout<<"Thank you!";
//             }
            
            
//         }
//        }

//     } 
    
// }


#include <iostream>
using namespace std;

int main() {
    int book[10];       // Array to store up to 10 book IDs
    int n = 0;          // Counter for the number of books added
    int choice;         // Variable to store user's menu choice
    int search;         // Variable to store the ID to search for

    do {
        // Display Menu
        cout << "\n\n========== SMART LIBRARY =========";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";
        cout << "\nEnter your choice: "; // Fixed typo and removed "5."
        cin >> choice;

        if (choice == 1) {
            if (n < 10) { // Prevent array out-of-bounds error
                cout << "Enter Book ID: ";
                cin >> book[n];
                n++;
                cout << "Book Added Successfully!";
            } else {
                cout << "Library is full! Cannot add more books (Max 10).";
            }
        } 
        else if (choice == 2) {
            cout << "\nBooks in library:\n"; // Fixed missing backslash for newline
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
            cin >> search; // Fixed: changed 'searchID' to declared variable 'search'
            
            bool found = false;
            for (int i = 0; i < n; i++) {
                if (book[i] == search) {
                    found = true; // Fixed: changed '==' (comparison) to '=' (assignment)
                    break;        // Exit loop early once found
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

    } while (choice != 4); // Fixed: Added the required while condition to close the do-while loop

    return 0;
}