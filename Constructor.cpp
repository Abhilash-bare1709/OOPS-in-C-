#include <iostream>
using std::string;

class EmpSalary{


   

public:
    string Name;
    int Salary;
    EmpSalary(string name,int salary){
        Name=name;
        Salary=salary;
    }

    int getname(string name){
        Name=name;
    }

    int getsalary(int sal){
        if(sal>150000)
        Salary=sal;
    }

    void display(){
        std::cout<<"name "<<Name  <<" salary "<<Salary;
    }
 };


int main(){
    EmpSalary salary1=EmpSalary("Shamil",200000);

   
    salary1.getname("abhilash");

    salary1.getsalary(50000);
    // salary1.display();
    // salary1.Name("fdsds");
    std::cout<<salary1.Name;
}
