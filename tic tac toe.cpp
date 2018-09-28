#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
char a;
char b;
int outline();
void shape1();
void shape();
void instructions();
void start();
void structure();
void game();
int result();
char arr[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
int main()
{
    int c=outline();


    return 0;
}
int outline()
{
    char s;
    //outline
    printf("#####################TIC TAC TOE#######################\n");
    printf("                                           VARUN DUDUKU");
    printf("\n\n\n\n\n\n           press enter to continue");
    scanf("%c",&s);
    if(s=='\n')
    {
        system("cls");
        cout<<"WELCOME TO THE GAME\n";
        printf("only for two players\n");
        printf("Enter y to continue---");
        char c;
        cin>>c;//\n
        if(c=='y')
        {
            system("cls");
            instructions();
        }
        else
        {
            exit(0);

            return -1;
        }
    }
    else
    exit(0);
}
void instructions()
{
    //instructions
    printf("***********************INSTRUCTIONS*************************\n");
    printf("it is 2 players game\n");
    printf("Each player should choice their own character \n");
    structure();
    printf("\nThis is the structure of game and you need press the values on the boxes to insert you character");
    printf("enter y to continue\n");
    char d;
    cin>>d;
    if(d=='y')
        start();
}
void start()
{        system("cls");

    printf("Select your character:\n");
    printf("player 1::enter your character\n");
    cin>>a;
    do
    {
        printf("player 2::enter your character\n");
        cin>>b;
        if(a==b)
        {
            printf("already player 1 choosed it\n");
        }
    }while(a==b);
    system("cls");
    shape();
}
void structure()
{
    char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[0][0],arr[0][1],arr[0][2]);
    printf("    |    |    \n");
    printf("------------------\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[1][0],arr[1][1],arr[1][2]);
    printf("    |    |    \n");
    printf("------------------\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[2][0],arr[2][1],arr[2][2]);
    printf("    |    |    \n");
}
void shape()
{
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[0][0],arr[0][1],arr[0][2]);
    printf("    |    |    \n");
    printf("------------------\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[1][0],arr[1][1],arr[1][2]);
    printf("    |    |    \n");
    printf("------------------\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[2][0],arr[2][1],arr[2][2]);
    printf("    |    |    \n");
    game();
}
    void game()
    {char x;
    int t;
    int i;
    for(i=0;i<9;i++)
    {

    if(i%2==0)
        {
            //cout<<"first"<<endl;
            if(result())
            {
                cout<<"player 2 won the match"<<endl;
                exit(0);
            }
          printf("Player 1 turn:");
           cin>>t;
            x=a;

        }
        else
        {
            if(result())
            {
                cout<<"player 1 won the match"<<endl;
                exit(0);
            }
            printf("player 2 turn:");
            cin>>t;
            x=b;

        }
        //printf("%c",t);
        switch(t)
        {
            case 1:arr[0][0]=x;break;
            case 2:arr[0][1]=x;break;
            case 3:arr[0][2]=x;break;
            case 4:arr[1][0]=x;break;
            case 5:arr[1][1]=x;break;
            case 6:arr[1][2]=x;break;
            case 7:arr[2][0]=x;break;
            case 8:arr[2][1]=x;break;
            case 9:arr[2][2]=x;break;
        }
        system("cls");
        shape1();

    }
    cout<<"match tie"<<endl;
}
void shape1()
{

    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[0][0],arr[0][1],arr[0][2]);
    printf("    |    |    \n");
    printf("------------------\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[1][0],arr[1][1],arr[1][2]);
    printf("    |    |    \n");
    printf("------------------\n");
    printf("    |    |    \n");
    printf(" %c  | %c  | %c \n",arr[2][0],arr[2][1],arr[2][2]);
    printf("    |    |    \n");

}
int result()
{
    if((arr[0][0]==a&&arr[0][1]==a&&arr[0][2]==a)||(arr[0][0]==b&&arr[0][1]==b&&arr[0][2]==b))
        return 1;
    else if((arr[0][0]==a&&arr[1][1]==a&&arr[2][2]==a)||(arr[0][0]==b&&arr[1][1]==b&&arr[2][2]==b))
        return 1;
    else if((arr[0][0]==a&&arr[1][0]==a&&arr[2][0]==a)||(arr[0][0]==b&&arr[1][0]==b&&arr[2][0]==b))
        return 1;
    else if((arr[0][1]==a&&arr[1][1]==a&&arr[2][1]==a)||(arr[0][1]==b&&arr[1][1]==b&&arr[2][1]==b))
        return 1;
    else if((arr[0][2]==a&&arr[1][2]==a&&arr[2][2]==a)||(arr[0][2]==b&&arr[1][2]==b&&arr[2][2]==b))
        return 1;
    else if((arr[0][2]==a&&arr[1][1]==a&&arr[2][0]==a)||(arr[0][2]==b&&arr[1][1]==b&&arr[2][0]==b))
        return 1;
    else if((arr[1][0]==a&&arr[1][1]==a&&arr[1][2]==a)||(arr[1][0]==b&&arr[1][1]==b&&arr[1][2]==b))
        return 1;
    else if((arr[2][0]==a&&arr[2][1]==a&&arr[2][2]==a)||(arr[2][0]==b&&arr[2][1]==b&&arr[2][2]==b))
        return 1;
    else
    return 0;
}
