#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[100];
    char section;
    int total_marks;

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

// Custom comparison function
bool cmp(const Student &a, const Student &b) {
    if (a.total_marks != b.total_marks) {
        return a.total_marks > b.total_marks;  // Higher marks first
    }
    return a.id < b.id;  // If marks equal, smaller ID first
}

int main() {
    Student students[4];

    // Sample Input
    students[0].set(103, "Liton", 'A', 90);
    students[1].set(101, "Sakib", 'B', 95);
    students[2].set(102, "Tamim", 'A', 95);
    students[3].set(104, "Soumya", 'C', 90);

    sort(students, students + 4, cmp); // sort using custom comparator

    for (int i = 0; i < 4; i++) {
        students[i].print();
    }

    return 0;
}
