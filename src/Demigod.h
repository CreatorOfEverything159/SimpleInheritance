#ifndef SIMPLEINHERITANCE_DEMIGOD_H
#define SIMPLEINHERITANCE_DEMIGOD_H

class Demigod : public Human, public God {
private:
    int feats;

public:
    explicit Demigod(string demigodName, int demigodAge, string demigodPlaceOfBirth, int demigodFeats = 0)
    : Human(demigodName, demigodAge), God(demigodPlaceOfBirth) {
        feats = demigodFeats;
    }

    ~Demigod() {};

    int getFeats() const { return feats; }
    void setFeats(int newFeats) { feats = newFeats; }

    void say() override { cout << "I'm Demigod!" << endl; }

    friend std::ostream &operator<<(std::ostream &out, const Demigod &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        cout << "Feats: " << h.feats << endl;
        cout << "Place of birth: " << h.placeOfBirth << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_DEMIGOD_H
