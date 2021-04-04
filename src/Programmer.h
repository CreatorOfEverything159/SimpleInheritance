#ifndef SIMPLEINHERITANCE_PROGRAMMER_H
#define SIMPLEINHERITANCE_PROGRAMMER_H

class Programmer : public Worker {
private:
    string position;

public:
    Programmer(string programmerName, int programmerAge, string programmerCompany, string programmerPosition = "")
    : Worker(programmerName, programmerAge, programmerCompany){
        position = programmerPosition;
    }

    ~Programmer() {};

    string getPosition() const { return position; }
    void setPosition(string newPosition) { position = newPosition; }

    void say() override {
        cout << "I'm programmer!" << endl;
    }

    friend std::ostream &operator<<(std::ostream &out, const Programmer &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        cout << "Company: " << h.company << endl;
        cout << "Position: " << h.position << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_PROGRAMMER_H
