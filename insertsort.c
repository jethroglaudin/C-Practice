#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

typedef struct node
{
    int n;

    struct node* next;
}
node;

node* head = NULL;

void insert_sorted(int i)
{
    node* new = malloc(sizeof(node));

    if (new == NULL)
    {
        exit(1);
    }

    // intialize new node
    new->n = i;
    new->next = NULL;

    // traverse list with two pointers
    node* prev = NULL;

    for (node* curr = head; curr != NULL; curr = curr->next)
    {
        // break if we find a value larger than i
        if (curr-> n > i)
        {
            break;
        }
        else 
        {
            prev = curr;
        }
    }

    // if new belongs at head, prepend
    if (prev == NULL)
    {
        new->next = head;
        head = new;
    }
    // else insert in middle or end
    else 
    {
        new->next = prev->next;
        prev->next = new;
    }

}


int main(int argc, char* argv[])
{
    printf("Inserting %i random ints to the list...\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        insert_sorted(rand() % SIZE);
    }
    printf("done!\n");

    printf("Your list now contains: ");
    for (node* ptr = head; ptr != NULL; ptr = ptr ->next)
    {
        printf("%i ", ptr->n);
    }
    printf("\n");

    return 0;

}