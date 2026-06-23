#include <iostream>
#include <string>
using namespace std;

class teacher {
    public :
        string name;
        string subject;
        double salary;

    int getinfo(name,subject,salary){
       this-> name = name;
        this-> subject = subject;
        this-> salary = salary;
    return;
}
};

int main() {
    teacher t1;
    t1.getinfo("aryan","english",1000);
  
    return 0;   
}