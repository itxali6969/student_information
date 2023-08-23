#include <iostream>
#include <cstring>

using namespace std;

class Student {
private:
    string name;
    int age;
    string studentId; // int data type is also acceptable

public:
    // Default constructor
    Student() {
        name = "";
        age = 0;
        studentId = "";
    }

    // Parameterized constructor
    Student(string n, int a, string id) {
        name = n;
        age = a;
        studentId = id;
    }

    // Copy constructor (shallow copy)
    Student(const Student& obj) {
        name = obj.name;
        age = obj.age;
        studentId = obj.studentId;
    }

    // Assignment operator (deep copy)
    Student& operator=(const Student& obj) {
        if (this != &obj) {
            name = obj.name;
            age = obj.age;
            studentId = obj.studentId;
        }
        return *this;
    }

    void setName(string n) {
        name = n;
    }

    void setAge(int a) {
        age = a;
    }

    void setStudentId(string id) {
        studentId = id;
    }

    string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    string getStudentId() const {
        return studentId;
    }
};

int main() {
    // Create an object of the Student class using the parameterized constructor
    Student s1("Hamza", 18, "12345");

    // Create a new object of the Student class and copy the values from s1 using the copy constructor
    Student s2 = s1;

    // Create an object of the Student class using the default constructor
    Student s3;

    // Assign the values of s1 to s3 using the assignment operator
    s3 = s1;

    // Modify the name of s1
    s1.setName("Ahmed");

    // The name and student ID in s2 remain unchanged (shallow copy)
    cout << "s2: " << s2.getName() << ", " << s2.getAge() << ", " << s2.getStudentId() << endl;

    // The name and student ID in s3 are a deep copy and are not affected by the change in s1
    cout << "s3: " << s3.getName() << ", " << s3.getAge() << ", " << s3.getStudentId() << endl;

    // Print the values of s1
    cout << "s1: " << s1.getName() << ", " << s1.getAge() << ", " << s1.getStudentId() << endl;

    return 0;
}
