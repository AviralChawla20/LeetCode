/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 #include <math.h>
bool isPalindrome(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* temp2 = head;
    struct ListNode* temp3 = head;
    long long int len=0;
    long long int n1=0;
    long long int n2=0;
    struct ListNode* prev = NULL;
    struct ListNode* next = NULL;
    while (temp2!=NULL) {
        len++;
        temp2=temp2->next;
    }
    int a1[len];
    int a2[len];
    long long int i=len;
    for (int j=0; j<len; j++) {
        // n1 = n1 + ((temp3->val)*pow(10,i));
        a1[j] = temp3->val;
        temp3=temp3->next;
        // i--;
    }
    i=len;
    while (temp!=NULL) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    struct ListNode* temp4 = prev;
    
    // printf("len: %d\n",len);
    
    for (int j=0; j<len; j++) {
        // n2 = n2 + ((temp4->val)*pow(10,i));
        a2[j] = temp4->val;
        temp4=temp4->next;
        // i--;
    }
    for (int k=0; k<len; k++) {
        if (a1[k]!=a2[k]){
            return false;
        }
    }
    return true;
    // if (n1==n2) {
    //     printf("n1:%d n2:%d\n",n1,n2);
    //     return true;
    // }
    // else {
    //     printf("n1:%d n2:%d\n",n1,n2);
    //     return false;
    // }

}
