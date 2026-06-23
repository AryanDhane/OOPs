#include <iostream>
#include <string>
using namespace std;

class teacher {
    public :
        string name;
        string subject;
        double salary;

    teacher( string name, string subject, double salary){
       this-> name = name;
        this-> subject = subject;
        this-> salary = salary;
    return;
}

void getinfo(){
    cout << name << endl;
    cout << subject << endl;
    cout << salary << endl;

}
};

int main() {
    teacher t1("aryan","english",1000);
    t1.getinfo();
    return 0;   
}