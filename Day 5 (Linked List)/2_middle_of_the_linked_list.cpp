/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
Node *reverseList(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}