/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        std::unordered_map<Node *, Node *> pointerMapping{};
        pointerMapping[nullptr] = nullptr;

        Node *current = head;
        while(current != nullptr){
            if(!pointerMapping.contains(current)){
                pointerMapping[current] = new Node(0);
            }
            pointerMapping[current]->val = current->val;

            if(!pointerMapping.contains(current->next)){
                pointerMapping[current->next] = new Node(0);
            }
            pointerMapping[current]->next = pointerMapping[current->next];

            if(!pointerMapping.contains(current->random)){
                pointerMapping[current->random] = new Node(0);
            }
            pointerMapping[current]->random = pointerMapping[current->random];
            
            current = current->next;
        }
        return pointerMapping[head];




        
    }
};
