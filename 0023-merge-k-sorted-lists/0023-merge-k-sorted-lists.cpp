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
    ListNode* mergeKLists(vector<ListNode*>& lists){
    vector<int> result;
    for (auto list : lists) { 
        ListNode* current = list;
        while (current != nullptr) {
            result.push_back(current->val);
            current = current->next;
        }
    }
    sort(result.begin() , result.end());
    int n = result.size();
    ListNode* head = new ListNode(0);
    ListNode* temp = head;
    for(int i = 0 ; i < n ; i++){
        temp->next = new ListNode(result[i]);
        temp = temp->next;
    }
    return head->next;
    }
};