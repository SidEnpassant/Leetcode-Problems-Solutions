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
    ListNode* sortList(ListNode* head) {
        ListNode* temp = head;
        vector<int> jod;
        
        while(temp != NULL){
            jod.push_back(temp->val);
            temp = temp->next;
        }

        sort(jod.begin() , jod.end());

        temp = head;
        for(int i = 0 ; i < jod.size() ; i++){
            temp->val = jod[i];
            temp = temp->next;
        }
        
        return head;

    }
};