/*
Author : Md. Wasif Hossain <wasif.hx@gmail.com>
ID : 23303320  Section : G  Sem : Fall 2024
Github : <https://github.com/wasif-h>
Topic  : 1. Create a class named 'Student' with a string variable 'name' and an integer variable
'roll_no'. Assign the value of roll_no as '2' and that of the name as "John" by creating an
object of the class Student.
*/
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll_no;
};
// <<<---------  main function   --------->>>
int main()
{

    cout << "< Wasif Hossain - 23303320 >\n\n";
    Student s1;
    s1.name = "John";
    s1.roll_no = 2;

    return 0;
}