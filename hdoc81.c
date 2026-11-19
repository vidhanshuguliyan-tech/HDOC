
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
