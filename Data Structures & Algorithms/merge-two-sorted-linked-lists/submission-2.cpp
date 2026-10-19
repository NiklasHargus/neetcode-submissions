/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *current1 = list1;
        ListNode *current2 = list2;
        
        ListNode start{};
        ListNode *current = &start;

        while(current1 && current2){
            if(current1->val < current2->val){
                current->next = current1;
                current1 = current1->next;
            }else{
                current->next = current2;
                current2= current2->next;
            }
            current = current->next;
        }

        if(current1){
            current->next = current1;
        }else{
            current->next = current2;
        }

        return start.next;
    }
};
