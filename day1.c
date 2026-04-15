#include <stdio.h>
#include <string.h>
#include <ctype.h>

// lowercase
void toLowerCase(char str[]) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

// count common keywords
int countMatches(char input[], char sample[]) {
    int count = 0;

    if (strstr(input, "free") && strstr(sample, "free")) count++;
    if (strstr(input, "money") && strstr(sample, "money")) count++;
    if (strstr(input, "win") && strstr(sample, "win")) count++;
    if (strstr(input, "offer") && strstr(sample, "offer")) count++;
    if (strstr(input, "click") && strstr(sample, "click")) count++;

    return count;
}

int main() {

    char input[200];

    char *spam[] = {
        "win money now",
        "free offer click",
        "claim your prize"
    };

    char *notSpam[] = {
        "how are you",
        "u fine",
        "wanna grab coffee"
    };

    int scores[6];
    int labels[6]; // 1 = spam, 0 = not spam

    printf("Enter message: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = 0;

    toLowerCase(input);

    int index = 0;

    // spam scores
    for (int i = 0; i < 3; i++) {
        scores[index] = countMatches(input, spam[i]);
        labels[index] = 1;
        index++;
    }

    // not spam scores
    for (int i = 0; i < 3; i++) {
        scores[index] = countMatches(input, notSpam[i]);
        labels[index] = 0;
        index++;
    }

    printf("\n--- All Scores ---\n");
    for (int i = 0; i < 6; i++) {
        printf("Score[%d] = %d (label = %s)\n",
               i,
               scores[i],
               labels[i] ? "SPAM" : "NOT");
    }

    int spamVotes = 0, notSpamVotes = 0;

    // get TOP 3
    for (int k = 0; k < 3; k++) {
        int maxIndex = -1;
        int maxValue = -1;

        for (int i = 0; i < 6; i++) {
            if (scores[i] > maxValue) {
                maxValue = scores[i];
                maxIndex = i;
            }
        }

        printf("\nPicked: Score = %d (%s)\n",
               maxValue,
               labels[maxIndex] ? "SPAM" : "NOT");

        if (labels[maxIndex] == 1)
            spamVotes++;
        else
            notSpamVotes++;

        scores[maxIndex] = -1; // mark as used
    }

    printf("\nVotes → Spam: %d | Not Spam: %d\n", spamVotes, notSpamVotes);

    if (spamVotes > notSpamVotes)
        printf("\nFINAL: SPAM\n");
    else
        printf("\nFINAL: NOT SPAM\n");

    return 0;
}