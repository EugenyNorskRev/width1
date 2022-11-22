#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long pop1 = 7364823, pop2 = 84759, pop3 = 5806;
    cout << setw(9) << "Город " << setw(12)
    << "Население " << endl;
    cout << setfill('.') << setw(9) << "Москва" << setw(12) << pop2 << endl;
    cout << setw(9) << "Киров" << setw(16) << pop1 << endl;
    cout << setw(9) << "Рыбинск" << setw(14) << pop3 << endl;
    return 0;

}