#include <iostream>

using namespace std;

class Person{

private :
    string name ;
public:

    Person ()
    {
        name="Null" ;
    }

    Person (string the_name)
    {
        name = the_name;
    }
    void SetName ()
    {
        cout<<"Enter the owner's Name: " ;
        cin>>name ;

        }

    string get_name () {return name ;}


    friend istream& operator >> (istream &in_stream ,Person& Person_object);
    friend ostream& operator << (ostream &out_stream ,Person& Person_object);

};

istream& operator >> (istream &in_stream ,Person& Person_object)
{

    in_stream >>Person_object.name ;
    return in_stream ;
}

ostream& operator << (ostream &out_stream ,Person& Person_object)
{
    out_stream <<Person_object.name;
    return out_stream ;

}

class Vehicle{
protected:


    string manufacturerName ;
    int numberofCylinders ;
    Person Owner() ;

public :

    Vehicle()
    {
    manufacturerName = "Null" ;
    numberofCylinders = 0 ;

    }

    Vehicle (string name , string manufacturerName ,int numberofCylinders )
    {}

    void setManufactureName ()
    {

    cout<<"Enter the brand: " ;
    cin>>manufacturerName ;

    }
    void setNumberofCylinderse ()
    {
        cout<<"Enter the Number of cylinderse: " ;
        cin>> numberofCylinders;


    }

    string getManufactureName ()
    {return manufacturerName ;}

    int getNumberofCylinderse ()
    {return numberofCylinders;}

};

class Truck:public Vehicle{


    int  towingCapacity ;
    double loadCapacity ;

public:
    Truck(){
        towingCapacity = 0 ;
        loadCapacity = 0.0 ;
    }

    Truck  (int towingCapacity ,double loadCapacity ){
            (*this) . towingCapacity =towingCapacity ;
            (*this) . loadCapacity =loadCapacity ;
    }

    void setTowingCapacity ()
    {
        cout<<"Enter twoing capacity: " ;
        cin>>towingCapacity ;

    }

    int getTowingCapacity()
    {return towingCapacity;}

     void setLoadCapacity ()
    {
        cout<<"Enter load capacity: " ;
        cin>>loadCapacity ;


    }

    float getLoadCapacity()
    {return loadCapacity;}

};



int main()
{

    Person clientOne ;
    Truck truck_ClientOne ;
    cout<<"Enter the Client's Name: ";
    cin>>clientOne ;
    cout<<"Client name is: "<<clientOne<<endl;
    clientOne.SetName();
    cout<<"client name is/becomes: "<<clientOne.get_name()<<endl;

    truck_ClientOne.setManufactureName();
    cout<<"Manufacturer Name is : "<<truck_ClientOne.getManufactureName()<<endl;

    truck_ClientOne.setNumberofCylinderse();
    cout<<"Number of Clyders is: "<<truck_ClientOne.getNumberofCylinderse()<<endl;

    truck_ClientOne.setLoadCapacity();
    cout<<"load capacity is: "<<truck_ClientOne.getLoadCapacity()<<endl;

    truck_ClientOne.setTowingCapacity();
    cout<<"twoing capacity is: "<<truck_ClientOne.getTowingCapacity()<<endl;





}
