/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode* temp = head;
    int len=0;
    while (temp!=NULL) {
        len++;
        temp = temp->next;
    }
    if (len==n) {
        head = head->next;
    }
    else {
        struct ListNode* prev = head;
        struct ListNode* current = head;
        for (int i=0; i<((len-n)-1);i++) {
            prev = prev->next;
        }
        for (int i=0; i<(len-n);i++) {
            current  = current->next;
        }
        prev->next = current->next;
    }
    return head;
}
