#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Patient {
    string name;
    int age;
    string gender;
    string disease;
    string doctor;
    string ward;
};

vector<Patient> patients;

void addPatient() {
    string name, gender, disease, doctor, ward;
    int age;
    cout << "Enter patient name: ";
    cin >> name;
    cout << "Enter patient age: ";
    cin >> age;
    cout << "Enter patient gender: ";
    cin >> gender;
    cout << "Enter patient disease: ";
    cin >> disease;
    cout << "Enter doctor name: ";
    cin >> doctor;
    cout << "Enter ward number: ";
    cin >> ward;
    Patient p;
    p.name = name;
    p.age = age;
    p.gender = gender;
    p.disease = disease;
    p.doctor = doctor;
    p.ward = ward;
    patients.push_back(p);
    cout << "Patient added successfully" << endl;
}

void searchPatient() {
    string name;
    cout << "Enter patient name to search: ";
    cin >> name;
    bool found = false;
    for(int i = 0; i < patients.size(); i++) {
        if(patients[i].name == name) {
            found = true;
            cout << "Name: " << patients[i].name << endl;
            cout << "Age: " << patients[i].age << endl;
            cout << "Gender: " << patients[i].gender << endl;
            cout << "Disease: " << patients[i].disease << endl;
            cout << "Doctor: " << patients[i].doctor << endl;
            cout << "Ward: " << patients[i].ward << endl;
        }
    }
    if(!found) {
        cout << "Patient not found" << endl;
    }
}

int main() {
    int option;
    while(true) {
        cout << "\n";
        cout << "***** Welcome to ABC Hospital Management System *****" << endl;
        cout << "\n";
        cout << "1) Add Patient" << endl;
        cout << "2) Search Patient" << endl;
        cout << "3) Quit" << endl;
        cout << "\n";
        cout << "Enter your option: ";
        cin >> option;
        switch(option) {
            case 1:
                addPatient();
                break;
            case 2:
                searchPatient();
                break;
            case 3:
                cout << "Thank you for using ABC Hospital Management System" << endl;
                return 0;
            default:
                cout << "Invalid option selected" << endl;
        }
    }
    return 0;
}
