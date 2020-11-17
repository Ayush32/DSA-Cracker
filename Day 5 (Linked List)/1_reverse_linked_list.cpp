/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
ListNode *reverseList(ListNode *head)
{
    ListNode *newHead = NULL;
    while (head != NULL)
    {
        ListNode *nextNode = head->next;
        head->next = newHead;
        newHead = head;
        head = nextNode;
    }
    return newHead;
}
s