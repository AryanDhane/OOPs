#include <iostream>
#include <string>
using namespace std;

class teacher {
    public :
        string name;
        string subject;
        double salary;

        int getinfo(name,subject,salary){
    return;
}
};

int main() {
    teacher t1;

    t1.getinfo("aryan","english",1000);
  
    cout << t1.name << endl;


    return 0;   
}