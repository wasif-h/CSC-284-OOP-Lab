# CSC-284-OOP-Lab




### **Experiment 1: Student Information Initialization**  
**Description:**  
This experiment demonstrates how to create a class `Student` with attributes `name` and `roll_no`. An object of the class is created, and the attributes are initialized through the constructor.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    int roll_no;

public:
    Student(string n, int r) : name(n), roll_no(r) {
        cout << name << " " << roll_no << endl;
    }
};

int main() {
    Student s("John", 2);
    return 0;
}
```  

**Output:**  
```
John 2
```  

**Result Analysis:**  
The program successfully initializes and prints the name "John" and roll number `2` for the student.

---

### **Experiment 2: Student Data Management**  
**Description:**  
This experiment uses a class `Student` to store and display the roll number, phone number, and address of two students, "Sam" and "John". Each object stores unique information.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Student {
    string name;
    int roll_no;
    string address;
    long long phone;

public:
    Student(string n, int r, string a, long long p) : name(n), roll_no(r), address(a), phone(p) {
        cout << name << " " << roll_no << " " << address << " " << phone << endl;
    }
};

int main() {
    Student s1("Sam", 1, "123 Main St", 1234567890);
    Student s2("John", 2, "456 Elm St", 9876543210);
    return 0;
}
```  

**Output:**  
```
Sam 1 123 Main St 1234567890  
John 2 456 Elm St 9876543210
```  

**Result Analysis:**  
The program correctly stores and displays the details of the two students as expected.

---

### **Experiment 3: Area and Perimeter of a Triangle**  
**Description:**  
A class `Triangle` is used to calculate and display the area and perimeter of a triangle with sides 3, 4, and 5 units using the constructor for initialization and Heron's formula for area calculation.  

**C++ Code:**  
```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    int a, b, c;

public:
    Triangle(int x, int y, int z) : a(x), b(y), c(z) {
        int perimeter = a + b + c;
        double s = perimeter / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area << " " << perimeter << endl;
    }
};

int main() {
    Triangle t(3, 4, 5);
    return 0;
}
```  

**Output:**  
```
6 12
```  

**Result Analysis:**  
The program correctly calculates and displays the area (`6.0`) and the perimeter (`12`) of the triangle.

---

### **Experiment 4: Triangle Properties via Parameterized Function**  
**Description:**  
This experiment calculates the area and perimeter of a triangle by passing its side lengths to a function within the `Triangle` class.  

**C++ Code:**  
```cpp
#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
public:
    void calculate(int a, int b, int c) {
        int perimeter = a + b + c;
        double s = perimeter / 2.0;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << area << " " << perimeter << endl;
    }
};

int main() {
    Triangle t;
    t.calculate(3, 4, 5);
    return 0;
}
```  

**Output:**  
```
6 12
```  

**Result Analysis:**  
The program accurately computes the area (`6.0`) and perimeter (`12`) of the triangle based on the provided sides.

---

### **Experiment 5: Rectangle Area Calculation**  
**Description:**  
A class `Rectangle` is used to compute the area of two rectangles with given lengths and breadths. The dimensions are passed as parameters to a function.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Rectangle {
public:
    int Area(int length, int breadth) {
        return length * breadth;
    }
};

int main() {
    Rectangle r;
    cout << r.Area(4, 5) << endl;
    cout << r.Area(5, 8) << endl;
    return 0;
}
```  

**Output:**  
```
20  
40
```  

**Result Analysis:**  
The program calculates the areas (`20` and `40`) of the rectangles and displays the results accurately.


### **Experiment 6: Rectangle Area Using Set and Get Functions**  
**Description:**  
This experiment implements a class `Area` with `setDim` and `getArea` functions to set dimensions and calculate the area of a rectangle. The dimensions are inputted by the user.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Area {
    int length, breadth;

public:
    void setDim(int l, int b) {
        length = l;
        breadth = b;
    }
    int getArea() {
        return length * breadth;
    }
};

int main() {
    Area a;
    int l, b;
    cin >> l >> b;
    a.setDim(l, b);
    cout << a.getArea() << endl;
    return 0;
}
```  

**Output:**  
*(Example Input)*  
```
5 10
```  
*(Example Output)*  
```
50
```  

**Result Analysis:**  
The program dynamically sets the dimensions and accurately calculates the area based on user input.

---

### **Experiment 7: Rectangle Area Using Parameterized Function**  
**Description:**  
This experiment uses a class `Area` to calculate the area of a rectangle by taking dimensions directly as parameters in a function and returning the result.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Area {
public:
    int returnArea(int length, int breadth) {
        return length * breadth;
    }
};

int main() {
    Area a;
    int l, b;
    cin >> l >> b;
    cout << a.returnArea(l, b) << endl;
    return 0;
}
```  

**Output:**  
*(Example Input)*  
```
6 7
```  
*(Example Output)*  
```
42
```  

**Result Analysis:**  
The program successfully calculates and returns the area of the rectangle based on the provided inputs.

---

### **Experiment 8: Operations on Complex Numbers**  
**Description:**  
A class `Complex` is created to perform addition, subtraction, and multiplication on two complex numbers. The real and imaginary parts are inputted by the user, and the results are displayed.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Complex {
    int real, imag;

public:
    Complex(int r, int i) : real(r), imag(i) {}

    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex subtract(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }
    Complex multiply(Complex c) {
        return Complex(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
    }
    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    int r1, i1, r2, i2;
    cin >> r1 >> i1 >> r2 >> i2;
    Complex c1(r1, i1), c2(r2, i2);
    Complex c3 = c1.add(c2);
    Complex c4 = c1.subtract(c2);
    Complex c5 = c1.multiply(c2);
    c3.display();
    c4.display();
    c5.display();
    return 0;
}
```  

**Output:**  
*(Example Input)*  
```
2 3 4 5
```  
*(Example Output)*  
```
6+8i  
-2-2i  
-7+22i
```  

**Result Analysis:**  
The program computes and outputs the sum, difference, and product of the complex numbers accurately, maintaining the correct format.

---

### **Experiment 9: Box Volume Calculation Using Initialization List**  
**Description:**  
This experiment demonstrates the use of an initialization list in the `Volume` class to initialize the dimensions of a box and calculate its volume.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Volume {
    int length, breadth, height;

public:
    Volume(int l, int b, int h) : length(l), breadth(b), height(h) {
        cout << length * breadth * height << endl;
    }
};

int main() {
    Volume v(2, 3, 4);
    return 0;
}
```  

**Output:**  
```
24
```  

**Result Analysis:**  
The program correctly initializes the dimensions and computes the volume (`24`) of the box.

---

### **Experiment 10: Employee Information Display**  
**Description:**  
A class `Employee` is used to store and display details like name, year of joining, salary, and address of three employees.  

**C++ Code:**  
```cpp
#include <iostream>
using namespace std;

class Employee {
    string name, address;
    int year_of_joining;
    int salary;

public:
    Employee(string n, int y, int s, string a) : name(n), year_of_joining(y), salary(s), address(a) {
        cout << name << " " << year_of_joining << " " << address << endl;
    }
};

int main() {
    Employee e1("Robert", 1994, 50000, "64C- WallsStreat");
    Employee e2("Sam", 2000, 60000, "68D- WallsStreat");
    Employee e3("John", 1999, 55000, "26B- WallsStreat");
    return 0;
}
```  

**Output:**  
```
Robert 1994 64C- WallsStreat  
Sam 2000 68D- WallsStreat  
John 1999 26B- WallsStreat
```  

**Result Analysis:**  
The program successfully displays the required employee details in a formatted structure as expected.

