#ifndef SIMPLEINHERITANCE_BACHELOR_H
#define SIMPLEINHERITANCE_BACHELOR_H

class Bachelor : public Student {
protected:
    string group;

public:
    Bachelor(string bachelorName, int bachelorAge, string bachelorFaculty, string bachelorGroup = "")
    : Student(bachelorName, bachelorAge, bachelorFaculty) {
        this->group = bachelorGroup;
    }

    ~Bachelor() {}

    string getGroup() const { return group; }
    void setGroup(string newGroup) { group = newGroup; }

    void say() override {
        cout << "I'm bachelor" << endl;
    }

    friend std::ostream &operator<<(std::ostream &out, const Bachelor &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        cout << "Faculty: " << h.faculty << endl;
        cout << "Group: " << h.group << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_BACHELOR_H
