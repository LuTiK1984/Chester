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
            printf("\n�� ����������� � ���������� ����� - ����� 6");
            break;
        case 7:
            printf("\n�� ����������� � ���������� ����� - ����� 7");
            break;
        case 8:
            printf("\n�� ����������� � ���������� ����� - ����� 8");
            break;
        case 9:
            printf("\n�� ����������� � ���������� ����� - ����� 9");
            break;
        case 10:
            printf("\n�� ����������� � ���������� ����� - ����� 10");
            break;
        case 11:
            printf("\n�� ����������� � ���������� ����� - ����� �����");
            break;
        case 12:
            printf("\n�� ����������� � ���������� ����� - ����� ����");
            break;
        case 13:
            printf("\n�� ����������� � ���������� ����� - ����� ������");
            break;
        case 14:
            printf("\n�� ����������� � ���������� ����� - ����� ���");
            break;
        }
        break;
    case 2:
        switch (turnC)
        {
        case 6:
            printf("\n�� ����������� � ���������� ����� - ���� 6");
            break;
        case 7:
            printf("\n�� ����������� � ���������� ����� - ���� 7");
            break;
        case 8:
            printf("\n�� ����������� � ���������� ����� - ���� 8");
            break;
        case 9:
            printf("\n�� ����������� � ���������� ����� - ���� 9");
            break;
        case 10:
            printf("\n�� ����������� � ���������� ����� - ���� 10");
            break;
        case 11:
            printf("\n�� ����������� � ���������� ����� - ���� �����");
            break;
        case 12:
            printf("\n�� ����������� � ���������� ����� - ���� ����");
            break;
        case 13:
            printf("\n�� ����������� � ���������� ����� - ���� ������");
            break;
        case 14:
            printf("\n�� ����������� � ���������� ����� - ���� ���");
            break;
        }
        break;
    case 3:
        switch (turnC)
        {
        case 6:
            printf("\n�� ����������� � ���������� ����� - ������ 6");
            break;
        case 7:
            printf("\n�� ����������� � ���������� ����� - ������ 7");
            break;
        case 8:
            printf("\n�� ����������� � ���������� ����� - ������ 8");
            break;
        case 9:
            printf("\n�� ����������� � ���������� ����� - ������ 9");
            break;
        case 10:
            printf("\n�� ����������� � ���������� ����� - ������ 10");
            break;
        case 11:
            printf("\n�� ����������� � ���������� ����� - ������ �����");
            break;
        case 12:
            printf("\n�� ����������� � ���������� ����� - ������ ����");
            break;
        case 13:
            printf("\n�� ����������� � ���������� ����� - ������ ������");
            break;
        case 14:
            printf("\n�� ����������� � ���������� ����� - ������ ���");
            break;
        }
        break;
    case 4:
        switch (turnC)
        {
        case 6:
            printf("\n�� ����������� � ���������� ����� - ���� 6");
            break;
        case 7:
            printf("\n�� ����������� � ���������� ����� - ���� 7");
            break;
        case 8:
            printf("\n�� ����������� � ���������� ����� - ���� 8");
            break;
        case 9:
            printf("\n�� ����������� � ���������� ����� - ���� 9");
            break;
        case 10:
            printf("\n�� ����������� � ���������� ����� - ���� 10");
            break;
        case 11:
            printf("\n�� ����������� � ���������� ����� - ���� �����");
            break;
        case 12:
            printf("\n�� ����������� � ���������� ����� - ���� ����");
            break;
        case 13:
            printf("\n�� ����������� � ���������� ����� - ���� ������");
            break;
        case 14:
            printf("\n�� ����������� � ���������� ����� - ���� ���");
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
    
    printf("\n���������� ������� ���� ��� � ���������� (������� Enter)");
    
    Continue();
    
    Clear();
    
    DistOfCard(Card, HandPlayer, 4);
    
    DistOfCard(Card, HandBot, 4);
    
    printf("\n���� �����: \n");
    
    PrintCardHand(HandPlayer);

    int PlayerTurn = rand() % 2;

    while (IsGame)
    {
        switch (PlayerTurn) 
        {
        int result;
        int MyHandCount;
        case 0:
            
            printf("\n\n����� ��� ���������!");

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

                printf("\n���� �����: \n");

                PrintCardHand(HandPlayer);

                break;
            break;

        case 1:
           
            printf("\n\n��� ���! �������� ����� (������� �� 1 �� 4 - �����, ����, ������, ����) \n� ����� (�� 6 �� 10 ��� 11 - �����, 12-����, 13- ������, 14 - ���): ");


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
               
                printf("\n���� �����: \n");

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