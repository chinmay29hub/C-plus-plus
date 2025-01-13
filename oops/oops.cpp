#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // non-parameterized constructor
    Teacher()
    {
        cout << "non-parameterized constructor" << endl;
        dept = "Mechanical";
    }

    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        cout << "parameterized constructor" << endl;
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // custom copy constructor
    Teacher(Teacher &obj) // pass by reference
    {
        cout << "Custom Copy Constructor" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
        this->salary = obj.salary;
    }

    // properties
    string name;
    string dept;
    string subject;

    // methods
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "dept : " << dept << endl;
        cout << "salary : " << salary << endl;
        cout << "subject : " << subject << endl;
    }
};

class Accounts
{
private:
    double balance;
    string password;

public:
    string accoundId;
    string username;
};

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // deep copy
    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    ~Student()
    {
        cout << "Deleted Everything!!!" << endl;
        delete cgpaPtr; // solves memory leak
    }

    void getInfo()
    {
        cout << "name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        cout << "Person Constructor" << endl;
        this->name = name;
        this->age = age;
    }

    // Person()
    // {
    //     cout << "Parent Constructor" << endl;
    // }
};

class CollegeStudent : public Person
{
public:
    int rollNo;

    CollegeStudent(string name, int age, int rollNo) : Person(name, age)
    {
        cout << "CollegeStudent Constructor" << endl;
        this->rollNo = rollNo;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollNo: " << rollNo << endl;
    }
};

class GradStudent : public CollegeStudent
{
public:
    string researchArea;

    GradStudent(string name, int age, int rollNo, string researchArea) : CollegeStudent(name, age, rollNo)
    {
        cout << "GradStudent Constructor" << endl;
        this->researchArea = researchArea;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "rollNo: " << rollNo << endl;
        cout << "researchArea : " << researchArea << endl;
    }
};

class TeacherM
{
public:
    string subject;
    double salary;

    TeacherM(string subject, double salary)
    {
        this->subject = subject;
        this->salary = salary;
    }
};

class StudentM
{
public:
    string name;
    int rollNo;

    StudentM(string name, int rollNo)
    {
        this->name = name;
        this->rollNo = rollNo;
    }
};

class TA : public StudentM, public TeacherM
{
public:
    TA(string name, int rollNo, string subject, double salary) : StudentM(name, rollNo), TeacherM(subject, salary)
    {
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "rollNo: " << rollNo << endl;
        cout << "subject: " << subject << endl;
        cout << "salary: " << salary << endl;
    }

    void nameOperation()
    {
        cout << "name: " << name << endl;
    }

    void nameOperation(string name)
    {
        this->name = name;
        cout << "new name: " << name << endl;
    }
};

class ParentA
{
public:
    void getInfo()
    {
        cout << "Parent Class!" << endl;
    }

    virtual void hello()
    {
        cout << "hello from parent" << endl;
    }
};

class ChildA : public ParentA
{
public:
    void getInfo()
    {
        cout << "Child Class!" << endl;
    }

    void hello()
    {
        cout << "hello from child" << endl;
    }
};

class Shape // automatically abstract class
{
    virtual void draw() = 0; // template (pure virtual function)
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing a circle" << endl;
    }
};

void fun()
{
    static int x = 5;
    cout << "x: " << x << endl;
    x++;
}

class A
{
public:
    int x;

    A()
    {
    }

    A(int x)
    {
        this->x = x;
    }

    void incX()
    {
        x++;
    }

    void getInfo()
    {
        cout << "x: " << x << endl;
    }
};

class ABC
{
public:
    ABC()
    {
        cout << "constructor" << endl;
    }

    ~ABC()
    {
        cout << "destructor" << endl;
    }
};

class staticTest
{
public:
    static int count;

    void inc()
    {
        count++;
    }

    void getInfo()
    {
        cout << "count: " << count << endl;
    }
};

int staticTest::count = 0;

int main()
{
    Teacher t1("John", "C.S", "Maths", 23232);
    Teacher t2;
    Teacher t3(t1);
    // t1.name = "John";
    // t1.subject = "OOPS";
    // t1.setSalary(257777);
    // t1.getInfo();
    cout << "" << endl;
    // t2.getInfo();
    cout << "" << endl;
    // t3.getInfo();
    // cout << t1.getSalary() << endl;
    // cout << t1.dept << endl;
    // cout << "Hello, World!" << endl;

    // Student s1("Peter Parker", 8.2);
    // Student s2(s1);
    // s1.getInfo();
    // s2.name = "Tony Stark";
    // *(s2.cgpaPtr) = 9.2;
    // s1.getInfo();
    // s2.getInfo();
    // CollegeStudent s1("Walter W.", 21, 23);
    GradStudent gs1("Walter W.", 21, 23, "Artificial Intelligence");

    // gs1.getInfo();

    TA ta1("John Wick", 23, "Maths", 343434);
    // ta1.getInfo();
    // ta1.nameOperation();
    // ta1.nameOperation("Iron Man");
    ChildA c1;
    // c1.getInfo();
    // c1.hello();
    ParentA p1;
    // p1.getInfo();
    // p1.hello();
    Circle s1;
    // s1.draw();
    // fun();
    // fun();
    // fun();
    A inc1(5);
    inc1.incX();
    // inc1.getInfo();
    inc1.incX();
    // inc1.getInfo();
    if (true)
    {
        static ABC aa1;
    }
    cout << "End of Main Func" << endl;

    staticTest u1;
    u1.count = 5;
    u1.getInfo();
    u1.inc();
    u1.getInfo();
    staticTest u2;
    u2.getInfo();
    return 0;
}

/*
Encapsulation is wrapping up of data & member functions in a single unit called class.
 */

/*
Constructor

Special method invoked automatically at time of object creation. Used for Initialisation.

· Same name as class

. Constructor doesn't have a return type

. Only called once (automatically), at object creation

. Memory allocation happens when constructor is called
 */

/*
Multiple constructors with same name - Constructor Overloading
 */

/*
this is a special pointer in C++ that points to the current object.
 */

/*
Copy Constructor

Special Constructor (default) used to copy properties of one object into another.
 */

/*
Shallow & Deep Copy

A shallow copy of an object copies all of the member values from one object to another.

A deep copy, on the other hand, not only copies the member values but also makes copies of
any dynamically allocated memory that the members point to.
 */

/*
Inheritance

When properties & member functions of base class are passed on to the derived class.
 */

/*
+-------------+---------------------+---------------------+---------------------+
| Base Class  | Derived Class       | Derived Class       | Derived Class       |
|             | Private Mode        | Protected Mode      | Public Mode         |
+-------------+---------------------+---------------------+---------------------+
| Private     | Not Inherited       | Not Inherited       | Not Inherited       |
| Protected   | Private             | Protected           | Protected           |
| Public      | Private             | Protected           | Public              |
+-------------+---------------------+---------------------+---------------------+
 */

/*
Inheritance Types:

1) Single Inheritance
2) Multi-level Inheritance
3) Multiple Inheritance
4) Hierarchical Inheritance
5) Hybrid Inheritance
 */

/*
Polymorphism

Polymorphism is the ability of objects to take on different forms or behave in different
ways depending on the context in which they are used.

. Compile Time Polymorphism - eg: Constructor Overloading, Function Overloading

. Run Time Polymorphism - eg: Function Overriding (Inheritance), Virtual Functions
 */

/*
Abstraction
Hiding all unnecessary details & showing only the important parts

- Access Modifiers

- using Abstract Classes

. Abstract classes are used to provide a base class from which other classes can be derived.

. They cannot be instantiated and are meant to be inherited.

. Abstract classes are typically used to define an interface for derived classes.
 */

/*
Static Keyword

· Static Variables

Variables declared as static in a function are created & initialised once for the lifetime of the
program. //in Function

Static variables in a class are created & initialised once. They are shared by all the
objects of the class. //in Class
 */