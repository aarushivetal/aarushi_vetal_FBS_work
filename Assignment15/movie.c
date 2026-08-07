#include<stdio.h>
#include<string.h>

struct Movie
{
    char title[30];
    char director[30];
    int releaseYear;
    char genre[20];
};

void addMovies(struct Movie m[], int n);
void displayMovies(struct Movie m[], int n);
void searchMovie(struct Movie m[], int n);
void updateMovie(struct Movie m[], int n);

int main()
{
    struct Movie m[10];
    int n;

    printf("Enter number of movies: ");
    scanf("%d", &n);

    addMovies(m, n);

    printf("\nMovie Records:\n");
    displayMovies(m, n);

    searchMovie(m, n);

    updateMovie(m, n);

    printf("\nUpdated Records:\n");
    displayMovies(m, n);

    return 0;
}

void addMovies(struct Movie m[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Movie %d Details", i + 1);

        printf("\nTitle: ");
        scanf("%s", m[i].title);

        printf("Director: ");
        scanf("%s", m[i].director);

        printf("Release Year: ");
        scanf("%d", &m[i].releaseYear);

        printf("Genre: ");
        scanf("%s", m[i].genre);
    }
}

void displayMovies(struct Movie m[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nTitle = %s", m[i].title);
        printf("\nDirector = %s", m[i].director);
        printf("\nRelease Year = %d", m[i].releaseYear);
        printf("\nGenre = %s\n", m[i].genre);
    }
}

void searchMovie(struct Movie m[], int n)
{
    char searchTitle[30];
    int i, found = 0;

    printf("\nEnter movie title to search: ");
    scanf("%s", searchTitle);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, searchTitle) == 0)
        {
            printf("\nMovie Found:");
            printf("\nTitle = %s", m[i].title);
            printf("\nDirector = %s", m[i].director);
            printf("\nRelease Year = %d", m[i].releaseYear);
            printf("\nGenre = %s\n", m[i].genre);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("\nMovie Not Found\n");
    }
}

void updateMovie(struct Movie m[], int n)
{
    char searchTitle[30];
    int i;

    printf("\nEnter movie title to update: ");
    scanf("%s", searchTitle);

    for(i = 0; i < n; i++)
    {
        if(strcmp(m[i].title, searchTitle) == 0)
        {
            printf("\nEnter New Director: ");
            scanf("%s", m[i].director);

            printf("Enter New Release Year: ");
            scanf("%d", &m[i].releaseYear);

            printf("Enter New Genre: ");
            scanf("%s", m[i].genre);

            printf("\nMovie Updated Successfully!\n");
            return;
        }
    }

    printf("\nMovie Not Found\n");
}