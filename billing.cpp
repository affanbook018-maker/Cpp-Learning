#include <iostream>
using namespace std;
double calculateWeightCharge(double weightKg);
double calculateZoneCharge(int zone);
void applyMemberDiscount(double& total, char memberChoice);
void printBill(double weightCharge, double zoneCharge,double finalTotal, char memberChoice);
int main() {
    double weightKg, total, weightCharge, zoneCharge;
    int zone;
    char memberChoice;
    do {
        cout << "Enter parcel weight: ";
        cin >> weightKg;
        if (weightKg <= 0)
            cout << "Please enter a positive value"<<endl;
    } while (weightKg <= 0);
    do {
        cout << "Enter delivery zone (1-3): ";
        cin >> zone;
        if (zone < 1 || zone > 3)
            cout << "Invalid zone. Enter again"<<endl;
    } while (zone < 1 || zone > 3);
    cout << "Enter Member Choice (Y/N): ";
    cin >> memberChoice;
    weightCharge = calculateWeightCharge(weightKg);
    zoneCharge = calculateZoneCharge(zone);
    total = weightCharge + zoneCharge;
    applyMemberDiscount(total, memberChoice);
    printBill(weightCharge, zoneCharge, total, memberChoice);
    return 0;
}
double calculateWeightCharge(double weightKg) {
    if (weightKg <= 2) {
        return 200;
    }
    else if (weightKg <= 5) {
        return 350;
    }
    else {
        return 350 + (weightKg - 5) * 80;
    }
}
double calculateZoneCharge(int zone) {
    switch (zone) {
        case 1:
            return 100;
        case 2:
            return 200;
        case 3:
            return 300;
        default:
            return 0;
    }
}
void applyMemberDiscount(double& total, char memberChoice) {
    if (memberChoice == 'Y' || memberChoice == 'y') {
        total = total * 0.90;
    }
}
void printBill(double weightCharge, double zoneCharge,  double finalTotal, char memberChoice) {
    cout << "Weight charge: Rs. " << weightCharge <<endl;
    cout << "Zone charge:   Rs. " << zoneCharge <<endl;
    if (memberChoice == 'Y' || memberChoice == 'y')
        cout << "Member discount: 10%"<<endl;
    else
        cout << "Member discount: None"<<endl;
    cout << "Final total:   Rs. " << finalTotal <<endl;
}
