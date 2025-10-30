#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // =============================
    // 1D ARRAY — Weekly Revenue Tracker
    // =============================

    float revenue[7];
    float totalRevenue = 0, avgRevenue;

    printf("=== Weekly Revenue Tracker ===\n");
    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        totalRevenue += revenue[i];
    }

    avgRevenue = totalRevenue / 7;

    printf("\nTotal Weekly Revenue: %.2f\n", totalRevenue);
    printf("Average Daily Revenue: %.2f\n\n", avgRevenue);


    // =============================
    // 2D ARRAY — Room Occupancy (One Branch)
    // =============================

    int occupancy[5][10]; // 5 floors, 10 rooms per floor
    int occupied, vacant;

    srand(time(0)); // Seed for random numbers

    printf("=== Room Occupancy (One Branch) ===\n");

    for (int i = 0; i < 5; i++) {
        occupied = 0;
        vacant = 0;

        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2; // Random 0 or 1
            if (occupancy[i][j] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d | Vacant: %d\n", i + 1, occupied, vacant);
    }

    printf("\n");


    
    // 3D ARRAY — Multiple Branches

    int chain[3][5][10]; // 3 branches, 5 floors, 10 rooms per floor
    int totalOccupied, totalVacant;

    printf("=== Occupancy for Multiple Branches ===\n");

    for (int b = 0; b < 3; b++) {
        totalOccupied = 0;
        totalVacant = 0;

        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
                if (chain[b][f][r] == 1)
                    totalOccupied++;
                else
                    totalVacant++;
            }
        }

        printf("Branch %d -> Occupied: %d | Vacant: %d\n", b + 1, totalOccupied, totalVacant);
    }

    return 0;
}