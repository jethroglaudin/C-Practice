#include <stdbool.h>
#include <stdio.h>
#include<stdlib.h>

#define SIZE 5

typedef struct node
{
    // the value to store in this node
    int n;

    // the link ot the next node in the list
    struct node* next;
}
node;

node* head = NULL;

bool contains(int i)
{
   for (node* ptr = head; ptr != NULL; ptr = ptr->next)
   {
       if(ptr->n == i)
       {
           return true;
       }
      
   }
   return false;

}

int main(int argc, char* argv[])
{
    // create a linked list
    for (int i = SIZE;  i > 0; i--)
    {
        node* new = malloc(sizeof(node));

        if(new == NULL)
        {
            exit(1);
        }
        new->n = i;
        new->next = head;
        head = new;
    }

    printf("What value are you looking for? ");
    char *value = malloc(sizeof(int));;
    scanf("%s", value);
    int i = atoi(value);
    free(value);

    if (contains(i))
    {
        printf("Found it! The list contain ");
    }
    else 
    {
        printf("Sorry, this list only contains ");
    }
    for (node* ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");
    return 0;
}