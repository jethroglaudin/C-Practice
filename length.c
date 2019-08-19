#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

typedef struct node
{
    // the value to store in this node
    int n;

    // the link to the next node in the list
    struct node* next;
}
node;

node* head = NULL;

int length(void)
{
    int length = 0;
    node* current = head;
    while (current != NULL)
    {
        length++;
        current = current->next; 
    }
    return length;
}

int main(int argc, char* argv[])
{
    // create linked list
    for (int i = 0; i < SIZE; i++)
    {
        // initialize new node with data
        node* new = malloc(sizeof(node));  
        // check to make sure the malloc'ed new node isnt NULL
        if (new == NULL)
        {
            exit(1);
        }
        new->n = i;
        new->next = head;
        head = new;
    }
    printf("Making sure that lists length is %i...\n", SIZE);

    // test length
    assert(length() == SIZE);
    printf("good!\n");

    return 0;
}