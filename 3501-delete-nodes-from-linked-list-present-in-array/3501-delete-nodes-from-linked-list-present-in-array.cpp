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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        set<int> s(nums.begin(), nums.end());
        ListNode* cur = head;
        while(cur) {
            if(s.count(cur->val)) { 
                cur = cur->next;
            }
            else break; 
        }
        ListNode* newH = cur;
        while(cur && cur->next) { 
            if(s.count(cur->next->val)) {
                cur->next = cur->next->next;
            } 
            else {
                cur = cur->next;
            }
        }
        return newH;
    }
};