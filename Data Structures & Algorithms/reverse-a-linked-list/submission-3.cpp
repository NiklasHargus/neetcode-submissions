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

/*

[HEAD, ->]          [NEXT1, ->]         [NEXT2 ->]


*/



class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (!head) return nullptr;

        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* tmp = nullptr;

        while(current->next!=nullptr){
            std::cout << current->val << "\n";
            tmp = current;
            current = current->next;
            tmp->next = prev;
            prev = tmp;
        }
        current->next = prev;
        return current;
    }
};
