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
        case 7:
            printf("\n�� ����������� � ���������� ����� - ����� 7");
        case 8:
            printf("\n�� ����������� � ���������� ����� - ����� 8");
        case 9:
            printf("\n�� ����������� � ���������� ����� - ����� 9");
        case 10:
            printf("\n�� ����������� � ���������� ����� - ����� 10");
        case 11:
            printf("\n�� ����������� � ���������� ����� - ����� �����");
        case 12:
            printf("\n�� ����������� � ���������� ����� - ����� ����");
        case 13:
            printf("\n�� ����������� � ���������� ����� - ����� ������");
        case 14:
            printf("\n�� ����������� � ���������� ����� - ����� ���");
        }
    case 2:
        switch (turnC)
        {
        case 6:
            printf("\n�� ����������� � ���������� ����� - ���� 6");
        case 7:
            printf("\n�� ����������� � ���������� ����� - ���� 7");
        case 8:
            printf("\n�� ����������� � ���������� ����� - ���� 8");
        case 9:
            printf("\n�� ����������� � ���������� ����� - ���� 9");
        case 10:
            printf("\n�� ����������� � ���������� ����� - ���� 10");
        case 11:
            printf("\n�� ����������� � ���������� ����� - ���� �����");
        case 12:
            printf("\n�� ����������� � ���������� ����� - ���� ����");
        case 13:
            printf("\n�� ����������� � ���������� ����� - ���� ������");
        case 14:
            printf("\n�� ����������� � ���������� ����� - ���� ���");
        }
    case 3:
        switch (turnC)
        {
        case 6:
            printf("\n�� ����������� � ���������� ����� - ������ 6");
        case 7:
            printf("\n�� ����������� � ���������� ����� - ������ 7");
        case 8:
            printf("\n�� ����������� � ���������� ����� - ������ 8");
        case 9:
            printf("\n�� ����������� � ���������� ����� - ������ 9");
        case 10:
            printf("\n�� ����������� � ���������� ����� - ������ 10");
        case 11:
            printf("\n�� ����������� � ���������� ����� - ������ �����");
        case 12:
            printf("\n�� ����������� � ���������� ����� - ������ ����");
        case 13:
            printf("\n�� ����������� � ���������� ����� - ������ ������");
        case 14:
            printf("\n�� ����������� � ���������� ����� - ������ ���");
        }
    case 4:
        switch (turnC)
        {
        case 6:
            printf("\n�� ����������� � ���������� ����� - ���� 6");
        case 7:
            printf("\n�� ����������� � ���������� ����� - ���� 7");
        case 8:
            printf("\n�� ����������� � ���������� ����� - ���� 8");
        case 9:
            printf("\n�� ����������� � ���������� ����� - ���� 9");
        case 10:
            printf("\n�� ����������� � ���������� ����� - ���� 10");
        case 11:
            printf("\n�� ����������� � ���������� ����� - ���� �����");
        case 12:
            printf("\n�� ����������� � ���������� ����� - ���� ����");
        case 13:
            printf("\n�� ����������� � ���������� ����� - ���� ������");
        case 14:
            printf("\n�� ����������� � ���������� ����� - ���� ���");
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
    
    printf("\n\n��� ���! �������� ����� (������� �� 1 �� 4 - �����, ����, ������, ����) \n� ����� (�� 6 �� 10 ��� 11 - �����, 12-����, 13- ������, 14 - ���): ");
    
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
    
    printf("\n���������� ������� ���� ��� � ���������� (������� Enter)");
    
    Continue();
    
    Clear();
    
    DistOfCard(Card, HandPlayer, 4);
    
    DistOfCard(Card, HandBot, 4);
    
    printf("\n���� �����: ");
    
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