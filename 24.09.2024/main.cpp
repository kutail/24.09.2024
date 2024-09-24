#include <iostream>

int main()
{
    int c = 0;
    int sum = 0;
    while (c!=1)
    {
        std::cout << "Vvedite chislo\n";
        std::cin >> c;
        sum+=c;
    }
    std::cout << "Summa=" << sum;
    return 0;
}
