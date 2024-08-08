#include <iostream>
#include<iomanip>
#include<string>
#include<stdio.h>
using namespace std;


struct Soccer
{
    string Team_name;
    int Matches_Played;
    int Matches_won;
    int Matches_Drawn;
    int Matches_Lost;
    int Goal_scored;
    int Goal_against;
    int Goal_diff;
    int points;
};


struct Soccer teams[8];

void inputData()
{
    for (int i = 0; i < 8; i++)
    {
        cout << "Enter team name : " << i + 1 << endl;
        getline(cin >>ws, teams[i].Team_name);
        while (true)
        {
            system("CLS");

            cout << "Number of matches " << teams[i].Team_name << " has Played: "<<endl;
            cin >> teams[i].Matches_Played;

            cout << "Number of matches " << teams[i].Team_name << " has Won: "<<endl;
            cin >> teams[i].Matches_won;

            cout << "Number of matches " << teams[i].Team_name << " has Drawn: "<<endl;
            cin >> teams[i].Matches_Drawn;

            cout << "Number of matches " << teams[i].Team_name << " has Lost: "<<endl;
            cin >> teams[i].Matches_Lost;

            cout << "Number of goals " << teams[i].Team_name << " has Scored: "<<endl;
            cin >> teams[i].Goal_scored;

            cout << "Number of goals " << teams[i].Team_name << " has Conceded: "<<endl;
            cin >> teams[i].Goal_against;

            if (teams[i].Matches_Played == teams[i].Matches_won+ teams[i].Matches_Drawn + teams[i].Matches_Lost)
            {
                teams[i].points = (teams[i].Matches_won * 3) + teams[i].Matches_Drawn;
                teams[i].Goal_diff = teams[i].Goal_scored - teams[i].Goal_against;
                break;
            }
            else
            {
                cout << "The number of matches played does not match the total of wins, draws, and losses." << endl;
                cout << "Input the data again for team " << teams[i].Team_name << "." << endl;
                system("PAUSE");
            }
        }
    }
}

void sortTeams();

void DisplayTable()
{
    sortTeams();
    system("CLS");
    cout<<"This is Your Full league table:"<<endl;
    cout << "-----------------------------------------------------------------------------" << endl;
    cout << "| Position | Team Name       | MP |  W |  D |  L |  GF |  GA | GD | Pts |" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

for (int i = 0; i < 8; i++)
    {
            cout << "| " << setw(8) << i + 1 << " | "
                 << left << setw(16) << teams[i].Team_name
                 << "| " << setw(2) << teams[i].Matches_Played
                 << " | " << setw(2) << teams[i].Matches_won
                 << " | " << setw(2) << teams[i].Matches_Drawn
                 << " | " << setw(2) << teams[i].Matches_Lost
                 << " | " << setw(3) << teams[i].Goal_scored
                 << " | " << setw(3) << teams[i].Goal_against
                 << " | " << setw(2) << teams[i].Goal_diff
                 << " | " << setw(3) << teams[i].points
                 << " |" << endl;
    }
            cout << "-----------------------------------------------------------------------------" << endl;
system("PAUSE");
}


void sortTeams()
{
int n = 8;

for (int i = 0; i < n - 1; i++)
{
    for (int j = 0; j < n - i - 1; j++) {
        if (teams[j].points < teams[j + 1].points || (teams[j].points == teams[j + 1].points && teams[j].Goal_diff < teams[j + 1].Goal_diff)) {

            int tempPts = teams[j].points;
            teams[j].points = teams[j + 1].points;
            teams[j + 1].points = tempPts;


            int tempGD = teams[j].Goal_diff;
            teams[j].Goal_diff = teams[j + 1].Goal_diff;
            teams[j + 1].Goal_diff = tempGD;


        }
    }
}

}


void winner()
{
    sortTeams();
    system("CLS");

    cout<<"The winner is "<<teams[0].Team_name<<"  With "<<teams[0].points<<" points"<<endl;
system("PAUSE");
}


void listTopFourTeams()
{
    sortTeams();
system("CLS");

    for (int i = 0; i < 4; i++)
    {
      cout << "Position: " << i + 1 << endl;
        cout<<teams[i].Team_name<<endl;
    }
    system("PAUSE");
}


void listBottomFourTeams()
{
    system("CLS");

  int totalTeams = sizeof(teams) / sizeof(teams[0]);

  for (int i = totalTeams - 4; i < totalTeams; i++)
    {
       cout << "Position: " << i + 1 << endl;
        cout << "Team Name: " <<teams[i].Team_name << endl;

    }
        system("PAUSE");
}


void listRelegationBoundTeams()
{
    system("CLS");
    int totalTeams = sizeof(teams) / sizeof(teams[0]);

    for (int i = totalTeams - 2; i < totalTeams; i++)
        {
         cout << "Position: " << i + 1 << endl;
        cout << "Team Name: " << teams[i].Team_name << endl;

        }
    system("PAUSE");
}

Soccer* listBottomFourTeams2()
        {
            Soccer* bottomFour = new Soccer[8];

            int totalTeams = sizeof(teams) / sizeof(teams[0]);

        for (int i = totalTeams - 4, j = 0; i < totalTeams; i++, j++)
        {
            bottomFour[j] = teams[i];
        }

    return bottomFour;
}



void listTeamsForPlayoff()
{

    system("CLS");
    cout << "Teams Headed for Play-off:" << endl;

    Soccer* bottomFour = listBottomFourTeams2();

    for (int i = 0; i < 2; i++) {
        cout << "Position: " << i + 1 << endl;
        cout << "Team Name: " << bottomFour[i].Team_name << endl;

    }
    system("PAUSE");

}


void menu()
{
    int choice;
    do
    {
        system("CLS");
            cout << "\n----- MENU -----" << endl;
            cout << "1. Sort teams" << endl;
            cout << "2. Display the winner of the Leugue" << endl;
            cout << "3. List The Top four Teams in the League" << endl;
            cout << "4. List The Bottom four Teams in the League" << endl;
            cout << "5. List Relegation Bound Teams" << endl;
            cout << "6. List Teams Headed for Play-off" << endl;
            cout << "7. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;
        switch (choice)
    {
        case 1:
            system("CLS");
            sortTeams();
            DisplayTable();
            break;
        case 2:
            winner();
            break;
        case 3:
            listTopFourTeams();
            break;
        case 4:
            listBottomFourTeams();
            break;
        case 5:
            listRelegationBoundTeams();
            break;
        case 6:
            listTeamsForPlayoff();
            break;
        case 7:
            cout << "Exiting program..." << endl;
            return;
        default:
            cout << "Invalid choice. Please enter a valid option." << endl;
            break;
      }
    } while (choice != 7);
}


int main()
{

    inputData();
    DisplayTable();
    menu();


    return 0;
}
