#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct poly {
    int coeff, exp;
    struct poly* next;
  };

struct poly* createPoly(int n) {
    struct poly *head = NULL, *temp = NULL, *ptr = NULL;

    for (int i = 0; i<n ; i++) {
        temp = (struct poly*)malloc(sizeof(struct poly));
        printf("Enter the coefficient and exponent:\n");
        scanf("%d%d", &temp->coeff, &temp->exp);
        temp->next = NULL;

        if (head == NULL) {
            head = temp;
            ptr  = temp;
        } else {
            ptr->next = temp;
            ptr = temp;
        }
    }
    return head;
}

void display(struct poly* poly) {
    while (poly != NULL) {
        printf("%dx^%d ", poly->coeff, poly->exp);
        if (poly->next != NULL) {
            printf("+");
        }
        poly = poly->next;
    }
    printf("\n");
}
int main() {
    int n1, n2;
    printf("Enter the number of terms of the 1st polynomial: ");
    scanf("%d", &n1);

    struct poly* p = createPoly(n1);
    printf("Enter the number of terms of the 2nd polynomial: ");
    scanf("%d", &n2);

    struct poly* q = createPoly(n2);

    printf("\n1st polynomial: ");
    display(p);

    printf("\n2nd polynomial: ");
    display(q);
    
    }
