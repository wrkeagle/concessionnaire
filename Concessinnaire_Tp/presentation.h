#ifndef PRESENTATION_H
#define PRESENTATION_H

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;


void startup()
{
    cout << left << "______________________" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|   " << setw(3) << "Bienvenue dans" << "   |" << endl;
    cout << "| " << setw(3) << "le concessionnaire" <<" |" << endl;
    cout << "|" << "        v1.0        " << setw(10) << "|" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" <<  "____________________|\n" << endl;

}

void end()
{
    cout << left << "______________________" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|   " << setw(3) << "Merci d'etre " << "    |" << endl;
    cout << "|   " << setw(3) << "  passe chez  " <<"   |" << endl;
    cout << "| " << setw(3) << "le concessionnaire " << "|" << endl;
    cout << "|" << "     by loick       " << setw(10) << "|" << endl;
    cout << "|" << "                    |" << endl;
    cout << "|" <<  "____________________|\n" << endl;
}

#endif // PRESENTATION_H
