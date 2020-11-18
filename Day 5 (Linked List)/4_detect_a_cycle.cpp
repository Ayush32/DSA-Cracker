/*
 *   Copyright (c) 2020 
 *   All rights reserved.
 */
bool detectCycle(ListNode *head)
{
    if (head == NULL || head->next == NULL)
        return true;

    ListNode *slow = head;
    ListNode *fast = head;
    while (fast->next != NULL && fast->next->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            return true;
    }
    return false;
}