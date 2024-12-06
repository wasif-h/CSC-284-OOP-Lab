/*
Author : Md. Wasif Hossain <wasif.hx@gmail.com>
ID : 23303320  Section : G  Sem : Fall 2024
Github : <https://github.com/wasif-h>
Topic  : 2. Assign and print the roll number, phone number, and address of two students having
names "Sam" and "John" respectively by creating two objects of the class 'Student'.
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string address;
    int phone_number;
    int roll_no;

    void display()
    {
        cout << "Roll Number - " << roll_no << endl;
        cout << "Phone Number - " << phone_number << endl;
        cout << "Address - " << address << endl;
    }
};
// <<<---------  main function   --------->>>
int main()
{

    cout << "< Wasif Hossain - 23303320 >\n\n";
    Student Sam, Jhon;

    Sam.roll_no = 2;
    Sam.address = "New York";
    Sam.phone_number = 1234345;
    Sam.display();
    Jhon.address = "Las Vegas";
    Jhon.roll_no = 4;
    Jhon.phone_number = 123564576;
    Jhon.display();

    return 0;
}