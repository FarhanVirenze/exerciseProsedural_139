// exerciseProsedural_NIM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double rerata(double a,double b){
    return (a + b) / 2;

}

string status(double rata){
    if (rata >= 70)
        return "diterima";
    else
        return "tidak diterima";
}

string status2(double rata,double nil){
    if (rata >= 70 || nil > 80)
        return "diterima";
    else
        return "tidak diterima";
}
int main(){
    double nilM, nilB;
    cout << "masukkan nilai matematika = ";
    cin >> nilM;
    cout << "masukkan nilai Bahasa Inggris = ";
    cin >> nilB;
    cout << "status kelulusan = " << status(rerata(nilM, nilB));
    cout << "\nstatus kelulusan ke 2 = " << status2(rerata(nilM, nilB), nilM);
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
