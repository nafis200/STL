// Who Is It   intruction to dsa mid 1
#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[100];
    char section;
    int total_marks;

    Student(int id, char name[100], char section, int total_marks) {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }

    void print() {
        cout << id << " ";
        cout << name << " ";
        cout << section << " " << total_marks << "\n";
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int id, total_marks;
        char name[100];
        char section;

        cin >> id >> name >> section >> total_marks;

        Student s1(id, name, section, total_marks);
        cin >> id >> name >> section >> total_marks;

        Student s2(id, name, section, total_marks);
        cin >> id >> name >> section >> total_marks;
        Student s3(id, name, section, total_marks);

         Student top = s1;
         
         if (s2.total_marks > top.total_marks || 
           (s2.total_marks == top.total_marks && s2.id < top.id)) {
            top = s2;
        }

        if (s3.total_marks > top.total_marks || 
           (s3.total_marks == top.total_marks && s3.id < top.id)) {
            top = s3;
        }

        top.print();

      
    }
}
