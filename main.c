#include <stdio.h>
#include <math.h>
   
int n = 0;
float notes[20];
float average = 0.0;
float new_value;



int  max_notes() {
    printf("Enter the number of notes (max 20): ");
    scanf("%d", &n);
    if (n > 20) {
        printf("Number of notes exceeds the maximum limit of 20.\n");
        return 1;
    }
    
    return n;
}

float calculate_average() {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += notes[i];
    }
    return sum / n;
}

void ask_for_notes() {
    for (int i = 0; i < n; i++) {
        printf("Enter note %d: ", i + 1);
        scanf("%f", &notes[i]);
    }
}

void update_value(int index, float new_value) {
    if (index >= 0 && index < n) {
        notes[index] = new_value;
    } else {
        printf("Index out of bounds.\n");
    }}



char choice(){
    char choice;
    printf("Do you want to update a note? (y/n): ");
    scanf(" %c", &choice);
    return choice;
}
 
int update_notes(){
    char user_choice = choice();
    while (user_choice == 'y' || user_choice == 'Y') {
        int index;
        float new_value;
        printf("Enter the index of the note to update (1 to %d): ", n);
        scanf("%d", &index);
         index = index - 1;
        printf("Enter the new value: ");
        scanf("%f", &new_value);
        update_value(index, new_value);
        user_choice = choice();
    }
    return 0;
}
int main() {
max_notes();
ask_for_notes();
float average = calculate_average();
printf("The average is: %.2f\n", average);
update_notes();
average = calculate_average();
printf("The average is: %.2f\n", average);
    return 0;
}
