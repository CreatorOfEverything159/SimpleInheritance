#ifndef SIMPLEINHERITANCE_WORKER_H
#define SIMPLEINHERITANCE_WORKER_H

class Worker : public Human {
protected:
    string company;

public:
    Worker(string workerName, int workerAge, string workerCompany = "")
            : Human(workerName, workerAge) {
        this->company = workerCompany;
    }

    ~Worker() {}

    string getCompany() const { return company; }
    void setCompany(string newCompany) { company = newCompany; }

    void say() override {
        cout << "I'm worker!" << endl;
    }

    friend std::ostream &operator<<(std::ostream &out, const Worker &h) {
        cout << endl;
        cout << "Name: " << h.name << endl;
        cout << "Age: " << h.age << endl;
        cout << "Company: " << h.company << endl;
        return out;
    }
};

#endif //SIMPLEINHERITANCE_WORKER_H
