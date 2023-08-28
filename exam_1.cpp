#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inches;

public:

    void r(void)
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    
    void disp(void)
    {
        cout << "Feet:" << feet << "\t"
             << "Inches:" << inches << endl;
    }

   
    Distance operator+(Distance& dist1)
    {
        Distance D; 
        D.inches = inches + dist1.inches;
        D.feet = feet + dist1.feet + (D.inches / 12);
        D.inches = D.inches % 12;
      
    }
};

int main()
{
    Distance D1, D2, D3;

    cout << "Enter first  distance:" << endl;
    D1.r();
    cout << endl;

    cout << "Enter second distance:" << endl;
    D2.r();
    cout << endl;

    
    D3 = D1 + D2;

    cout << "Total Distance:" << endl;
    D3.disp();

    cout << endl;

   
}

