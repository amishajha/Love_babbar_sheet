//class is a user defined datatype that we can use in our program and it works as a object constructor 
#include<iostream>
using namespace std;

class myclass {
    public:
    int num;
    string mystring;
};

//methods are the functions that belong to the class
//constructor is automatically called when the object is created
// public - members are accessible from outside the class
// private - members cannot be accessed (or viewed) from outside the class
// protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

// Java Virtual Machine is a virtual machine that enables the computer to run the Java program calls the main method
//The Java Runtime Environment is a set of software tools which are used for developing Java applications.
// Multiple inheritance is a feature of some object-oriented computer programming languages in which an object or class can inherit features from more than one parent object or parent class