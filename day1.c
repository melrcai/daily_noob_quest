#include <stdio.h>
#include <string.h>
#include <ctype.h>

// case-sensitive function 
int toLowerCase(char mssg[]) {
    for (int i = 0; mssg[i] != '\0'; i++) {
        mssg[i] = tolower(mssg[i]);
    }
    return 0;
}

int main(void) {

    char mssg[200];
    char *keywords[] = {"free", "win", "money", "offer", "click"};
    int weights[] = {3, 2, 4, 2, 1};
    int score = 0;
    int found = 0; // not found

    printf("Enter a message btch: ");
    fgets(mssg, sizeof(mssg), stdin);
    mssg[strcspn(mssg, "\n")] = 0;

    toLowerCase(mssg);
    for (int i = 0; i < 5; i++) {
        if(strstr(mssg, keywords[i]) != NULL) { //keyword[i] here represents the whole word
          score += weights[i];
          found = 1;
          printf("Found: %s (%d)\n", keywords[i], weights[i]);
       }
    }

    printf("Score: %d\n", score); 
    if (score >= 5) {
        printf("this message is a spam btch.\n");
    } else {
        printf("u safe. not a spam hehez.");
    }


    return 0;
}