// find the node at which the intersection of two singly linked
// lists begins

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // pointers 
        ListNode *p1 = headA;
        ListNode *p2 = headB;
        
        // check if both NULL or both exist
        if(p1 == NULL || p2 == NULL)
            return nullptr;
        
        // while p1 and p2 exists, and p1 is NOT equal to p2
        while(p1 != nullptr && p2 != nullptr && p1!=p2){
            p1 = p1->next; // move p1 along 
            p2 = p2->next; // move p2 along 
            
            // any time they collide OR reach end together without colliding 
            // then return any of the pointers 
            if(p1 == p2) return p1;
            
            /*
            If one of them reaches the end earlier then reuse it by moving 
            it to the beginning of the other list.
            Once both of them go through reassigning,
            they will be equidistant from the collision point 
            */
            if(p1 == nullptr) p1 = headB;
            if(p2 == nullptr) p2 = headA;
        }
        
        return p1;
    }
};