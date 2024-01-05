/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head){
    struct ListNode* temp = head;
    int len=0;
    while (temp!=NULL) {
        len++;
        temp = temp->next;
    }
    struct ListNode* temp2 = head;
    for (int i=0; i<((len/2)+1)-1;i++) {
        temp2 = temp2->next;
    }
    return temp2;
}
