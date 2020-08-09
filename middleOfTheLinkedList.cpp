// given a non-empty, singly linked list
// with head node head
// return a middle node of linked list

// if there are two middle nodes, return the second middle node

// each time, slow goes 1 step
// while fast goes 2 steps 

// when fast arrives at the end,
// slow will arrive at the middle 

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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head; // slow pointer
        ListNode* fast = head; // fast pointer
        
        // while current and next node exist (not null)
        while(fast && fast->next)
            // move the slow pointer by 1, move fast pointer by 2
            slow = slow->next, fast = fast->next->next; 
        // loop exits when fast pointer reaches end
        
        return slow; // return the slow pointer that has reached the middle
    }
};