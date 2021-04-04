#ifndef SIMPLEINHERITANCE_HUMAN_H
#define SIMPLEINHERITANCE_HUMAN_H

#include <utility>
#include "string"
using namespace std;

class Human {
protected:
    int age;
    string name;

public:
    explicit Human(string humanName = "", int humanAge = 0) {
        name = humanName;
        age = humanAge;
    }

    ~Human() {}

    int getAge() const { return age; }
    void setAge(int newAge) { age = newAge; }
    string getName() const { return name; }
    void setName(string newName) { name = newName; }

    virtual void say() { cout << "I'm human!" << endl; }

    friend std::ostream &operator<<(std::ostream &out, const Human &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_HUMAN_H
