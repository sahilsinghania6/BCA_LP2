#include<iostream>
using namespace std;

class Banking {
private:
    static float interest;
    int principal;
    int time;
public:
    void getdata() {
        cout << "Enter principal amount: ";
        cin >> principal;
        cout << "Enter time (in months): ";
        cin >> time;
    }

    void Calculate_SI() {
        float simpleInterest = (principal * interest * time) / 100.0;
        cout << "Simple Interest: " << simpleInterest << endl;
    }
};

float Banking::interest = 2; 

int main() {
    Banking b1, b2;

    cout << "For b1:" << endl;
    b1.getdata(); 
    b1.Calculate_SI(); 

    cout << "\nFor b2:" << endl;
    b2.getdata(); 
    b2.Calculate_SI();
    return 0;
}
