#include <iostream>
#include "AjimaFitness.h"

using namespace std;

int main() {
    int choice;
    do {
        cout << "\n--- Ajima Fitness Member Management ---\n";
        cout << "1. Add or Update Member Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Delete Member Record\n";
        cout << "4. Search Member Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addMemberRecord(); break;
            case 2: displayMemberRecords(); break;
            case 3: deleteMemberRecord(); break;
            case 4: searchMemberRecord(); break;
            case 5: cout << "Exiting program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 5);

    return 0;
}
