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
struct ListNode* removeElements(struct ListNode* head, int val)
{
    struct ListNode *pNewList , *pCur , *pNext , *pPre;
    pNewList = (struct ListNode*) malloc(sizeof(struct ListNode));
    pNewList->val = INT_MAX;
    pNewList->next = head;
    pPre = pNewList;
    pCur = pNewList->next;
    while(pCur)
    {
        pNext = pCur->next;
        if(pCur->val == val)
        {
            pPre -> next = pCur->next;
            free(pCur);
        }
        else
        {
            pPre = pCur;
        }
        pCur = pNext;
    }
    return pNewList->next;

}
