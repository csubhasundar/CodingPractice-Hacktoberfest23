//This is a project by RavenyBoi
//My github : https://github.com/RavenyBoi
#include <stdlib.h>
#include <iostream>

using namespace std;

int main() {

    cout << "Enter 1 if you want to convert Fahrenheit to celsuis\nEnter 2 if you want to convert celsuis to fahrenheit\nEnter 3 if you want to convert celsuis to kelvin\nEnter 4 if you want to convert kelvin to celsuis\nEnter 5 if you want to convert Fahrenheit to kelvin\nEnter 6 if you want to convert kelvin to Fahrenheit\nEnter 7 if you want to know about error codes in this program." << endl;
    int option;
    cin >> option; 

    if (option == 1) {

        double c_value1;

        cout << "You have selected the fahrenheit to celsuis calculator, enter the fahrenheit value needed to be converted below." << endl ;
        cin >> c_value1;

        double f_value1 = (c_value1 - 32) * 5/9; 
        cout << c_value1 << " is " << f_value1 << " when converted to celsuis." << endl ;
        
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }
        
    }
    else if (option == 2){

       double c_value2;

        cout << "You have selected the celsuis to fahrenheit calculator, enter the celsuis value needed to be converted below." << endl ;
        cin >> c_value2;

        double f_value2 = (c_value2 * 9/5) + 32; 
        cout << c_value2 << " is " << f_value2 << " when converted to fahrenheit." << endl ;
        
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }

    }
    else if (option == 3){

       double c_value3;

        cout << "You have selected the celsuis to kelvin calculator, enter the celsuis value needed to be converted below." << endl ;
        cin >> c_value3;

        double k_value1 = c_value3 + 273.15; 
        cout << c_value3 << " is " << k_value1 << " when converted to kelvin." << endl ;
        
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }

    }
    else if (option == 4){

       double k_value2;

        cout << "You have selected the kelvin to celsuis calculator, enter the kelvin value needed to be converted below." << endl ;
        cin >> k_value2;

        double c_value4 = k_value2 - 273.15; 
        cout << k_value2 << " is " << c_value4 << " when converted to fahrenheit." << endl ;
        
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }
    }
    else if (option == 5){

       double f_value3;

        cout << "You have selected the fahrenheit to kelvin calculator, enter the fahrenheit value needed to be converted below." << endl ;
        cin >> f_value3;

        double k_value3 = (f_value3 - 32) * 5/9 + 273.15; 
        cout << f_value3 << " is " << k_value3 << " when converted to kelvin." << endl ;
        
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }

    }
    else if (option == 6){

       double k_value4;

        cout << "You have selected the kelvin to fahrenheit calculator, enter the kelvin value needed to be converted below." << endl ;
        cin >> k_value4;

        double f_value4 = (k_value4 - 273.15) * 9/5 + 32; 
        cout << k_value4 << " is " << f_value4 << " when converted to fahrenheit." << endl ;
        
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }

    }   
    else if (option == 7)
    {
        cout << "The error codes founded in the program at this moment are :-\nError code 1: This error is caused when the user enters a number other than the options provided.\nError code 2: This error is caused when the user enters a number other than the options provided to allow the user to either end or rerun the program." << endl;
       
        cout << "Enter 1 if you want to convert another temperature value.\nEnter 2 to end the program." << endl;
        int option2;
        cin >> option2;

        if (option2 == 1) {
            system("cls");
            main();
        }
        else if (option2 == 2) {
            return 0;
        }
        else {
            cout << "Error code 2, Enter 7 next time to see why is this happening." << endl;
            main();
        }      

    }   
    else {

        cout << "Error code 1, enter 7 next time to know why is this happening." << endl;
        main();

    }




}
