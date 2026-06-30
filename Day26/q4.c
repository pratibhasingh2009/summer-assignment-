#include<stdio.h>
int main(){
    int ans,score=0;
    printf("-----Quiz game-----\n");
    printf("\nQ1. Capital of India?\n");
    printf("1. Mumbai\n 2. Delhi\n 3. Luckmow\n 4. Chennai\n");
    scanf("%d",&ans);
    if(ans==2){
        score++;
    }
    printf("\nQ2. Which planet in our solar system is known as the Red Planet?\n");
    printf("1. Mars\n 2. Venus\n 3. Jupiter\n 4. Saturn\n");
    scanf("%d",&ans);
    if(ans==1){
        score++;
    }
    printf("\nQ3. What is the largest animal to have ever lived on Earth?");
    printf("1. Blue Whale\n 2. Elephant\n 3. Giraffe\n 4. Great White Shark\n");
     scanf("%d",&ans);
    if(ans==1){
        score++;
    }
    printf("\n Final Score =%d/3\n",score);
    
    return 0;
} 





/*
second method--

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
        {
            printf("\nQ1. Capital of India?\n");
            printf("1. Delhi\n2. Mumbai\n3. Chennai\n4. Kolkata\n");
            scanf("%d", &ans);

            if(ans == 1)
                score++;
        }

        else if(i == 2)
        {
            printf("\nQ2. 5 + 3 = ?\n");
            printf("1. 6\n2. 7\n3. 8\n4. 9\n");
            scanf("%d", &ans);

            if(ans == 3)
                score++;
        }

        else if(i == 3)
        {
            printf("\nQ3. C language was developed by?\n");
            printf("1. Dennis Ritchie\n2. James Gosling\n3. Guido van Rossum\n4. Bjarne Stroustrup\n");
            scanf("%d", &ans);

            if(ans == 1)
                score++;
        }
    }
    printf("\nYour Score = %d/%d\n", score, n);

    return 0;
}
    */