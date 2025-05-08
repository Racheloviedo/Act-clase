#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //Declaracion de variables
    int option;
    double salary, result;

    //Se le pide al usuario que ingrese su salario mensual bruto
    cout << "insert your gross monthly salary: " << endl;
    cin >> salary;

     //Si el salario es negativo o igual a 0
     if (salary <= 0){
        cout << "Error: A negative or zero value is not suitable for the program " << endl;
        cout << "You can try again" << endl;
        return 1;
    }

    //Options menu of the diferent calculations that can be made
    cout << "........Menu........ " << endl;
    cout << "1. ISSS " << endl;
    cout << "2. AFP " << endl;
    cout << "3. Renta " << endl;
    cout << "4. Total " << endl;
    cout << "5. Salir " << endl;
    cout << "....Choose an option...." << endl;
    cin >> option;
   
    //dependiendo de la opcion a elegir se desplega lo siguiente 
    switch (option)
    {
    case 1:
    ISSS = 0
    //Calcular ISSS   
    cout << "Your ISSS to the salary. " << endl; 
        if (){

        }
        break;
    case 2:
    AFP = 0
    //Calcular AFP
        cout << "Your AFP to the salary. " << endl; 
        if (){

        }
        break;
    case 3:
    Renta = 0
    //Calcular la renta
        cout << "Your rent(renta). " << endl;
        if (salary == 0.01 && <= 472.00 )
        {
            cout << "You dont have to pay rent(renta)."
        } else if (salary == 472.01 && <= 895.24)
        {
            
        } else if (salary == 895.25 &&  <= 2,038.10)
        {

        } else if (salary >= 2,038.11)
        {

        }
        break;
    case 4:
    Total = 0
        cout << "---Total---" << endl;
        cout << "salary: $" << salary << endl;
        cout << "ISSS: $" << ISSS << endl;
        cout << "AFP: $" << AFP << endl;
        cout << "Renta: $" << Renta << endl;
        cout << "result: $" << salary - ISSS - AFP - Renta  << endl;
        cout << "------------" << endl;
        break;
    case 5: 
        cout << "Leaving the program. " << endl; 
        break;
    default:
    cout << "Invalid option, please try again"
    }

    return 0;
}
