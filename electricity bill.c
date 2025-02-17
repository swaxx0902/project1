#include <stdio.h>
int main() {
    int customer_id;
    char customer_name[50];
    int units;
    float amount, surcharge = 0, total_amount;

    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    printf("Enter Units Consumed: ");
    scanf("%d", &units);

    if (units <= 199) {
        amount = units * 1.20;
    }
else if (units >= 200 && units < 400) {
        amount = units * 1.50;
    }
 else if (units >= 400 && units < 600) {
        amount = units * 1.80;
    }
 else {
        amount = units * 2.00;
    }
    if (amount > 400) {
        surcharge = amount * 0.15;
    }
    total_amount = amount + surcharge;
    if (total_amount < 100) {
        total_amount = 100;
    }
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %d\n", units);
    printf("Amount: %.2f\n", amount);
    printf("Surcharge: %.2f\n", surcharge);
    printf("Total Amount: %.2f\n", total_amount);
    return 0;
}
