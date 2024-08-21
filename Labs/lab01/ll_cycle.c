#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if (!head) return 0;
    node *slow = head, *fast = head;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}