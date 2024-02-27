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
        case 7:
            printf("\nВы спрашиваете у противника карту - Черви 7");
        case 8:
            printf("\nВы спрашиваете у противника карту - Черви 8");
        case 9:
            printf("\nВы спрашиваете у противника карту - Черви 9");
        case 10:
            printf("\nВы спрашиваете у противника карту - Черви 10");
        case 11:
            printf("\nВы спрашиваете у противника карту - Черви Валет");
        case 12:
            printf("\nВы спрашиваете у противника карту - Черви Дама");
        case 13:
            printf("\nВы спрашиваете у противника карту - Черви Король");
        case 14:
            printf("\nВы спрашиваете у противника карту - Черви Туз");
        }
    case 2:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Пики 6");
        case 7:
            printf("\nВы спрашиваете у противника карту - Пики 7");
        case 8:
            printf("\nВы спрашиваете у противника карту - Пики 8");
        case 9:
            printf("\nВы спрашиваете у противника карту - Пики 9");
        case 10:
            printf("\nВы спрашиваете у противника карту - Пики 10");
        case 11:
            printf("\nВы спрашиваете у противника карту - Пики Валет");
        case 12:
            printf("\nВы спрашиваете у противника карту - Пики Дама");
        case 13:
            printf("\nВы спрашиваете у противника карту - Пики Король");
        case 14:
            printf("\nВы спрашиваете у противника карту - Пики Туз");
        }
    case 3:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Крести 6");
        case 7:
            printf("\nВы спрашиваете у противника карту - Крести 7");
        case 8:
            printf("\nВы спрашиваете у противника карту - Крести 8");
        case 9:
            printf("\nВы спрашиваете у противника карту - Крести 9");
        case 10:
            printf("\nВы спрашиваете у противника карту - Крести 10");
        case 11:
            printf("\nВы спрашиваете у противника карту - Крести Валет");
        case 12:
            printf("\nВы спрашиваете у противника карту - Крести Дама");
        case 13:
            printf("\nВы спрашиваете у противника карту - Крести Король");
        case 14:
            printf("\nВы спрашиваете у противника карту - Крести Туз");
        }
    case 4:
        switch (turnC)
        {
        case 6:
            printf("\nВы спрашиваете у противника карту - Буби 6");
        case 7:
            printf("\nВы спрашиваете у противника карту - Буби 7");
        case 8:
            printf("\nВы спрашиваете у противника карту - Буби 8");
        case 9:
            printf("\nВы спрашиваете у противника карту - Буби 9");
        case 10:
            printf("\nВы спрашиваете у противника карту - Буби 10");
        case 11:
            printf("\nВы спрашиваете у противника карту - Буби Валет");
        case 12:
            printf("\nВы спрашиваете у противника карту - Буби Дама");
        case 13:
            printf("\nВы спрашиваете у противника карту - Буби Король");
        case 14:
            printf("\nВы спрашиваете у противника карту - Буби Туз");
        }
    }
}

void EnemyTurn(int HandBot)
{

}

int *MyTurn(int HandPlayer[4][2])
{
    int choice[1];
    
    int turnM = 0;
    int turnC = 0;
    
    printf("\n\nВаш ход! Выберите масть (введите от 1 до 4 - Черви, Пики, Крести, Буби) \nи карту (от 6 до 10 или 11 - валет, 12-Дама, 13- Король, 14 - Туз): ");
    
    scanf_s("%i %i", &turnM, &turnC);

    IdentCard(turnM, turnC);

    choice[0] = turnM;
    choice[1] = turnC;

    return choice;
}

void Game(int Card[36][2], int HandPlayer[4][2], int HandBot[4][2])
{
    bool IsGame = true;

    RandCard(Card);
    
    printf("\nПроисходит раздача карт вам и противнику (нажмите Enter)");
    
    Continue();
    
    Clear();
    
    DistOfCard(Card, HandPlayer, 4);
    
    DistOfCard(Card, HandBot, 4);
    
    printf("\nВаши карты: ");
    
    PrintCardHand(HandPlayer);

    int PlayerTurn = rand() % 2;

    while (IsGame)
    {
        switch (PlayerTurn) {

        case 0:
            
            EnemyTurn();

        case 1:
           
           int *Choice = MyTurn(HandPlayer);
           

        }
    }
}

int main()
{
    system("chcp 1251");
    srand(time(NULL));
    int Card[36][2];
    int HandPlayer[4][2];
    int HandBot[4][2];
    
    Clear();
    Menu();
    Clear();
    GenerationCard(Card);
    RandCard(Card);
    //Game(Card, HandPlayer, HandBot);

    return 0;
}