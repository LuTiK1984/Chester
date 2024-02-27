#include <GenCard.h>
#include <iostream>
#include <conio.h>

void IdentCard(int turnM, int turnC)
{
    switch (turnM)
    {
    case 1:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Черви 6");
            break;
        case 7:
            printf("\nВы спрашиваете у противника карту - Черви 7");
            break;
        case 8:
            printf("\nВы спрашиваете у противника карту - Черви 8");
            break;
        case 9:
            printf("\nВы спрашиваете у противника карту - Черви 9");
            break;
        case 10:
            printf("\nВы спрашиваете у противника карту - Черви 10");
            break;
        case 11:
            printf("\nВы спрашиваете у противника карту - Черви Валет");
            break;
        case 12:
            printf("\nВы спрашиваете у противника карту - Черви Дама");
            break;
        case 13:
            printf("\nВы спрашиваете у противника карту - Черви Король");
            break;
        case 14:
            printf("\nВы спрашиваете у противника карту - Черви Туз");
            break;
        }
        break;
    case 2:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Пики 6");
            break;
        case 7:
            printf("\nВы спрашиваете у противника карту - Пики 7");
            break;
        case 8:
            printf("\nВы спрашиваете у противника карту - Пики 8");
            break;
        case 9:
            printf("\nВы спрашиваете у противника карту - Пики 9");
            break;
        case 10:
            printf("\nВы спрашиваете у противника карту - Пики 10");
            break;
        case 11:
            printf("\nВы спрашиваете у противника карту - Пики Валет");
            break;
        case 12:
            printf("\nВы спрашиваете у противника карту - Пики Дама");
            break;
        case 13:
            printf("\nВы спрашиваете у противника карту - Пики Король");
            break;
        case 14:
            printf("\nВы спрашиваете у противника карту - Пики Туз");
            break;
        }
        break;
    case 3:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Крести 6");
            break;
        case 7:
            printf("\nВы спрашиваете у противника карту - Крести 7");
            break;
        case 8:
            printf("\nВы спрашиваете у противника карту - Крести 8");
            break;
        case 9:
            printf("\nВы спрашиваете у противника карту - Крести 9");
            break;
        case 10:
            printf("\nВы спрашиваете у противника карту - Крести 10");
            break;
        case 11:
            printf("\nВы спрашиваете у противника карту - Крести Валет");
            break;
        case 12:
            printf("\nВы спрашиваете у противника карту - Крести Дама");
            break;
        case 13:
            printf("\nВы спрашиваете у противника карту - Крести Король");
            break;
        case 14:
            printf("\nВы спрашиваете у противника карту - Крести Туз");
            break;
        }
        break;
    case 4:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Буби 6");
            break;
        case 7:
            printf("\nВы спрашиваете у противника карту - Буби 7");
            break;
        case 8:
            printf("\nВы спрашиваете у противника карту - Буби 8");
            break;
        case 9:
            printf("\nВы спрашиваете у противника карту - Буби 9");
            break;
        case 10:
            printf("\nВы спрашиваете у противника карту - Буби 10");
            break;
        case 11:
            printf("\nВы спрашиваете у противника карту - Буби Валет");
            break;
        case 12:
            printf("\nВы спрашиваете у противника карту - Буби Дама");
            break;
        case 13:
            printf("\nВы спрашиваете у противника карту - Буби Король");
            break;
        case 14:
            printf("\nВы спрашиваете у противника карту - Буби Туз");
            break;
        }
        break;
    }
}

int CountCards(int HandPlayer[36][2])
{
    int n = 0;
    for (int i = 0; i < 36; i++)
    {
        if ((HandPlayer[i][0] != 0) && (HandPlayer[i][1] != 0))
            n += 1;
        else
            break;
    }
    return n;
}


void EnemyTurn(int HandBot[36][2])
{

}

int MyTurn(int HandPlayer[36][2], int HandBot[36][2])
{
    int choice[2];
    
    int turnM = 0;
    int turnC = 0;
    
    scanf_s("%i %i", &turnM, &turnC);

    IdentCard(turnM, turnC);

    choice[0] = turnM;
    choice[1] = turnC;

    if ((choice[0] == HandBot[0][0] || choice[0] == HandBot[1][0] || choice[0] == HandBot[2][0] || choice[0] == HandBot[3][0]) && (choice[1] == HandBot[0][1] || choice[1] == HandBot[1][1] || choice[1] == HandBot[2][1] || choice[1] == HandBot[3][1]))
        return 1;
    else
        return 0;
}

void Game(int Card[36][2], int HandPlayer[36][2], int HandBot[36][2])
{
    bool IsGame = true;

    RandCard(Card);
    
    printf("\nПроисходит раздача карт вам и противнику (нажмите Enter)");
    
    Continue();
    
    Clear();
    
    DistOfCard(Card, HandPlayer, 4);
    
    DistOfCard(Card, HandBot, 4);
    
    printf("\nВаши карты: \n");
    
    PrintCardHand(HandPlayer);

    int PlayerTurn = rand() % 2;

    while (IsGame)
    {
        switch (PlayerTurn) 
        {
        int result;
        int MyHandCount;
        case 0:
            
            printf("\n\nХодит ваш противник!");

            result = MyTurn(HandBot, HandPlayer);
            if (result == 1)
                PlayerTurn = 0;
            else
                PlayerTurn = 1;
            MyHandCount = CountCards(HandBot);
            if (MyHandCount < 4)
            {
                int lesscards = 4 - MyHandCount;

                DistOfCard(Card, HandBot, 4);

                for (int i = 0; i <= lesscards; i++)
                    DellCard(Card);

                printf("\nВаши карты: \n");

                PrintCardHand(HandPlayer);

                break;
            break;

        case 1:
           
            printf("\n\nВаш ход! Выберите масть (введите от 1 до 4 - Черви, Пики, Крести, Буби) \nи карту (от 6 до 10 или 11 - валет, 12-Дама, 13- Король, 14 - Туз): ");


            result = MyTurn(HandPlayer, HandBot);
            if (result == 1)
                PlayerTurn = 1;
            else
                PlayerTurn = 0;

            MyHandCount = CountCards(HandPlayer);
            if (MyHandCount < 4)
            {
                int lesscards = 4 - MyHandCount;
                
                DistOfCard(Card,HandPlayer,4);
                
                for (int i = 0; i <= lesscards; i++)
                    DellCard(Card);
               
                printf("\nВаши карты: \n");

                PrintCardHand(HandPlayer);
                
                break;
            }
        }
    }
}

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    int Card[36][2];
    int HandPlayer[36][2];
    int HandBot[36][2];
    
    Clear();
    Menu();
    Clear();
    GenerationCard(Card);
    RandCard(Card);
    Game(Card, HandPlayer, HandBot);

    return 0;
}