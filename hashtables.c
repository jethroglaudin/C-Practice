#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int hash_function(char* key, int size)
{
    // initialize index to 0
    int index = 0;
    // sum ascii values
    for (int i = 0; key[i] != '\0'; i++)
    {
        index += toupper(key[i]);
    }
    // mod by size to stay w/in bound of table
    return index % size;
}

int main(int argc, char* argv[])
{
    // get hash table size
    char value[10];
    printf("Hash table size: ");
    scanf("%s", value);
    int size = atoi(value);
    // get key
    char txt[10];
    printf("Key: ");
    scanf("%s", txt);
    char* key = txt;
    // calculate and print  index
    printf("The string '%s' is mapped to index %i\n", key, hash_function(key, size));

    return 0;
}