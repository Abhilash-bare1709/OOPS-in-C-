#include <iostream>
using std::string;

class Abstrcls{

    virtual void promotion()=0;

};


class Employee:Abstrcls{
protected:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string com, int age){
        Name = name;
        Company = com;
        Age = age;
    }

    void promotion(){
        if (Age>35)

        std::cout<<Name<<"Promoted";

        else

        std::cout<<Name<<" Not Promoted";


    }
};

class Developer:public Employee{


   

public:
    string Place;
    Developer(string name_dev, string comp_dev, int age_dev, string place):Employee(name_dev, comp_dev, age_dev){

        Place = place;
        std::cout<<"empname "<<Name <<" empcompany "<<Company<< " empage "<<Age << " place "<<place;

}

};




int main(){
    // Employee emp1=Employee("Abhi","dgf",22);
    // emp1.display();
    Developer dev = Developer("abhi", "gritstone", 25, "Kasargode");

    dev.promotion();
}