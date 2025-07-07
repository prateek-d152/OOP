#include "AjimaFitness.h"
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const string FILE_NAME = "Ajima_Physical_Fitness_Members.txt";

void addMemberRecord() {
    Member m;
    cout << "Enter member name: ";
    cin.ignore();
    getline(cin, m.name);
    cout << "Enter payment month: ";
    getline(cin, m.month);
    cout << "Enter payment amount: ";
    cin >> m.amount;

    ifstream inFile(FILE_NAME);
    ofstream tempFile("temp.txt");

    bool updated = false;
    string line;

    while (getline(inFile, line)) {
        size_t pos1 = line.find("|");
        size_t pos2 = line.rfind("|");

        string name = line.substr(0, pos1);
        string month = line.substr(pos1 + 1, pos2 - pos1 - 1);

        if (name == m.name && month == m.month) {
            tempFile << m.name << "|" << m.month << "|" << m.amount << endl;
            updated = true;
        } else {
            tempFile << line << endl;
        }
    }

    if (!updated) {
        tempFile << m.name << "|" << m.month << "|" << m.amount << endl;
    }

    inFile.close();
    tempFile.close();

    remove(FILE_NAME.c_str());
    rename("temp.txt", FILE_NAME.c_str());

    cout << (updated ? "Record updated successfully.\n" : "New record added successfully.\n");
}

void displayMemberRecords() {
    ifstream inFile(FILE_NAME);
    if (!inFile) {
        cout << "No records found.\n";
        return;
    }

    string line;
    cout << left << setw(25) << "Name" << setw(15) << "Month" << "Amount\n";
    cout << "--------------------------------------------------\n";

    while (getline(inFile, line)) {
        size_t pos1 = line.find("|");
        size_t pos2 = line.rfind("|");

        string name = line.substr(0, pos1);
        string month = line.substr(pos1 + 1, pos2 - pos1 - 1);
        double amount = stod(line.substr(pos2 + 1));

        cout << left << setw(25) << name << setw(15) << month << fixed << setprecision(2) << amount << endl;
    }

    inFile.close();
}

void deleteMemberRecord() {
    string name, month;
    cout << "Enter member name to delete: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter month of payment to delete: ";
    getline(cin, month);

    ifstream inFile(FILE_NAME);
    ofstream tempFile("temp.txt");

    bool found = false;
    string line;

    while (getline(inFile, line)) {
        size_t pos1 = line.find("|");
        size_t pos2 = line.rfind("|");

        string currentName = line.substr(0, pos1);
        string currentMonth = line.substr(pos1 + 1, pos2 - pos1 - 1);

        if (currentName == name && currentMonth == month) {
            found = true;
            continue;
        }

        tempFile << line << endl;
    }

    inFile.close();
    tempFile.close();

    remove(FILE_NAME.c_str());
    rename("temp.txt", FILE_NAME.c_str());

    cout << (found ? "Record deleted successfully.\n" : "No matching record found.\n");
}

void searchMemberRecord() {
    string name;
    cout << "Enter member name to search: ";
    cin.ignore();
    getline(cin, name);

    ifstream inFile(FILE_NAME);
    bool found = false;
    string line;

    cout << left << setw(25) << "Name" << setw(15) << "Month" << "Amount\n";
    cout << "--------------------------------------------------\n";

    while (getline(inFile, line)) {
        size_t pos1 = line.find("|");
        size_t pos2 = line.rfind("|");

        string currentName = line.substr(0, pos1);
        if (currentName == name) {
            string month = line.substr(pos1 + 1, pos2 - pos1 - 1);
            double amount = stod(line.substr(pos2 + 1));
            cout << left << setw(25) << currentName << setw(15) << month << fixed << setprecision(2) << amount << endl;
            found = true;
        }
    }

    inFile.close();
    if (!found) {
        cout << "No records found for this member.\n";
    }
}
