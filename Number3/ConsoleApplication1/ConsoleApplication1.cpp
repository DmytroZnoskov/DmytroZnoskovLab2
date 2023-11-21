#include <iostream>
#include <Windows.h>
using namespace std;



int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Число: ";
    int w{};
    cin >> w;
    cout << "День тиждня: ";
  
    
        
    switch (w)
    {
    case 1:
        cout << "Понеділок" << std::endl;
        break;
    case 2:
        cout << "Вторник" << std::endl;
        break;
    case 3:
        cout << "Середа" << std::endl;
        break;
    case 4:
        cout << "Четверг" << std::endl;
        break;
    case 5:
        cout << "П'ятниця" << std::endl;
        break;
    case 6:
        cout << "Субота" << std::endl;
        break;
    case 7:
        cout << "Неділя" << std::endl;
        break;
    default:
        cout << "Error";
        return 0;

    }
   
      
       
    return 0;
}