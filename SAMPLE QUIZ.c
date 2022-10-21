#include<stdio.h>
#include<math.h>

int main () {
    int answer, score = 0, wrong = 0, correct = 0;

    printf("*********SAMPLE QUIZ*********\n\n");
    printf("Q1. 1 + 1 = ?");
    printf("\n1)2\t\t2)3");
    printf("\n3)0\t\t4)11");
    printf("\nAnswer Selected: ");
    scanf("%d",&answer);
    if (answer == 1)
    {
        score+=5;
        correct++;
    }
    else
    {
        wrong++;
    }
    printf("____________________\n");
    printf("Q2. 5 * 5 = ?");
    printf("\n1)10\t\t2)20");
    printf("\n3)25\t\t4)50");
    printf("\nAnswer Selected: ");
    scanf("%d",&answer);
    if (answer == 3)
    {
        score+=5;
        correct++;
    }
    else
    {
        wrong++;
    }
    printf("____________________\n");
    printf("Q3. 3^3 = ?");
    printf("\n1)6\t\t2)27");
    printf("\n3)9\t\t4)3");
    printf("\nAnswer Selected: ");
    scanf("%d",&answer);
    if (answer == 2)
    {
        score+=5;
        correct++;
    }
    else
    {
        wrong++;

    }
    printf("____________________\n");
    printf("Q4. 4 / 0 = ?");
    printf("\n1)0\t\t2)4");
    printf("\n3)1\t\t4)Cannot be divided");
    printf("\nAnswer Selected: ");
    scanf("%d",&answer);
    if (answer == 4)
    {
        score+=5;
        correct++;
    }
    else
    {
        wrong++;
    }
    printf("*********RESULTS*********\n\n");
    printf("Your Score: %d/20\n",score);
    printf("Your Correct Answer/s: %d/4\n",correct);
    printf("Your Wrong Answer/s: %d/4",wrong);

    return 0;
}
