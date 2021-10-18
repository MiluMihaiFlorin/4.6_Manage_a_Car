
#include <iostream>
using namespace std;
//1. set Car license number by constructor, setter or by direct read
//2. start Car
//3. add Person (name, address etc) to Car. Person to be added should have a name given by
//4. set Car�s driver (Person)

//constructor, setter or by direct read
class Person 
{
private:
    string name;
    string address;
public:
    Person(string name, string address) 
    {
        this->name = name;
        this->address = address;
    }
    Person()
    {
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
};
class Car
{
private:
    string licence;
    Person *person;
public:
    Car(string licence)
    {
        this->licence = licence;
    }
    void setLicence(string licence)
    {
        this->licence = licence;
    }
    string getLicence()
    {
        return this->licence;
    }
    void directReadLicence()
    {
        cout << "Give a licence number:";
        cin >> this->licence;
    }
    void startCar()
    {
        cout << "Car started with licence " << this->licence << endl;
    }
    void setPerson(Person *person)
    {
        this->person = person;
    }
    Person* getPerson()
    {
        return this->person;
    }

};
int main()
{
    Car* car1;
    car1 = new Car("DJ23RAP");
    cout << car1->getLicence()<<endl;
    car1->setLicence("DJ53DCS");
    cout << car1->getLicence()<<endl;
    //car1->directReadLicence();
    cout << car1->getLicence() << endl;

    //start car
    car1->startCar();

    //3 add person
    Person* person1= new Person("Florin" ,"Address1");
    car1->setPerson(person1);

    cout << car1->getPerson()->getName();
    //joined with emil
    
}

