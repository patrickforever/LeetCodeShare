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
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode *pCur , *pNext , *pPre;
    if(!head)
        return NULL;
    pCur = head;
    pPre = NULL;
    while(pCur && pCur->next)
    {
        pNext = pCur->next;
        pCur->next = pNext->next;
        if(pPre){
            pPre->next = pNext ;
        }
        else
            head = pNext;


        pNext->next = pCur;
        pPre = pCur;
        pCur = pCur->next;
    }
    return head;
}
