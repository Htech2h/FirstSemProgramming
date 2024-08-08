//
// Created by Admin on 2024/05/19.
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

struct Team {
    string name;
    int MP;
    int W;
    int D;
    int L;
    int GF;
    int GA;
    int pts;
    int GD;
};
int numTeams = 5;
Team teams[5];

void input()
{
    for (int i = 0; i < numTeams; ++i) {
        cout << "Enter details for Team " << i + 1 << ":\n";
        cout << " Team Name: ";
        cin >> teams[i].name;
        cout << "Matches Played (MP): ";
        cin >> teams[i].MP;
        cout << "Wins (W): ";
        cin >> teams[i].W;
        cout << "Draws (D): ";
        cin >> teams[i].D;
        cout << "Losses (L): ";
        cin >> teams[i].L;
        cout << "Goals scored (GF): ";
        cin >> teams[i].GF;
        cout << "Goals canceled (GA): ";
        cin >> teams[i].GA;
        cout<<"points";
        cin>> teams[i].pts;
        teams[i].GD = abs(teams[i].GF - teams[i].GA); // Calculate goal differences
    }

}

void Display()
{
    cout << "League Table:\n";
    cout << "--------------------------------------------------\n";
    cout << "Team\tMP\tW\tD\tL\tGF\tGA\tGD\tpts\n";
    cout << "--------------------------------------------------\n";
    for (int i = 0; i < numTeams; ++i) {
        cout << teams[i].name << "\t";
        cout << teams[i].MP << "\t";
        cout << teams[i].W << "\t";
        cout << teams[i].D << "\t";
        cout << teams[i].L << "\t";
        cout << teams[i].GF << "\t";
        cout << teams[i].GA << "\t";
        cout << teams[i].GD << "\t";
        cout<< teams[i].pts << "\n";
    }
    cout << "--------------------------------------------------\n";
}

void otherDisplay()
{
    cout << "Winner of the league: " << teams[0].name << "\n";

    // Display top four teams
    cout << "Top four teams:\n";
    for (int i = 0; i < 4; ++i) {
        cout << i + 1 << ". " << teams[i].name << "\n";
    }

    // Display bottom four teams
    cout << "Bottom four teams:\n";
    for (int i = numTeams - 4; i < numTeams; ++i) {
        cout << i + 1 << ". " << teams[i].name << "\n";
    }

    // Display relegation bound teams
    cout << "Relegation bound teams:\n";
    for (int i = numTeams - 2; i < numTeams; ++i) {
        cout << i + 1 << ". " << teams[i].name << "\n";
    }

    // Display teams headed for play-off
    cout << "Teams headed for play-off:\n";
    for (int i = 0; i < 2; ++i) {
        cout << i + 1 << ". " << teams[i].name << "\n";
    }
}

bool compareTeams(const Team &a, const Team &b) {
    if (a.W * 3 + a.D != b.W * 3 + b.D)
        return (a.W * 3 + a.D) > (b.W * 3 + b.D); // Sort by points
    else if (a.GD != b.GD)
        return a.GD > b.GD; // Sort by goal difference
    else
        return a.MP > b.MP; // Sort by matches played
}


int main()
{

            //THIS WILL ACT AS A DATA FILE (comment out input() if this is your datafile)
    teams[0]=	{"Mamelodi Sundowns",	18,	14,	4,	0,	33,	5,	46};
    teams[1]=	{"Orlando Pirates"	,20,	9,	6,	5,	25,	19,	33};
    teams[2]=	{"SuperSport United"	,20,	9	,6,	5,	26,	23,	33};
    teams[3]=	{"Stellenbosch	",19,	9,	5,	5,	23,	17,	32};
    teams[4]=	{"Cape Town City",	20,	9,	4	,7,	20,	16,	31 };

    //comment this for loop if taking data using the input method, #note GD is calculated not entered
    for (int i = 0; i < numTeams; ++i)
        teams[i].GD = abs(teams[i].GF - teams[i].GA);     // Calculate goal difference

    //OR INSERT THE INPUTS YOURSELF(IT WILL NAME TIME THOU
    //input();
    sort(teams, teams + numTeams, compareTeams);
    Display();
    otherDisplay();
}
