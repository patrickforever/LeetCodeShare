/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode *pFast , *pSlow , *pPre;
    pFast = head;
    pSlow = head;
    pPre = NULL;
    while(pFast && n-->0)
    {
        pFast = pFast->next;
    }
    while(pFast)
    {
        pPre = pSlow;
        pSlow = pSlow->next;
        pFast = pFast->next;
    }
    if(pPre == NULL)
        head = head->next;
    else
    {
        pPre->next = pSlow->next;
        free(pSlow);
    }
    return head;
}
