#include <bits/stdc++.h>
     
using namespace std;

int main() {

    string A_queue;
    string B_queue;
    string C_queue;
    string D_queue;
    string E_queue;

    ifstream filereader;

    filereader.open("database/clinic_A.txt");
    getline(filereader, A_queue);
    filereader.close();

    filereader.open("database/clinic_B.txt");
    getline(filereader, B_queue);
    filereader.close();

    filereader.open("database/clinic_C.txt");
    getline(filereader, C_queue);
    filereader.close();

    filereader.open("database/clinic_D.txt");
    getline(filereader, D_queue);
    filereader.close();

    filereader.open("database/clinic_E.txt");
    getline(filereader, E_queue);
    filereader.close();



    cout << "Clinic A : " << A_queue << endl;
    cout << "Clinic B : " << B_queue << endl;
    cout << "Clinic C : " << C_queue << endl;
    cout << "Clinic D : " << D_queue << endl;
    cout << "Clinic E : " << E_queue << endl;


}