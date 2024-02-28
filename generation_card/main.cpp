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
        if ((HandPlayer[i][0] > 0) && (HandPlayer[i][1] > 0))
            n++;
        else
            break;
    }
    return n;
}


void EnemyTurn(int HandBot[36][2])
{

}

int MyTurn(int choice[2], int HandBot[36][2])
{
    for (int i = 0; i < 36; i++)
    {
        if ((choice[0] == HandBot[i][0]) && (choice[1] == HandBot[i][1]))
            return 1;
        else
            return 0;
    }
}

void FillHand(int Card[36][2], int HandBot[36][2])
{
    int MyHandCount = CountCards(HandBot);
    
    while (MyHandCount < 4)
    {

        DistOfCard(Card, HandBot, 1);
        DellCard(Card);
        MyHandCount++;
    }
}

void Game(int Card[36][2], int HandPlayer[36][2], int HandBot[36][2])
{
    bool IsGame = true;

    RandCard(Card);
    
    printf("\n���������� ������� ���� ��� � ���������� (������� Enter)");
    
    Continue();
    
    Clear();
    
    DistOfCard(Card, HandPlayer, 4);

    for (int i = 0; i < 5; i++)
        DellCard(Card);
    
    DistOfCard(Card, HandBot, 4);

    for (int i = 0; i < 5; i++)
        DellCard(Card);
    

    int PlayerTurn = rand() % 2;

    while (IsGame)
    {
        switch (PlayerTurn) 
        {
        int result;
        int MyHandCount;
        int choice[2];
        int turnM;
        int turnC;

        case 0:
            FillHand(Card, HandPlayer);
            printf("\n%i\n", CountCards(HandBot));
            printf("\n���� ����� � ����� �����: \n");
            PrintCardHand(HandPlayer);
            printf("\n");
            PrintCardHand(HandBot);
            
            printf("\n\n����� ��� ���������!");

            scanf_s("%i %i", &turnM, &turnC);

            IdentCard(turnM, turnC);

            choice[0] = turnM;
            choice[1] = turnC;
           
            result = MyTurn(choice, HandPlayer);
            
            if (result == 1)
            {
                PlayerTurn = 0;

                for (int i = 0; i < 36; i++)
                {
                    if ((choice[0] == HandPlayer[i][0]) && (choice[1] == HandPlayer[i][1]))
                    {
                        HandPlayer[i][0] = 0;
                        HandPlayer[i][1] = 0;
                    }
                }
                
                for (int i = 0; i < 36; i++)
                {
                    if ((HandBot[i][0] <= 0) && (HandBot[i][1] <= 0))
                    {
                        HandBot[i][0] = choice[0];
                        HandBot[i][1] = choice[1];
                        break;
                    }
                }

            }


                break;

        case 1:
            FillHand(Card, HandBot);
            printf("\n%i\n",CountCards(HandBot));
                printf("\n���� ����� � ����� �����: \n");
                PrintCardHand(HandPlayer);
                printf("\n");
                PrintCardHand(HandBot);
            printf("\n\n��� ���! �������� ����� (������� �� 1 �� 4 - �����, ����, ������, ����) \n� ����� (�� 6 �� 10 ��� 11 - �����, 12-����, 13- ������, 14 - ���): ");

            scanf_s("%i %i", &turnM, &turnC);

            IdentCard(turnM, turnC);

            choice[0] = turnM;
            choice[1] = turnC;

            result = MyTurn(choice, HandBot);
            
            if (result == 1)
            { 
                PlayerTurn = 1;

                for (int i = 0; i < 36; i++)
                {
                    if ((choice[0] == HandBot[i][0]) && (choice[1] == HandBot[i][1]))
                    {
                        HandBot[i][0] = 0;
                        HandBot[i][1] = 0;
                        
                    }
                }

                for (int i = 0; i < 36; i++)
                {
                    if ((HandPlayer[i][0] <= 0) && (HandPlayer[i][1] <= 0))
                    {
                        HandPlayer[i][0] = choice[0];
                        HandPlayer[i][1] = choice[1];
                        break;
                    }
                }

            }
            
                break;
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