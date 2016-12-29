/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode *pFast ,*pSlow ,*pTemp , *pPre;
    if(!head || !head->next)
        return true;
    pSlow = head;
    pFast = head->next;
    pPre = NULL;
    while(true)
    {
        if(!pFast->next)
        {
            pFast = pSlow->next;
            pSlow->next = pPre;
            break;
        }
        else if(!pFast->next->next)
        {
            pFast = pSlow->next->next;
            pSlow->next = pPre;
            break;
        }
        else
        {
            pFast = pFast->next->next;
            pTemp = pSlow->next;
            pSlow->next = pPre;
            pPre = pSlow;
            pSlow = pTemp;
        }
    }
    while(pSlow && pFast)
    {
        if(pSlow->val != pFast->val)
            return false;
        pSlow = pSlow->next;
        pFast = pFast->next;
    }
    return true;
}
