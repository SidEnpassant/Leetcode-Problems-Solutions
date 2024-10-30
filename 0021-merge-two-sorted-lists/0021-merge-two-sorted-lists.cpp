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
        ListNode* temp1 = list1;
        ListNode* temp2 = list2;
        vector<int> jod;
        
        while(temp1 != NULL){
            jod.push_back(temp1->val);
            temp1 = temp1->next;
        }
        
        while(temp2 != NULL){
            jod.push_back(temp2->val);
            temp2 = temp2->next;
        }

        sort(jod.begin() , jod.end());

        if(jod.size() == 0) return nullptr;

        ListNode* newHead = new ListNode(jod[0]);
        ListNode* temp3 = newHead;

        for(int i = 1 ; i < jod.size() ; i++){
            temp3->next = new ListNode(jod[i]);
            temp3 = temp3->next;
        }

        return newHead;
    }
};

