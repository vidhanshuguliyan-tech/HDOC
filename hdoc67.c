//1

#include <stdio.h>

int main()
{
    FILE *fp;
    int num, count = 0;
    int sum = 0;
    float average;

    fp = fopen("numbers.txt", "r");

    if(fp == NULL)
    {
        printf("File not found");
        return 1;
    }

    while(fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
        count++;
    }

    if(count > 0)
    {
        average = (float)sum / count;

        printf("Sum = %d\n", sum);
        printf("Average = %.2f", average);
    }
    else
    {
        printf("File contains no numbers");
    }

    fclose(fp);

    return 0;
}
//2

#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll, marks, n;

    scanf("%d", &n);

    fp = fopen("students.txt", "w");

    if(fp == NULL)
    {
        printf("File error");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%49s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }

    fclose(fp);

    fp = fopen("students.txt", "r");

    if(fp == NULL)
        return 1;

    while(fscanf(fp, "%49s %d %d",
                 name, &roll, &marks) == 3)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}
