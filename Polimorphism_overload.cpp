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
    virtual void work(){

        std::cout<<Name <<"Working on Specific task on Python"<<std::endl;


    }

    
};

class Developer:Employee{

public:
    string Place;
    Developer(string name_dev, string comp_dev, int age_dev, string place):Employee(name_dev, comp_dev, age_dev){

        Place = place;
        

    }
    void work(){

        std::cout<<Name <<" Working on Specific task on C++"<<std::endl;

    }

};

class Teacher:public Employee{
public:
    string subject;

    void tea(){
        std::cout << Name << " teaching"<< subject<<" lesson";
    }
    Teacher(string name,string com,int age,string sub):Employee(name,com,age){
        subject=sub;
    }

    void work(){

        std::cout<<Name <<" Teaching  on AI" <<std::endl;

    }
     
};




int main(){
    Employee emp1=Employee("Abhi","dgf",22);
    // emp1.display();
    // Developer dev = Developer("abhi", "gritstone", 25, "Kasargode");

    // dev.promotion();

    Teacher teach=Teacher("shamil","grit",40,"AI");
    // teach.tea();
    // teach.promotion();

    emp1.work();
    teach.work();


}
