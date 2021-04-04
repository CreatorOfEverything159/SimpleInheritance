#include <iostream>
#include "src/Human.h"
#include "src/Student.h"
#include "src/Bachelor.h"
#include "src/Worker.h"
#include "src/Programmer.h"
#include "src/Builder.h"
#include "src/God.h"
#include "src/Demigod.h"

using namespace std;

int main() {
    Human human("Human", 20);
    cout << human;
    human.say();
    human.setAge(19);
    human.setName("Human new");
    cout << human.getAge() << endl;
    cout << human.getName() << endl;
    cout << human;

    Student student("Student", 19, "Physic");
    cout << student;
    student.say();
    student.setAge(20);
    student.setName("Student new");
    student.setFaculty("IT");
    cout << student.getAge() << endl;
    cout << student.getName() << endl;
    cout << student.getFaculty() << endl;
    cout << student;

    Bachelor bachelor("Bachelor", 23, "Physic", "Physic8119-17.202.19");
    cout << bachelor;
    bachelor.say();
    bachelor.setAge(20);
    bachelor.setName("Bachelor new");
    bachelor.setFaculty("IT");
    bachelor.setGroup("IT8119-023.119.20");
    cout << bachelor.getAge() << endl;
    cout << bachelor.getName() << endl;
    cout << bachelor.getFaculty() << endl;
    cout << bachelor.getGroup() << endl;
    cout << bachelor;

    Worker worker("Worker", 26, "MyCompany");
    cout << worker;
    worker.say();
    worker.setAge(27);
    worker.setName("Worker new");
    worker.setCompany("MyNewCompany");
    cout << worker.getAge() << endl;
    cout << worker.getName() << endl;
    cout << worker.getCompany() << endl;
    cout << worker;

    Programmer programmer("Programmer", 27, "MyCompany", "Middle");
    cout << programmer;
    programmer.say();
    programmer.setAge(30);
    programmer.setName("Programmer new");
    programmer.setCompany("MyNewCompany");
    programmer.setPosition("Senior");
    cout << programmer.getAge() << endl;
    cout << programmer.getName() << endl;
    cout << programmer.getCompany() << endl;
    cout << programmer.getPosition() << endl;
    cout << programmer;

    Builder builder("Programmer", 27, "MyCompany", false);
    cout << builder;
    builder.say();
    builder.setAge(30);
    builder.setName("Builder new");
    builder.setCompany("MyNewCompany");
    builder.setForeman(true);
    cout << builder.getAge() << endl;
    cout << builder.getName() << endl;
    cout << builder.getCompany() << endl;
    cout << builder.getForeman() << endl;
    cout << builder;

    Demigod demigod("Demigod", 20, "Athens");
    cout << demigod;
    demigod.say();
    demigod.setAge(112);
    demigod.setName("Hercules");
    demigod.setPlaceOfBirth("Olympus");
    demigod.setFeats(5132);
    cout << demigod.getAge() << endl;
    cout << demigod.getName() << endl;
    cout << demigod.getPlaceOfBirth() << endl;
    cout << demigod.getFeats() << endl;
    cout << demigod;

    return 0;
}
