#include <iostream>
#include <vector>
#include <string>

class Course;

class Student {
    std::string name;
    Course* course;
public:
    Student(std::string name) : name(name), course(nullptr) {}
    void setCourse(Course* c);
    std::string getName() { return name; }
};

class Course {
    std::string name;
    std::vector<Student*> students;
public:
    Course(std::string name) : name(name) {}
    void addStudent(Student* s) {
        students.push_back(s);
        s->setCourse(this);
    }
    void printStudents() {
        for(Student* s : students) {
            std::cout << s->getName() << std::endl;
        }
    }
};

void Student::setCourse(Course* c) {
    this->course = c;
}

int main() {
    Student s1("John");
    Student s2("Jane");

    Course c1("Math");
    c1.addStudent(&s1);
    c1.addStudent(&s2);

    c1.printStudents(); // Prints: John Jane

    return 0;
}