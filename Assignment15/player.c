#include<stdio.h>

struct Player
{
    char name[20];
    int matches;
    int runs;
    int wickets;
};

void storePlayers(struct Player p[], int n);
void displayPlayers(struct Player p[], int n);
void maxRuns(struct Player p[], int n);
void maxWickets(struct Player p[], int n);

int main()
{
	struct Player p[10];

    storePlayers(p, 10);

    printf("\n\nPlayer Details:\n");
    displayPlayers(p, 10);

    maxRuns(p, 10);
    maxWickets(p, 10);

    return 0;
}

void storePlayers(struct Player p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nName: ");
        scanf("%s", p[i].name);

        printf("Matches Played: ");
        scanf("%d", &p[i].matches);

        printf("Runs: ");
        scanf("%d", &p[i].runs);

        printf("Wickets: ");
        scanf("%d", &p[i].wickets);
    }
}

void displayPlayers(struct Player p[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nName = %s", p[i].name);
        printf("\nMatches = %d", p[i].matches);
        printf("\nRuns = %d", p[i].runs);
        printf("\nWickets = %d\n", p[i].wickets);
    }
}

void maxRuns(struct Player p[], int n)
{
    int index = 0;

    for(int i = 1; i < n; i++)
    {
        if(p[i].runs > p[index].runs)
        {
            index = i;
        }
    }

    printf("\nPlayer with Maximum Runs:");
    printf("\nName = %s", p[index].name);
    printf("\nRuns = %d\n", p[index].runs);
}

void maxWickets(struct Player p[], int n)
{
    int index = 0;

    for(int i = 1; i < n; i++)
    {
        if(p[i].wickets > p[index].wickets)
        {
            index = i;
        }
    }

    printf("\nPlayer with Maximum Wickets:");
    printf("\nName = %s", p[index].name);
    printf("\nWickets = %d\n", p[index].wickets);
}