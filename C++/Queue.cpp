#include <iostream>
#include <queue>

using namespace std;

int main() 
{
    queue<int>q; //object creation
    int item;
    char ans;
    int choice;
    do
    {
        cout << "\n Main Menu";
        cout <<"\n1. Insert element ";
        cout<<"\n2. Delete Element ";
        cout<<"\n3. Display Rear Element ";
        cout <<"\n4.Display Front Element ";
        cout <<"\n5. Size of queue ";
        cout <<"\n Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1 :cout << "Enter the value to be inserted in Queue:";
                cin>>item ;
                q.push(item);
                cout<< "\n Item is Inserted!";
                break;
            case 2: item = q.front();
                q.pop();
                cout << "\n Deleted item is " << item;
                break;
            case 3:
                cout << "The element at the rear end is: " << q.back();
                break;
            case 4:
                cout << "The element at the front end is: " << q.front();
                break;
            case 5:
                cout << "\n Size of queue = " << q.size();
                break;

        }
        cout << "\n Do you want to continue?";
        cin >>ans;


        
    } while (ans == 'y');
    return 0;
}