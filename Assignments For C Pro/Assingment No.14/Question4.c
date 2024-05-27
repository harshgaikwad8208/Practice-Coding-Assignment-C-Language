// Point of Sale System: Build a simple point of sale system using structures to represent products with attributes like name, price, and quantity. Allow users to add items to a cart and calculate the total cost.
#include <stdio.h>

// Define the Product structure
struct Product {
    char name[50];
    float price;
    int quantity;
};

// Function to calculate the total cost of items in the cart
float calculateTotalCost(struct Product cart[], int numItems) {
    float totalCost = 0.0;

    for (int i = 0; i < numItems; i++) {
        totalCost += cart[i].price * cart[i].quantity;
    }

    return totalCost;
}

int main() {
    int numItems;
    printf("Enter the number of items in the store: ");
    scanf("%d", &numItems);

    struct Product store[numItems];
    for (int i = 0; i < numItems; i++) {
        printf("Enter details for product %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", store[i].name);
        printf("Price: $");
        scanf("%f", &store[i].price);
        printf("Quantity available: ");
        scanf("%d", &store[i].quantity);
    }

    int cartSize;
    printf("\nEnter the number of items you want to add to the cart: ");
    scanf("%d", &cartSize);

    struct Product cart[cartSize];
    for (int i = 0; i < cartSize; i++) {
        printf("Enter details for item %d in the cart:\n", i + 1);
        printf("Name: ");
        scanf("%s", cart[i].name);
        printf("Quantity: ");
        scanf("%d", &cart[i].quantity);

        // Find the corresponding product in the store and set the price
        for (int j = 0; j < numItems; j++) {
            if (strcmp(cart[i].name, store[j].name) == 0) {
                cart[i].price = store[j].price;
                break;
            }
        }
    }

    // Calculate the total cost of items in the cart
    float totalCost = calculateTotalCost(cart, cartSize);

    printf("\nCart Items and Total Cost:\n");
    for (int i = 0; i < cartSize; i++) {
        printf("Item: %s, Price: $%.2f, Quantity: %d\n", cart[i].name, cart[i].price, cart[i].quantity);
    }
    printf("Total Cost: $%.2f\n", totalCost);
}
