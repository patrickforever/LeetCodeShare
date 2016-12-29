#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <math.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *pCur , *pTemp;
    if(!head)
        return NULL;
    pCur = head;
    while(pCur)
    {
        if(!pCur->next)
            break;
        if(pCur->val != pCur->next->val)
            pCur = pCur->next;
        else
        {
            pTemp = pCur->next;
            pCur->next = pTemp->next;
            free(pTemp);
        }

    }
    return head;
}
