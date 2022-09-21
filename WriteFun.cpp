#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream myFile;
    myFile.open("test.txt", ios::out); //kirjoita
    if (myFile.is_open()){
        myFile << "Moi\n";
        myFile << "Tämä on toka rivi\n";
        myFile.close();
    }
    myFile.open("test.txt", ios::app); //Lisää (Append)
    if (myFile.is_open()){
        myFile << "Moi moi\n";
        myFile.close();
    }
    system("pause>0");

}