#include <stdio.h>

int calculateFuel(int fuel, int consumption, int recharge, int solarBonus, int planet, int totalPlanets)
{
    if (fuel <= 0 || planet > totalPlanets) {
        return fuel;
    }
    fuel = fuel - consumption;
    fuel = fuel + recharge;
    if (planet % 4 == 0) {
        fuel = fuel + solarBonus;
    }
    printf("Planet %d: Fuel Remaining = %d\n", planet, fuel);
    return calculateFuel(fuel, consumption, recharge, solarBonus, planet + 1, totalPlanets);
}

int main() {
    int startingFuel = 500;
    int consumption = 60;
    int recharge = 20;
    int solarBonus = 50;
    int totalPlanets = 7;

    int finalFuel = calculateFuel(startingFuel, consumption, recharge, solarBonus, 1, totalPlanets);
    if (finalFuel <= 0) {
        printf("\nSpacecraft failed: fuel finished.\n");
    } else {
        printf("\nMission successful: final fuel = %d\n", finalFuel);
    }

    return 0;
}
