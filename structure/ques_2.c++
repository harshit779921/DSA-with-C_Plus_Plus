/* Write a program to store the roll no. (starting from 1), name and age of 5 students and
 then print the details of the student with roll no. 2.*/

#include <iostream>
#include <string>
using namespace std;

typedef struct
{
    int rollno;
    string name;
    int age;
} student;

int main()
{
    student student[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "enter student detail:" << i + 1 << endl;
        student[i].rollno = i + 1;
        cout << "name:" << endl;
        cin >> student[i].name;
        cout << "age:" << endl;
        cin >> student[i].age;
    }
    for (int i = 0; i < 5; i++)
    {
        if (student[i].rollno == 2)
        {
            cout << "student:" << i + 1 << endl;
            cout << "rollno:" << student[i].rollno << endl;
            cout << "name:" << student[i].name << endl;
            cout << "age:" << student[i].age << endl;
        }
    }

    return 0;
}
