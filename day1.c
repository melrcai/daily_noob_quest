#include <stdio.h>
#include <string.h>
#include <ctype.h>

// case-sensitive function 
void toLowerCase(char mssg[]) {
    for (int i = 0; mssg[i] != '\0'; i++) {
        mssg[i] = tolower(mssg[i]);
    }
}

int countMatches(char input[], char sample[]) {
    int count = 0;
    if (strstr(input, "free") && strstr(sample, "free")) count++;
    if (strstr(input, "money") && strstr(sample, "money")) count++;
    if (strstr(input, "win") && strstr(sample, "win")) count++;
    if (strstr(input, "offer") && strstr(sample, "offer")) count++;
    if (strstr(input, "click") && strstr(sample, "click")) count++;
    return count;
}

int main(void) {

    char mssg[200];
    char *spam[] = {"win money now", 
                    "free offer click",
                    "claim your prize"};

    char *notSpam[] = {"how are you", 
                       "u fine?", 
                       "wanna grab sum coffee"};


    printf("Enter a message btch: ");
    fgets(mssg, sizeof(mssg), stdin);
    mssg[strcspn(mssg, "\n")] = 0;

    toLowerCase(mssg);
    
    int maxSpam = 0, maxNotSpam = 0;

    for (int i = 0; i < 3; i++) {
        int score = countMatches(mssg, spam[i]);
        if (score > maxSpam)
            maxSpam = score;
    }

    for (int i = 0; i < 3; i++) {
        int score = countMatches(mssg, notSpam[i]);
        if (score > maxNotSpam)
            maxNotSpam = score;
    }

    printf("Spam score: %d\n", maxSpam);
    printf("Not Spam score: %d\n", maxNotSpam);
    
    if (maxSpam > maxNotSpam)
        printf("SPAM\n");
    else
        printf("NOT SPAM\n");

    return 0;
}