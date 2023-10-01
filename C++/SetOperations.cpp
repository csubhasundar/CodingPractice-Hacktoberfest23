#include <iostream>
#include <set>

using namespace std;

int main() {
    int item, count;
    char ans = 'y';
    int choice;
    set<int> s;
    set<int>::iterator i; 

    do {
        cout << "\nMain Menu";
        cout << "\n1. Insert an element";
        cout << "\n2. Delete an Element";
        cout << "\n3. Get the size of set";
        cout << "\n4. Search an element";
        cout << "\n5. Display";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "\nEnter the element to be inserted: ";
                cin >> item;
                s.insert(item);
                break;
            case 2:
                cout << "\nEnter the element to be deleted: ";
                cin >> item;
                s.erase(item);
                break;
            case 3:
                count = s.size();
                cout << "\nThe size of set is: " << count; 
                break;
            case 4:
                cout << "\nEnter the element to be searched: ";
                cin >> item;
                i = s.find(item); 
                if (i != s.end()) {
                    cout << "Element " << *i << " is present in the set" << endl;
                } else {
                    cout << "Element is not present in the set." << endl;
                }
                break;
            case 5:
                cout << "Elements of set are: ";
                for (i = s.begin(); i != s.end(); i++) {
                    cout << *i << " ";
                }
                break;
            default:
                cout << "\nInvalid choice. Please enter a valid choice." << endl;
                break;
        }
        cout << "\nDo you want to continue? (y/n): ";
        cin >> ans;
    } while ((ans == 'Y') || (ans == 'y'));

    return 0;
}




    