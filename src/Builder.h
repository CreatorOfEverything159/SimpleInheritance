#ifndef SIMPLEINHERITANCE_BUILDER_H
#define SIMPLEINHERITANCE_BUILDER_H

class Builder : public Worker {
private:
    bool foreman;

public:
    Builder(string builderName, int builderAge, string builderCompany, bool builderForeman = false)
    : Worker(builderName, builderAge, builderCompany){
        foreman = builderForeman;
    }

    ~Builder() {};

    bool getForeman() const { return foreman; }
    void setForeman(bool newForeman) { foreman = newForeman; }


    void say() override {
        cout << "I'm builder!" << endl;
    }

    friend std::ostream &operator<<(std::ostream &out, const Builder &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        cout << "Company: " << h.company << endl;
        cout << "Foreman: " << h.foreman << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_BUILDER_H
