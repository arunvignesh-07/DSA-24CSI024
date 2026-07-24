/*
-----------------------------------------
Name        : Arunvignesh R S
Department  : Artificial Intelligence and Data Science
Experiment  : Implementation of List ADT Using Structure
Language    : C
-----------------------------------------
*/
#include <stdio.h>

#define MAX 100

struct List
{
    int arr[MAX];
    int size;
};

void initialize(struct List *l)
{
    l->size = 0;
}

void insert(struct List *l, int pos, int value)
{
    if (l->size == MAX)
    {
        printf("List is Full!\n");
        return;
    }

    if (pos < 0 || pos > l->size)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = l->size; i > pos; i--)
        l->arr[i] = l->arr[i - 1];

    l->arr[pos] = value;
    l->size++;

    printf("Element inserted successfully.\n");
}

void delete(struct List *l, int pos)
{
    if (l->size == 0)
    {
        printf("List is Empty!\n");
        return;
    }

    if (pos < 0 || pos >= l->size)
    {
        printf("Invalid Position!\n");
        return;
    }

    for (int i = pos; i < l->size - 1; i++)
        l->arr[i] = l->arr[i + 1];

    l->size--;

    printf("Element deleted successfully.\n");
}

void update(struct List *l, int pos, int value)
{
    if (pos < 0 || pos >= l->size)
    {
        printf("Invalid Position!\n");
        return;
    }

    l->arr[pos] = value;

    printf("Element updated successfully.\n");
}

void display(struct List *l)
{
    if (l->size == 0)
    {
        printf("List is Empty!\n");
        return;
    }

    printf("List Elements: ");

    for (int i = 0; i < l->size; i++)
        printf("%d ", l->arr[i]);

    printf("\n");
}

int main()
{
    struct List list;
    initialize(&list);

    int choice, pos, value;

    while (1)
    {
        printf("\n----- LIST ADT USING STRUCTURE -----\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Update\n");
        printf("4. Display\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter position: ");
            scanf("%d", &pos);

            printf("Enter value: ");
            scanf("%d", &value);

            insert(&list, pos, value);
            break;

        case 2:
            printf("Enter position to delete: ");
            scanf("%d", &pos);

            delete(&list, pos);
            break;

        case 3:
            printf("Enter position to update: ");
            scanf("%d", &pos);

            printf("Enter new value: ");
            scanf("%d", &value);

            update(&list, pos, value);
            break;

        case 4:
            display(&list);
            break;

        case 5:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
