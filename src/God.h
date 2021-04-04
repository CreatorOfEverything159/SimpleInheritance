#ifndef SIMPLEINHERITANCE_GOD_H
#define SIMPLEINHERITANCE_GOD_H

class God {
protected:
    string placeOfBirth;

public:
    explicit God(string godPlaceOfBirth = "") {
        placeOfBirth = godPlaceOfBirth;
    }

    ~God() {}

    string getPlaceOfBirth() const { return placeOfBirth; }
    void setPlaceOfBirth(string newPlaceOfBirth) { placeOfBirth = newPlaceOfBirth; }

    virtual void say() { cout << "I'm God!" << endl; }

    friend std::ostream &operator<<(std::ostream &out, const God &h) {
        cout << endl;
        cout << "Place of birth: " << h.placeOfBirth << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_GOD_H
