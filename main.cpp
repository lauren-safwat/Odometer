// Program: Odometer
// Purpose: Calculates the vehicle's consumption of fuel
// Author:  Lauren Safwat
// ID:      20170203
// Date:    28 October 2018

#include <iostream>

using namespace std;

class Odometer{
private:
    float milesDriven, fuelEfficiency;

public:
    Odometer(){
        milesDriven = 0;
        fuelEfficiency = 0;
    }

    void reset(){
        milesDriven = 0;
    }

    void setFuelEfficiency(float fuel){
        fuelEfficiency = fuel;
    }

    void setMilesDriven(float miles){
        milesDriven += miles;
    }

    float calcConsumption(){
        float consumption;
        consumption = milesDriven / fuelEfficiency;
        return consumption;
    }
};

int main()
{
    Odometer Trip1, Trip2;
    Trip1.setFuelEfficiency(20);
    Trip1.setMilesDriven(300);
    cout << "The vehicle has consumed " << Trip1.calcConsumption() << " gallons of gasoline per 300 miles." << endl;
    Trip1.setMilesDriven(200);
    cout << "After another 200 miles the vehicle has consumed " << Trip1.calcConsumption() << " gallons of gasoline." << endl << endl;
    Trip1.reset();
    Trip1.setFuelEfficiency(10);
    Trip1.setMilesDriven(100);
    cout << "The vehicle has consumed " << Trip1.calcConsumption() << " gallons of gasoline per 100 miles." << endl << endl;
    Trip2.setFuelEfficiency(50);
    Trip2.setMilesDriven(1000);
    cout << "The vehicle has consumed " << Trip2.calcConsumption() << " gallons of gasoline per 1000 miles." << endl;
    Trip2.setMilesDriven(500);
    cout << "After another 500 miles the vehicle has consumed " << Trip2.calcConsumption() << " gallons of gasoline." << endl;
    return 0;
}
