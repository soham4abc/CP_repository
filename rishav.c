// C program for the above approach
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandom(int N)
{
    // Initialize counter
    int i = 0;
    int randomizer = 0;

    // Get random() dynamic
    srand((unsigned int)(time(NULL)));

    const char num[] = "0123456789";

    const char sml[] = "abcdefghijklmnoqprstuvwyzx";

    const char cpl[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

    const char sym[] = "!@#$^&*?-_\\/%";

    // Stores the random password
    char password[N];

    randomizer = rand() % 4;

    // Iterate over the range [0, N]
    printf("Password-> ");

    for (i = 0; i < N; i++)
    {

        if (randomizer == 1)
        {
            password[i] = num[rand() % 10];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 2)
        {
            password[i] = sym[rand() % 8];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else if (randomizer == 3)
        {
            password[i] = cpl[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
        else
        {
            password[i] = sml[rand() % 26];
            randomizer = rand() % 4;
            printf("%c", password[i]);
        }
    }
}

void showTime()
{
    // time_t rawtime;
    // struct tm *timeinfo;

    // time(&rawtime);
    // timeinfo = localtime(&rawtime);
    // printf("Current local time and date: %s", asctime(timeinfo));

    time_t now = time(NULL);
    struct tm *tm_struct = localtime(&now);
    struct tm *localtime_r(const time_t *timep, struct tm *result);

    char *weekday[] = {"Sunday", "Monday",
                       "Tuesday", "Wednesday",
                       "Thursday", "Friday", "Saturday"};

    int hour = tm_struct->tm_hour;
    int min = tm_struct->tm_min;
    int wday = tm_struct->tm_wday;
    char pm='p';
    char am='a';

    char isAmOrPm=am;
    if (hour > 12)
        isAmOrPm=pm;
    printf("It's %d:%d, %c%s, %s", hour, min, isAmOrPm,"m", weekday[wday]);
}

void menu()
{
    printf("#########################\n");
    printf("Simple Password Generator\n");
    showTime();
    printf("\n");
    printf("#########################\n");
    printf("\n");
    printf("\n");

    printf("Choose length of password: ");
}

int main()
{

    int N;

    menu();

    scanf("%d", &N);
    printf("\n\n");

    if (N > 3 && N < 65)
        generateRandom(N);
    else
    {
        printf("Bye bye!");
        return EXIT_SUCCESS;
    }

    return 0;
}
