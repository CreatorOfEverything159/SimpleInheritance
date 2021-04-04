#ifndef SIMPLEINHERITANCE_STUDENT_H
#define SIMPLEINHERITANCE_STUDENT_H

class Student : public Human {
protected:
    string faculty;

public:
    Student(string studentName, int studentAge, string studentFaculty = "")
            : Human(studentName, studentAge) {
        this->faculty = studentFaculty;
    }

    ~Student() {}

    string getFaculty() const { return faculty; }
    void setFaculty(string newFaculty) { faculty = newFaculty; }

    void say() override {
        cout << "I'm student!" << endl;
    }

    friend std::ostream &operator<<(std::ostream &out, const Student &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        cout << "Faculty: " << h.faculty << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_STUDENT_H
