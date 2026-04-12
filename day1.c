#include <stdio.h>
#include <string.h>
#include <ctype.h>

// case-sensitive function 
void toLowerCase(char mssg[]) {
    for (int i = 0; mssg[i] != '\0'; i++) {
        mssg[i] = tolower(mssg[i]);
    }
}

int main(void) {

    char mssg[200];
    char *keywords[] = {"free", "win", "money", "offer", "click"};
    double spamWeight[] = {0.8, 0.7, 0.9, 0.6, 0.65};
    double notSpamWeight[] = {0.2, 0.3, 0.1, 0.4, 0.35};
    double spamProb = 0.5;
    double notSpamProb = 0.5;
    int found = 0; // not found

    printf("Enter a message btch: ");
    fgets(mssg, sizeof(mssg), stdin);
    mssg[strcspn(mssg, "\n")] = 0;

    toLowerCase(mssg);

    for (int i = 0; i < 5; i++) {
        if(strstr(mssg, keywords[i]) != NULL) { //keyword[i] here represents the whole word
          spamProb *= spamWeight[i];
          notSpamProb *= notSpamWeight[i];
          found = 1;
          printf("Found: %s \n", keywords[i]);
       }
    }
    printf("Spam Prob: %.5f\n", spamProb);
    printf("Not Spam Prob: %.5f\n", notSpamProb);
    
    if (!found) { //f no keyw is found, the if will nver run thus found stays 0
        printf("no keywords found hehsz \n");
    }

    if (spamProb > notSpamProb) {
        printf("this message is a spam btch.\n");
    } else {
        printf("u safe. not a spam hehez.");
    }


    return 0;
}