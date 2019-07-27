#include <stdio.h>
#include <stdlib.h>
// Custom header. Use "File_Name" if header in same dir (faster).
#include "FishConstantsAndFunction.h""

int main()
{
    float discountPercentage = 1.0;

    // Ask for and get discount amount from user.
    printf("What is the discount for %s (normal price $%5.2f)\n", FishName, PriceOfFish);
    printf("Discount %% must be in decimal format (e.g. 50%% = 0.5)\n");
    scanf(" %f", &discountPercentage);

    // Calculate cost of fish on sale.
    float fishCostOnSale = (PriceOfFish - (PriceOfFish * discountPercentage));

    // Call header function.
    UpdateWebsitePriceText(fishCostOnSale);

    // Print new fish cost, with price formatted to maximum of 2 decimal places.
    printf("CLIENT: The new cost of %s is $%5.2f\n", FishName, fishCostOnSale);

	return 0;
}