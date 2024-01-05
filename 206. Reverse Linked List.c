/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    struct ListNode* nextt = NULL;
    while (temp!=NULL) {
        nextt=temp->next;
        temp->next = prev;
        prev=temp;
        temp = nextt;
    }
    // head = prev;
    return prev;
}
