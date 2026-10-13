/*3л груш =5%
покупка> 200 = 13%
4ый л лук=luk сок в подарок
яб=iab ап=ape абр=abr груш=gru
том=tom лук = luk огур=ogr
чесн=che петрушечный=pet
едставим , что :
фруктовые соки стоят по 10
овощные соки по 5
чаи по 2
превышение за 50
*/
#include <iostream>
#include <Windows.h>

//double nap1, nap2, cost = 0,iab=10,ape=10,abr=10,gru=10,tom=5,luk=5,ogr=5,che=2,pet=2;
/*void skidka()
{
  

}
void podschot()
{

}*/



int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    double  cost = 0, iab = 10, ape = 10, abr = 10, gru = 10, tom = 5, luk = 5, ogr = 5, che = 2, pet = 2, obem, skidka1 = 1, skidka2 =1,  a,e;
    double totalskidka, kopeika1 = 0, kopeika2 = 0, kopeika3 = 0, cena = 0;
    int kof, nap1, nap2, itog, d ;
    char vibor;
    std::cout << "Добро пожаловать в ""Соки Даниила\n""";
    while (true)
    {
        std::cout << "Введите , что вам нужно: фруктовый сок(1), оовощной сок(2) или чай(3)";
        std::cin >> nap1;

        if (nap1 == 1)
        {

            std::cout << "Введите , что вам нужно:\nяблочный (1), апельсиновый(2), абрикосовый(3), грушевый(4) ";
            std::cin >> nap2;
            if (nap2 == 1)
            {
                std::cout << "ВВедите объем питья , который вам нужен";
                std::cin >> obem;
                e = iab * obem;
                cena += e;
            }
            else if (nap2 == 2)
            {
                std::cout << "ВВедите объем питья , который вам нужен";
                std::cin >> obem;
                e = ape * obem;
                cena += e;
            }
            else if (nap2 == 3)
            {
                std::cout << "ВВедите объем питья , который вам нужен";
                std::cin >> obem;
                e = abr * obem;
                cena += e;
            }

            else if (nap2 == 4)
            {
                std::cout << "ВВедите объем питья , который вам нужен";
                std::cin >> obem;
                e = gru * obem;
                cena += e;
            }
            else
            {
                std::cout << "У нас такого нет ";
                // времяуказатель
                continue;
            }
        }
        else if(nap1 == 2)
        {

            std::cout << "Введите , что вам нужно:\nтоматный(1), луковый(2),огуречный(3)";
            std::cin >> nap2;
            if (nap2 == 1)
            {
                std::cout << "ВВедите объем питья , который вам нужен";
                std::cin >> obem;
                e = tom * obem;
                cena += e;
            }
            else if (nap2 == 2)
            {
                std::cout << "ВВедите объем питья , который вам нужен";
                std::cin >> obem;
                if(obem>=4)
                {
                    d = obem;
                    d /= 4;
                    obem -= d;
                    kopeika3 = d * luk;
                    e = luk * obem;
                    cena += e;
                    std::cout << d;
                   
                }
                else
                {
                    e = luk * obem;
                    cena += e;
                }
              
                

            }
            else if (nap2 == 3)
            {
                std::cout << "ВВедите объем питья , который вам нужен (в литрах)";
                std::cin >> obem;
                e = ogr * obem;
                cena += e;
            }
            else
            {
                std::cout << "У нас такого нет ";
                std::cout << " Хотите продолжить (да-1/нет-любое число)";
                std::cin >> vibor;

               if (vibor == 1 )
                {
                    continue;
                }
               else
               {
                   break;
               }

            }

        }
        else if (nap1 == 3)
        {
            std::cout << "Введите , что вам нужно:\nчесночный(1), петрушечный(2)";
            std::cin >> nap2;
            if (nap2 == 1)
            {
                std::cout << "ВВедите объем питья , который вам нужен(в литрах)";
                std::cin >> obem;
                e = che * obem;
                cena += e;
            }
            else if (nap2 == 2)
            {
                std::cout << "ВВедите объем питья , который вам нужен(в литрах)";
                std::cin >> obem;
                
                if (obem >= 3)
                {
                    a = pet;
                    skidka1 -= 0.05;
                    a* skidka1;
                    cena = a * obem;
                    cost = pet * obem;
                    kopeika1 = cost -= cena;
                }
                else
                {
                    e = pet * obem;
                    cena += e;
                }
              
            }

        }
        else
        {
            std::cout << "У нас такого нет ";
            // времяуказатель
            continue;
        }
        std::cout << "Хотите чего-нибудь еще ? (1 - да/другое число - нет)";
        std::cin >> itog;
        if(itog == 1)
        {
            continue;
        }
        else 
        {
            std::cout << "\n\n";
            break;
        }
    }
    cost = cena;
    /*
      pet* skidka1;
      cost += pet * obem;
      a * obem;
      kopeika1 = a -= pet * obem;*/
    if(cost >= 50)
    {
        kopeika2 = 0.13 * cost;
    }
    cost -= kopeika2;
    totalskidka = kopeika1 + kopeika2 + kopeika3;

   std::string sok1[4]{"яблочный","апельсиновый","абрикосовый","грушевый"};
    std::string sok2[3]{ "томатный", "луковый", "огуречный" };
    std::string cha[2]{"чесночный", "петрушечный" };

    std::cout << "C вас " << cost << "единиц валюты\n";
    std::cout << "Скидка составила" << totalskidka << "единиц валюты\n\n" ;

    

    return 0;
}

