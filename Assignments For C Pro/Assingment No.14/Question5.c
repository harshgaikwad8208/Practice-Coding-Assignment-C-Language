// Movie Database: Create a program that uses structures to manage a movie database with details like title, director, release year, and genre. Allow users to add, search for, and update movie records.

#include <stdio.h>
#include <string.h>

// Define the Movie structure
struct Movie {
    char title[100];
    char director[100];
    int releaseYear;
    char genre[50];
};

int main() {
    int maxMovies = 100; // Maximum number of movies in the database
    struct Movie database[maxMovies];
    int numMovies = 0; // Current number of movies in the database

    while (1) {
        int choice;

        printf("\nMovie Database Menu:\n");
        printf("1. Add a Movie\n");
        printf("2. Search for a Movie\n");
        printf("3. Update Movie Details\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (numMovies < maxMovies) {
                    struct Movie newMovie;
                    printf("Enter Movie Details:\n");
                    printf("Title: ");
                    scanf(" %[^\n]", newMovie.title);
                    printf("Director: ");
                    scanf(" %[^\n]", newMovie.director);
                    printf("Release Year: ");
                    scanf("%d", &newMovie.releaseYear);
                    printf("Genre: ");
                    scanf(" %[^\n]", newMovie.genre);

                    database[numMovies] = newMovie;
                    numMovies++;
                    printf("Movie added to the database.\n");
                } else {
                    printf("The database is full. Cannot add more movies.\n");
                }
                break;

            case 2:
                if (numMovies > 0) {
                    char searchTitle[100];
                    printf("Enter the title to search for: ");
                    scanf(" %[^\n]", searchTitle);

                    int found = 0;
                    for (int i = 0; i < numMovies; i++) {
                        if (strcmp(database[i].title, searchTitle) == 0) {
                            found = 1;
                            printf("Movie found in the database:\n");
                            printf("Title: %s\n", database[i].title);
                            printf("Director: %s\n", database[i].director);
                            printf("Release Year: %d\n", database[i].releaseYear);
                            printf("Genre: %s\n", database[i].genre);
                            break;
                        }
                    }

                    if (!found) {
                        printf("Movie not found in the database.\n");
                    }
                } else {
                    printf("The database is empty. Cannot search for movies.\n");
                }
                break;

            case 3:
                if (numMovies > 0) {
                    char updateTitle[100];
                    printf("Enter the title to update: ");
                    scanf(" %[^\n]", updateTitle);

                    int found = 0;
                    for (int i = 0; i < numMovies; i++) {
                        if (strcmp(database[i].title, updateTitle) == 0) {
                            found = 1;
                            printf("Enter updated details for the movie:\n");
                            printf("Title: ");
                            scanf(" %[^\n]", database[i].title);
                            printf("Director: ");
                            scanf(" %[^\n]", database[i].director);
                            printf("Release Year: ");
                            scanf("%d", &database[i].releaseYear);
                            printf("Genre: ");
                            scanf(" %[^\n]", database[i].genre);
                            printf("Movie details updated.\n");
                            break;
                        }
                    }

                    if (!found) {
                        printf("Movie not found in the database.\n");
                    }
                } else {
                    printf("The database is empty. Cannot update movie details.\n");
                }
                break;

            case 4:
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }

    return 0;
}
