#include <iostream>
using namespace std; 

int main (){
    int g;
    char letter;
    

    cout << "Ingrse su nota (0 - 100)" << endl;
    cin >> g; 

    if (g >= 90){
        cout << "su grado en letra es A";
        letter = 'A';
    } else if (g < 90 && g >= 85){
        cout << "su grado en letra es B";
        letter = 'B';
    } else if (g < 85 && g >= 80){
        cout << "su grado en letra es C";
        letter = 'C';
    } else if (g < 80 && g >= 70){
        cout << "su grado en letra es D";
        letter = 'D';
    } else if (g < 70 && g >= 69){
        cout << "su grado en letra es E";
        letter = 'E';
    } else if (g < 69){
        cout << "su grado en letra es F";
        letter = 'F';
    }

    switch (letter){
    case 'A': 
        cout << " Excelente nota" << endl;
        break;
    case 'B':
        cout << " Muy bien" << endl;
        break;
    case 'C':
        cout << " Puede mejorar" << endl;
        break;
    case 'D': 
        cout << " Buen intento" << endl;
        break;
    case 'E':
        cout << " Esfuerzate mas" << endl;
        break;
    case 'F':
        cout << " Has reprobado" << endl;
        break;
    default:  
        cout << " invalid option." << endl;
        break;

    }
    

    return 0;
}