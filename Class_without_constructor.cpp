
// Who Is It   intruction to dsa mid 1


#include <bits/stdc++.h>
using namespace std;



class Student {
public:
    int id;
    char name[100];
    char section;
    int total_marks;

    // No constructor; using setter function instead
    void set(int id, const char name[], char section, int total_marks) {
        this->id = id;
        strcpy(this->name, name);
        this->section = section;
        this->total_marks = total_marks;
    }

    void print() {
        cout << id << " " << name << " " << section << " " << total_marks << "\n";
    }
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int id, total_marks;
        char name[100];
        char section;

        Student s1, s2, s3;

        cin >> id >> name >> section >> total_marks;
        s1.set(id, name, section, total_marks);

        cin >> id >> name >> section >> total_marks;
        s2.set(id, name, section, total_marks);

        cin >> id >> name >> section >> total_marks;
        s3.set(id, name, section, total_marks);

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

    return 0;
}
