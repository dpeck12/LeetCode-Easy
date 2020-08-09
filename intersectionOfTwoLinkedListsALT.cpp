/*
consider following two lists A={1,3,5,7,9,11}, B={2,4,9,11}
intersect a 9
b.length = 4 < a.length = 6

pB would reach end of merged list first, 
pB traverses 2 nodes less than pA

redirect pB to head A,
and redirect pA to head B

now ask pB to travel exactly 2 more nodes than pA

So in second iteration, guranteed to reach intersection node at
the same time 

If two lists have intersection, then their
last nodes must be the same one.
When pA/pB reach the end of the list
record the last element of A/B
If two last elements are NOT the same one, then
the two lists have no intersections 
/*

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
        ListNode *cur1 = headA;
        ListNode *cur2 = headB;
        
        // while cur1 is NOT equal cur2
        while(cur1 != cur2){
            /*
            Move cur1 (cur2) forward from headA (headB) and loop back to headB (headA),
            eventually cur1 and cur2 will meet at the interception point or nullptr
            */
            cur1 = cur1?cur1->next:headB;
            cur2 = cur2?cur2->next:headA;
        }
        return cur1;
    }
};