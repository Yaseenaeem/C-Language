#include <stdio.h>

void calculateFuel(int fuel, int consumption, int recharge, int solarBonus,
                   int planet, int totalPlanets)
{
    // Base case: no fuel OR all planets visited
    if (fuel <= 0 || planet > totalPlanets) {
        if (fuel <= 0)
            printf("Mission Failed: Fuel exhausted!\n");
        else
            printf("Mission Successful: All planets visited!\n");
        return;
    }

    // ---- Step 1: Consume fuel at this planet ----
    fuel = fuel - consumption;

    // ---- Step 2: Apply gravitational recharge ----
    fuel = fuel + recharge;

    // ---- Step 3: Solar recharge every 4th planet ----
    if (planet % 4 == 0) {
        fuel = fuel + solarBonus;
    }

    // Print status
    printf("Planet %d: Fuel Remaining = %d\n", planet, fuel);

    // Recursive call for next planet
    calculateFuel(fuel, consumption, recharge, solarBonus,
                  planet + 1, totalPlanets);
}

int main() {
    int fuel, consumption, recharge, solarBonus, totalPlanets;

    printf("Enter Initial Fuel: ");
    scanf("%d", &fuel);

    printf("Enter Fuel Consumption per Planet: ");
    scanf("%d", &consumption);

    printf("Enter Gravitational Recharge Amount: ");
    scanf("%d", &recharge);

    printf("Enter Solar Bonus (every 4th planet): ");
    scanf("%d", &solarBonus);

    printf("Enter Total Planets: ");
    scanf("%d", &totalPlanets);

    calculateFuel(fuel, consumption, recharge, solarBonus,
                  1, totalPlanets);

    return 0;
}
