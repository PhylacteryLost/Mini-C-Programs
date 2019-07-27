// Header runs before compilation.
// Any included or defined constants are implemented before the code is compiled.
// Constant replacement - search for all instances of constant name and replace with value.
#include <stdlib.h>
#include <stdio.h>

#define FishName "Salmon"
#define PriceOfFish 30.25

// Print update on what website is doing.
void UpdateWebsitePriceText(float newCost)
{
    printf("WEBSITE: Updating the price of %s from %5.2f to %5.2f.\n\n", FishName, PriceOfFish, newCost);
}
