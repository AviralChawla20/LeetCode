/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 struct ListNode* push(struct ListNode* head, struct ListNode* tail, int value) {
    struct ListNode* new = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* tempp = tail;
    new->val = value;
    new->next = NULL;

    if (tempp!=NULL) {
        tail->next = new;

    }
    tail = new;
    return tail;
 }
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* l3 = NULL;
    struct ListNode* tail = NULL;
    struct ListNode* temp1 = l1;
    struct ListNode* temp2 = l2;
    int carry =0;
    while ((temp1!=NULL)&&(temp2!=NULL)) {
        int sum = temp1->val + temp2->val;
        if (carry!=0) {
            sum = sum + carry;
            carry =0;
        }
        if ((sum)>9) {
            carry = sum/10;
            sum = sum%10;
        }
        
        tail = push(l3,tail, sum);
        if (l3==NULL) {
            l3 = tail;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
        printf("1\n");
        
    }
    while (temp1!=NULL) {
        int sum = temp1->val;
        if (carry!=0) {
            sum = sum + carry;
            carry =0;
        }
        if ((sum)>9) {
            carry = sum/10;
            sum = sum%10;
        }
        printf("2\n");
        tail = push(l3,tail, sum);
        temp1 = temp1->next;
    }
    while (temp2!=NULL) {
        int sum = temp2->val;
        if (carry!=0) {
            sum = sum + carry;
            carry =0;
        }
        if ((sum)>9) {
            carry = sum/10;
            sum = sum%10;
        }
        printf("3\n");
        tail = push(l3,tail, sum);
        temp2 = temp2->next;
    }
    if (carry!=0) {
        tail = push(l3,tail,carry);
    }
    return l3;
}
