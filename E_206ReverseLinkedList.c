/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *pPre, *pCur ,*pNext;
    pPre = NULL;
    if(!head)
        return NULL;
    pCur = head;
    while(pCur)
    {
        pNext = pCur->next;
        pCur->next = pPre;
        pPre = pCur;
        pCur = pNext;
    }
    return pPre;
}
struct ListNode* reverseList(struct ListNode* head) {
        if (!head || !(head -> next)) return head;
        struct ListNode* node = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;
        return node;
}
