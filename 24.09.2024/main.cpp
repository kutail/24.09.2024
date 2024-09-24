#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    for (int i = 0; i < 2; i+=0)
    {
        double rub = 0;
        int vibor = 0;
        double rub1 = 0;
        double euro = 0.0096;
        double dollar = 0.011;
        double farit = 0.05;
        double yuan = 0.76;
        double yen = 1.55;
        double kommisiya = 0;
        cout << "Введите количество рублей\n";
        cin >> rub;
        kommisiya = rub/100*5;
        rub1 = rub - kommisiya;
        cout << "Банк возьмет комиссию в размере:" << kommisiya << endl;
        cout << "В какую валюту хотите перевести:\n1)Евро\n2)Доллар\n3)Фарит\n4)Юань\n5)Йен\n";
        cin >> vibor;
        if (vibor == 1)
        {
            cout << "Итог перевода:" << rub1*euro << endl;
        }
        else if (vibor == 2)
        {
            cout << "Итог перевода:" << rub1*dollar << endl;
        }
        else if (vibor == 3)
        {
            cout << "Итог перевода:" << rub1*farit << endl;
        }
        else if (vibor == 4)
        {
            cout << "Итог перевода:" << rub1*yuan << endl;
        }
        else if (vibor == 5)
        {
            cout << "Итог перевода:" << rub1*yen << endl;
        }
        else
        {
            cout << "НЕвеврный выбор валюты";
        }
        cout << "Хотите повторить перевод?\n1)Да\n2)Нет" << endl;
        cin >> i;
    }
    
    
    
    return 0;
}
//int main()
//{
//    int c = 0;
//    int sum = 0;
//    while (c!=1)
//    {
//        std::cout << "Vvedite chislo\n";
//        std::cin >> c;
//        sum+=c;
//    }
//    std::cout << "Summa=" << sum;
//    return 0;
//}
