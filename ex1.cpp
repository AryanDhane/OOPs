#include <iostream>
#include <string>
using namespace std;

class teacher {
public:
    string name;
    string subject;

    teacher(string name, string subject, double salary) {
        this->name = name;
        this->subject = subject;
        this->salary = salary;
    }

    void getinfo() {
        cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }

    double getSalary() {
        return salary;
    }

    void setSalary(double s) {
        salary = s;
    }

private:
    double salary;
};

int main() {
    teacher t1("aryan", "english", 1000);
    teacher t2("kedar", "maths", 101010);
    t1.getinfo();
    t2.getinfo();

    cout << "Salary = " << t1.getSalary() << endl;

    return 0;
}