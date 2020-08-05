#include <iostream>
using namespace std;

int main() 
{
    again:
    int flag1=0,flag2=0,check=0;
    char a[3][3],c='1',n;
    string play;
    cout<<"\nWelcome to Tic-Tac-Toe Game"<<endl<<endl;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            a[i][j]=c;
            cout<<a[i][j]<<" ";
            c++;
        }
        cout<<endl;
    }
    
    label:
    check++;
    cout<<"\nPlayer 1 enter the number where you want to print X : ";
    cin>>n;
    cout<<endl;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==n)
            {
                a[i][j]='X';
            }
            cout<<a[i][j]<<" ";
            
            
            if((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X') || (a[0][2]=='X' && a[1][1]=='X' && a[2][0]=='X')) // Diagonal check
            flag1=1;
            
            if(a[0][j]=='X' && a[1][j]=='X' && a[2][j]=='X') // Column check
            flag1=1;
            
            if(a[i][0]=='X' && a[i][1]=='X' && a[i][2]=='X') // Row check
            flag1=1;
        }
        
        cout<<endl;
    }
    if(flag1) // Player 1 won conditons check
    {
        cout<<"\nCongratulations, Player 1 won the game"<<endl;
        goto end;
    }
    if(check==5)    // draw conditons check
    {
        cout<<"\nOops, the game is drawn"<<endl;
        goto end;
    }
    
    cout<<"\nPlayer 2 enter the number where you want to print O : ";
    cin>>n;
    cout<<endl;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]==n )
            {
                a[i][j]='O';
            }
            cout<<a[i][j]<<" ";
            
            if((a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O') || (a[0][2]=='O' && a[1][1]=='O' && a[2][0]=='O')) // Diagonal check
            flag2=1;
            
            if(a[0][j]=='O' && a[1][j]=='O' && a[2][j]=='O') // Column check
            flag2=1;
            
            if(a[i][0]=='O' && a[i][1]=='O' && a[i][2]=='O') // Row check
            flag2=1;
            
        }

        cout<<endl;
    }
    if(flag2)   // Player 2 won conditons check
        cout<<"\nCongratulations, Player 2 won the game"<<endl;
    else
        goto label;
        
    end:
    
    cout<<"\nDo you want to play again(yes/no): ";
    cin>>play;
    if(play=="yes")
      goto again;
    else
      cout<<"\nThanks for playing the game"<<endl;
    return 0;   
    
}