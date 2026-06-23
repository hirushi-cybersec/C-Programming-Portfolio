#include<stdio.h>
#include<string.h>

char tasks[100][100];
int taskcount=0;
void delete(int tasknum)
{
    int i;
    for(i=tasknum-1 ; i<taskcount-1; i++)
    {
        strcpy(tasks[i], tasks[i+1]);
    }
    taskcount--;
    printf("Task %d deleted!\n", tasknum);
}
int main()
{
    char input[100];

    int choice=0;

    char YesNo;
    int i;
    int deletetask;



    while (choice!=4)
    {
        printf("Hello TODo list\n");
        printf("\tADD = 1\n");
        printf("\tSHOW = 2\n");
        printf("\tDELETE = 3\n");
        printf("\tEXIT = 4\n\n");

        printf("What is your choice? (ex-1): ");
        scanf("%d",&choice);

        if (choice==1)
        {
            printf("what would you like to add ? :");
            scanf(" %[^\n]", input);
            strcpy(tasks[taskcount], input);
            taskcount++;
            printf("Task added: %s\n",input);
            printf("Total tasks = %d\n",taskcount);
            printf("\n\n");
        }
        else if (choice==2)
        {
            printf("Would you like to show your list? [y/n]: ");
            scanf(" %c", &YesNo);
            if(YesNo=='y')
            {
                if(taskcount==0)
                {
                    printf("no tasks yet!\n");
                }
                else
                {
                    for(i=0; i<taskcount; i++)
                    {
                        printf("\t%d. %s\n", i+1, tasks[i]);


                    }
                    printf("\n");
                }

            }

        }
        else if (choice==3)
        {
            printf("Which tasks would you like to delete? ");
            scanf(" %d",&deletetask);
            if(taskcount==0)
            {
                printf("no tasks to delete!\n");
            }
            else
            {
               delete(deletetask);
            }

        }
    }


}
