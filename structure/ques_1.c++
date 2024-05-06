// Write a program to store and print the roll no., name , age and marks of a student using structures

// #include <iostream>
// using namespace std;
// int main()
// {

//     struct ques_1
//     {
//         int rollno, age;
//         string name;
//         float marks;
//     };

//     struct ques_1 student;

//     student.rollno = 24232;
//     student.age = 18;
//     student.name = "harshit";
//     student.marks = 82.98;

//     cout << student.rollno << endl;
//     cout << student.age << endl;
//     cout << student.name << endl;
//     cout << student.marks;

//     return 0;
// }

#include <iostream>
using namespace std;

typedef struct
{
    int rollno, age;
    string name;
    float marks;
} Student;

int main()
{
    Student student;

    student.rollno = 24232;
    student.age = 18;
    student.name = "harshit";
    student.marks = 82.98;

    cout << student.rollno << endl;
    cout << student.age << endl;
    cout << student.name << endl;
    cout << student.marks;

    return 0;
}
