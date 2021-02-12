/**
 * @file main.c
 * @author Bunyamin TAMAR (bunyamintamar@yandex.com)
 * @brief 
 * @version 0.1
 * @date 2021-02-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/**
 * @brief Singly linked list structure
 * 
 */
struct SinglyLinkedList
{
    int data;
    struct node *next;
};


/**
 *	print_list function
 *	@param	: *list		<	pointer of the root list
 *	@return	: none
 */
void print_list(struct SinglyLinkedList *list)
{
    printf("H->");

    while(list)							/*!< WHILE list pointer is NOT NULL */
    {
        printf("%d->", list->data);		/*!< printf data */
        list = list->next;				/*!< next pointer will be current pointer */
    }

    printf("|||\n\n");
}


/**
 *	Insert new element at the end of the linked list
 *	@param	: **list	< pointer of pointer of the linked list
 *	@param	: value		< new element
 */
void insert_end(struct node **list, int value)
{
    struct SinglyLinkedList *new_node	= NULL;										/*!< pointer of new node */
    struct SinglyLinkedList *last		= NULL;										/*!< pointer of the last node */

    new_node = (struct SinglyLinkedList *)malloc(sizeof(struct SinglyLinkedList));	/*!< memory allocation for new node */

    if (new_node == NULL)															/*!< Check the memory */
    {
        printf("Failed to insert element. Out of memory");							/*!< Alert for out of memory */
    }

    new_node->data = value;															/*!< value to new_node->data */
    new_node->next = NULL;

    if( *list == NULL)																/*!< Check the list if it is NULL */
    {
        *list = new_node;
        return;
    }
    
    /* NOT NULL */
    last = *list;																	/*!< pointer of the root */
    
    /* if last->next is NULL, last is the real last */
    while(last->next) last = last->next;

    last->next = new_node;															/*!< new_node is last node */
}

void main()
{
    struct SinglyLinkedList * LinkedList = NULL;

    insert_end(&LinkedList, 10);
    insert_end(&LinkedList, 20);
    insert_end(&LinkedList, 30);
    insert_end(&LinkedList, 40);

    printf("List after insertion: ");
    print_list(LinkedList);

    getch();
}
