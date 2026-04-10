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
    int spamCount = 0;

    printf("Enter a message btch: ");
    fgets(mssg, sizeof(mssg), stdin);
    mssg[strcspn(mssg, "\n")] = 0;

    toLowerCase(mssg);
    for (int i = 0; i < 5; i++) {
       if(strstr(mssg, keywords[i]) != NULL) { //keyword[i] here represents the whole word
           spamCount++; 
       }
    }
    if (spamCount >= 2) {
        printf("this message is a spam btch.\n");
    } else {
        printf("u safe. not a spam hehez.");
    }

    return 0;
}