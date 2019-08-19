#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
    int n; 
    // the link tot he next node in the list
    struct node* next;
}
node;

node* head = NULL;

void append(int i)
{
    // Todo
    node* new = malloc(sizeof(node));
    
    // check if new node is NULL
    if (new == NULL)
    {
        exit(1);
    }
    //initialize new node
    new->n = i;
    new->next = NULL;

    // traverse list with two pointers
    node* prev = NULL;
    for (node* curr = head; curr != NULL; curr = curr->next)
    {
        prev = curr;
    }
    // if the list is empty, prepend
    if(prev == NULL)
    {
        head = new;
    }

    // else add new node to end of list
    else
    {
        prev->next = new;
    }
}

int main(int argc, char* argv[])
{
    // creating list
    printf("Appending ints 0-%i on to the list...\n", SIZE - 1);
    for (int i = 0; i < SIZE; i++)
    {
        append(i);
    }
    printf("done!\n");

    // printing out lists
    printf("Your list contains ");
    for (node* ptr = head; ptr != NULL; ptr = ptr->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");
    
    return 0;
}