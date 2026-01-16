// Last updated: 15/01/2026, 21:28:36
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     struct ListNode *next;
6 * };
7 */
8struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
9    struct ListNode pre_head;
10    pre_head.next = NULL;
11    int carry = 0;
12    
13    for (struct ListNode *curr = &pre_head; l1 != NULL || l2 != NULL || carry != 0; curr = curr->next) {
14        int l1_val = (l1 != NULL) ? l1->val : 0;
15        int l2_val = (l2 != NULL) ? l2->val : 0;
16
17        int sum = l1_val + l2_val + carry;
18        carry = sum / 10;
19        if (carry == 1) {
20            sum -= 10;
21        }
22
23        struct ListNode * new_sum = malloc(sizeof(struct ListNode));
24        new_sum->val = sum;
25        new_sum->next = NULL;
26
27        curr->next = new_sum;
28        if (l1 != NULL) {
29            l1 = l1->next;
30        }
31        if (l2 != NULL) {
32            l2 = l2->next;
33        }
34    }
35
36    return pre_head.next;
37}