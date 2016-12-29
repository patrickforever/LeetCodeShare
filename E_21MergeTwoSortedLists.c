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
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *pNewList , *pNewNode , *pCur;

    if(!l1 || !l2)
        return l1?l1:l2;
    while(l1 && l2)
    {
        //pNewList = pCur = NULL;
        //pNewNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        if(l1 && l2)
        {
            if(l1->val > l2->val)
            {
                pNewNode = l2;
                l2 = l2->next;
            }
            else
            {
                pNewNode = l1;
                l1 = l1->next;
            }
            if(!pNewList)
            {
                pNewList = pNewNode;
                pCur = pNewList;
            }
            else
            {
                pCur->next = pNewNode;
                pCur = pCur->next;
            }
        }
    }
    if(l1)
        pCur->next = l1;
    else if(l2)
        pCur->next = l2;
    return pNewList;
}
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    if(!l1)
        return l2;
    if(!l2)
        return l1;
    if(l1->val > l2->val){
        l2->next = mergeTwoLists(l1,l2->next);
        return l2;
    }
    else{
        l1->next = mergeTwoLists(l1->next,l2);
        return l1;
    }
}
