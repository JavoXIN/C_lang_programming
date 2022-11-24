/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

struct name {
    char first_name[20];
    char middle_name[20];
    char last_name[20];
};

struct identity {
    char number[20];
    struct name handle;
};

void printing(struct identity array[]);

int main(void)
{
    struct identity array[5] = {
        {"302039823", {"Bethany", "Danny", "Chloe"}},
        {"001", {"Mc", "Joshua", "Klint"}},
        {"002", {"Mc", "", "Sara"}},
        {"003", {"Mc", "Jon", "Clara"}},
        {"004", {"Mc", "G", "P"}}
    };

    printing(array);

    return 0;
}

void printing(struct identity array[])
{
    for (int i = 0; i < 5; i++)
    {
        if (strcmp(array[i].handle.middle_name, "") != 0)
            printf("%s, %s %c. -- %s\n", array[i].handle.last_name, array[i].handle.first_name, array[i].handle.middle_name[0], array[i].number);
        else
            printf("%s, %s -- %s\n", array[i].handle.last_name, array[i].handle.first_name, array[i].number);
    }
}