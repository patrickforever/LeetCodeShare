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
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB)
{
    struct ListNode *pheadACur, *pheadBCur, *pNewlist;
    if(!headA || !headB)
        return NULL;
    pNewlist = (struct ListNode*)malloc(sizeof(struct ListNode));
    pNewlist = NULL;
    pheadACur = headA;
    pheadBCur = headB;
    while(pheadACur && pheadBCur)
    {
        if(pheadACur->val == pheadBCur->val)
        {
            pNewlist = pheadACur;
            break;
        }
        else if(pheadACur->val > pheadBCur->val)
            pheadBCur = pheadBCur->next;

        else
            pheadACur = pheadACur->next;

    }
    return pNewlist;
}
