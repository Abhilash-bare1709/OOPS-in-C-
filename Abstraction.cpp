#include <iostream>
using std::string;


class Abctcls{
    int a;

    virtual void promotion()=0;
    

};

class Employee:Abctcls{
    string Name;
    int Age;


public:
    Employee(string name,int age){
        Name=name;
        Age=age;
    }
    void display(){
        std::cout<<"Name "<< Name << " Age "<< Age<<std::endl;
    } 

    void promotion(){
        if (Age>30)
        std::cout<<Name<<" Got Promoted "<<std::endl;
        else
         std::cout<<Name<<" Not Promoted"<<std::endl;
    }

};

int main(){
    Employee emp1=Employee("Abhilash",22);
    Employee emp2=Employee("Shamil",35);
    // emp1.display();
    // emp2.display();
    emp1.promotion();
    emp2.promotion();

}