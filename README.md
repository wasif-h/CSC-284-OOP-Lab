### **Experiment 1**  
**Name:** Student Information Initialization  

**Description:**  
This experiment uses object-oriented programming concepts like classes, objects, constructors, and data encapsulation. The problem demonstrates how to create a `Student` class with attributes `name` and `roll_no`. An object of the class is initialized using an expanded constructor to assign values and display them.  

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
The program successfully initializes and prints the student name as "John" and roll number `2` using the constructor.  

---

### **Experiment 2**  
**Name:** Student Data Management  

**Description:**  
This experiment demonstrates the use of multiple objects in a class to manage and store data for individual entities. The `Student` class encapsulates the attributes like `name`, `roll_no`, `address`, and `phone`. Each object is assigned unique data and displays it.  

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
The program correctly stores and displays details for two students using two separate objects of the `Student` class.  

---

### **Experiment 3**  
**Name:** Area and Perimeter of a Triangle  

**Description:**  
This experiment illustrates the use of classes and constructors to calculate the area and perimeter of a triangle. It involves encapsulation and constructors for initialization. The Heron’s formula is used for the area calculation.  

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
6.0 12
```  

**Result Analysis:**  
The program calculates and prints the area as `6.0` and the perimeter as `12` for a triangle with sides 3, 4, and 5.  

---

### **Experiment 4**  
**Name:** Triangle Properties via Parameterized Function  

**Description:**  
This experiment showcases the use of parameterized member functions to calculate and display properties of a triangle. Encapsulation is applied by organizing the logic within a class.  

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
6.0 12
```  

**Result Analysis:**  
The function correctly computes the area and perimeter of the triangle using the parameters passed.  


### **Experiment 5**  
**Name:** Rectangle Area Calculation  

**Description:**  
This experiment uses encapsulation and parameterized functions within a `Rectangle` class to calculate and display the area of rectangles. The dimensions are passed as parameters to a function, and the calculated area is returned.  

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
The program calculates and displays the areas of two rectangles (`20` and `40`) based on their dimensions.  

---

### **Experiment 6**  
**Name:** Rectangle Area Using Set and Get Functions  

**Description:**  
This experiment demonstrates the use of `setDim` and `getArea` functions in a class `Area` to set the dimensions and calculate the area of a rectangle. Concepts of encapsulation and function interaction are applied.  

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
*(Example Input: 5 8)*  
```
40
```  

**Result Analysis:**  
The program dynamically sets the rectangle dimensions and calculates the area based on user input.  

---

### **Experiment 7**  
**Name:** Rectangle Area Using Parameterized Function  

**Description:**  
This experiment shows the use of a parameterized function in a class `Area` to calculate and return the area of a rectangle. Encapsulation is used for organizing code functionality.  

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
*(Example Input: 4 5)*  
```
20
```  

**Result Analysis:**  
The program successfully calculates and displays the area of a rectangle based on the dimensions provided by the user.  

---

### **Experiment 8**  
**Name:** Operations on Complex Numbers  

**Description:**  
This experiment uses a `Complex` class to perform addition, subtraction, and multiplication of complex numbers. Concepts of encapsulation and object interaction are demonstrated by defining separate member functions for each operation.  

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
*(Example Input: 3 4 1 2)*  
```
4+6i  
2+2i  
-5+10i
```  

**Result Analysis:**  
The program computes and displays the sum, difference, and product of two complex numbers accurately.  

---

### **Experiment 9**  
**Name:** Box Volume Calculation Using Initialization List  

**Description:**  
This experiment introduces initialization lists to initialize member variables in the `Volume` class. It calculates the volume of a box by taking its length, breadth, and height as input.  

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
The program correctly initializes the box dimensions and calculates its volume as `24`.  

---

### **Experiment 10**  
**Name:** Employee Information Display  

**Description:**  
This experiment uses the `Employee` class to encapsulate and display details of employees, such as name, year of joining, salary, and address. Multiple objects are created to represent individual employees.  

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
The program successfully stores and displays the information of three employees in the specified format.  
