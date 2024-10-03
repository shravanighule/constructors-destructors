Constructor-and-Destructor
Aim:
To use and implement C++ Constructor and Destructor.

Software used:
Visual Studio code.

Theory:
Constructor:
A constructor is a special member function of a class that is automatically called when an object of that class is created. Constructors are used to initialize the objects of a class.

Basic Constructor
A constructor has the same name as the class and does not have a return type (not even void).

class MyClass
{
public:
    MyClass()    // Constructor
    { 
        cout << "Constructor is called!" << endl;
    }
};
2. Parameterized Constructor
You can pass arguments to a constructor to initialize data members with specific values.

class MyClass
{
private:
    int x;

public:
    MyClass(int a)    // Parameterized constructor
    {  
        x = a;
        cout << "x is initialized to " << x << endl;
    }
};
3. Copy Constructor
A copy constructor is a constructor that creates a new object as a copy of an existing object.

class MyClass
{
private:
    int x;

public:
    MyClass(int a)    // Parameterized constructor
    {  
        x = a;
    }

    MyClass(const MyClass &obj)  // Copy constructor
    {  
        x = obj.x;
    }

    void display()
    {
        std::cout << "x = " << x << std::endl;
    }
};
Destructor:
A destructor is the opposite of a constructor and is used to clean up when an object is destroyed. It has the same name as the class but is preceded by a tilde ~.

class MyClass
{
public:
    ~MyClass()  // Destructor
    {  
        std::cout << "Destructor is called!" << std::endl;
    }
};
Differences
Features	Constructor	Destructor
Purpose	Initializes the object	Cleans up before object is destroyed
Name	Same as class name	Same as class name but preceded by ~
Called When	Object is created	Object is destroyed.
Parameters	Can take parameters	Cannot take parameters
Overloading	Can be overloaded (multiple constructors)	Cannot be overloaded (only one destructor)
Algorithms:
Constructor inside class
Start

Define Class date:

Create a class named date with three private data members: d (for day), m(for month), and y (for year).
Define Constructor date():

Inside the class, define a public constructor date() that:
Prompts the user to enter the day (d), month (m), and year (y).
Stores the entered values in the respective member variables.
Displays the date in the format d/m/y.
Inside the main() Function:

Declare an object today of class date.
This triggers the automatic call of the constructor.
The constructor will then execute, prompting the user to input values and displaying the date in the format d/m/y.
End

Destructor
Start

Define Global Variable:

Declare a global variable count and initialize it to 0. This variable will track the number of Student objects created and destroyed.
Define Class Student:

Inside the class Student, define two public member functions: a constructor and a destructor.
Constructor Student():

Increment count by 1 whenever a Student object is created.
Display the current count of created objects using the message: "Number of objects created: count".
Destructor ~Student():

Decrement count by 1whenever a Student object is destroyed.
Display the current count of destroyed objects (before decrement) using the message: "No. of objects destroyed: count + 1".
Inside the main() Function:

Create three Student objects: aa, bb, and cc.
This will call the constructor for each object, incrementing count three times and displaying the number of objects created after each increment.
Create Nested Scope:

Inside the nested block ({}), create a fourth Student object dd.
This will call the constructor, incrementing count by 1 and displaying the number of objects created.
When the block ends, object dd goes out of scope and is destroyed, invoking the destructor and decreasing count by 1.
End of main():

As main() ends, objects aa, bb, and cc go out of scope, one by one, invoking their destructors and decrementing count by 1 after each destruction.
End

About
No description, website, or topics provided.
Resources
 Readme
 Activity
Stars
 0 stars
Watchers
 1 watching
Forks
 0 forks
Report repository
Releases
No releases published
Packages
No packages published
Languages
C++
100.0%
Footer
