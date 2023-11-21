#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "Чи настане літо наступного місяця" << endl;
    cout << "Введіть поточний місяць: " << endl;
    int x{};
    cin >> x;
    if (x<5)
    {
        cout << "Ні" << endl;
    }
    else
    {
        if (x > 7)
        {
            cout << "Ні" << endl;
        }
        else
        {
            if ((x >= 5) && (x <= 7))
            {
                cout << "Так" << endl;
            }
            else
            {
                cout << "Error";
                return 0;
            }
                
        }
    }

}