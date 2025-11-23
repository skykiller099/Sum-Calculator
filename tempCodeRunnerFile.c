#include <stdio.h>


int calculate_sum(int a, int b) {
    return a + b;
}
    int a =0;
    int b =0;
    int choice =0;

int main() {
    printf("Choisir un nombre: ");
    scanf("%d", &a);
    printf("Choisir un autre nombre: ");
    scanf("%d", &b);
    printf("Voulez-vous calculer la moyenne des deux nombres? (1 pour oui, 0 pour non): ");
    scanf("%d", &choice);
     if (choice == 1) {
        float average = calculate_sum(a, b) / 2.0;
        printf("La moyenne est: %.2f\n", average);
    } else { 
        printf("vous avez choisi de ne pas calculer la moyenne.\n");
    }
 
    return 0;
}
