/*
Author : Md. Wasif Hossain <wasif.hx@gmail.com>
ID : 23303320  Section : G  Sem : Fall 2024
Github : <https://github.com/wasif-h>
Topic  : Write a program to print the area and perimeter of a triangle having sides of 3, 4, and 5
units by creating a class named 'Triangle' with a function to print the area and perimeter
*/
#include <bits/stdc++.h>
using namespace std;

class Triangle
{
public:
    float a, b, c;
    Triangle(float x, float y, float z)
    {
        a = x;
        b = y;
        c = z;
    }
    void calc()
    {
        float perimeter = a + b + c;
        float s = perimeter / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));

        cout << "Area = " << area << " cm^2" << endl;
        cout << "Perimeter = " << perimeter << " cm" << endl;
    }
};

// <<<---------  main function   --------->>>
int main()
{

    cout << "< Wasif Hossain - 23303320 >\n\n";
    Triangle t1(3, 4, 5);
    t1.calc();

    return 0;
}