#include <iostream>
#include <string>
using namespace std;

class teacher {
    public :
        string name;
        string subject;
        double salary;
};

int main() {
    teacher t1;
    teacher t2;         

    t1.name = "aryan";

    cout << t1.name << endl;



    return 0;   
}