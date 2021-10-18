
#include <iostream>
using namespace std;
//1. set Car license number by constructor, setter or by direct read
//2. start Car
class Car
{
private:
    string licence;
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
    
    
}

