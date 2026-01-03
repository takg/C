#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

/* Recursive function to print the linked list */
void printList(struct Node *head)
{
    if (head == NULL)   // base case
        return;

    printf("%d -> ", head->data);
    printList(head->next);   // recursive call
}

/* Helper function to create a new node */
struct Node* createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        fprintf(stderr, "\n Issue allocating memory in createNode().");
        return NULL;
    }

    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int main()
{
    /* Creating linked list: 10 -> 20 -> 30 -> 40 -> NULL */
    struct Node *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    printf("Linked List: ");
    printList(head);
    printf("NULL\n");

    return 0;
}
