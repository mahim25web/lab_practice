#include<bits/stdc++.h>
using namespace std; 

class Vehicle{

    public:
    Vehicle(){

        cout<<"This is a vehicle"<<endl;
    }
};
class FourWheeler : public Vehicle
{
    public:
    FourWheeler(){
        cout<<"4 wheeler Vehicle"<<endl;
    }
};

class Car : public FourWheeler
{
    public:
    Car(){
        cout<<"This 4 Wheeler Vehicle is a car"<<endl;
    }
};

int main(){

    Car obj;
    return 0;
}