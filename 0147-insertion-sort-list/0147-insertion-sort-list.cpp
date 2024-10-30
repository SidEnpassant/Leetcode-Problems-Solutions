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
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* temp = head;
        vector<int> nums;
        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp -> next;
        }
        sort(nums.begin() , nums.end());
        temp = head;
        for(int val : nums){
            temp->val = val;
            temp = temp -> next;
        }
        return head;

    }
};






