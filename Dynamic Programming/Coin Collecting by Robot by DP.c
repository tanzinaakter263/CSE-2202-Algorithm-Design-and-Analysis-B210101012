#include <stdio.h>
    #include <stdlib.h> // For malloc and free

    // Function to find the maximum of two integers
    int max(int a, int b) {
        return (a > b) ? a : b;
    }

    int robotCoinCollection(int** C, int n, int m) {
        // Create a 2D array to store the maximum coins at each cell
        int** dp = (int**)malloc((n + 1) *sizeof(int));
        for (int i = 0; i <= n; i++) {
            dp[i] = (int*)malloc((m + 1) *sizeof(int));
        }

        // Initialize base cases (0th row and 0th column)
        for (int j = 0; j <= m; j++) {
            dp[0][j] = 0;
        }
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }

        // Fill the DP table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + C[i - 1][j - 1]; // C is 0-indexed, dp is 1-indexed for convenience
            }
        }

        int max_coins = dp[n][m];

        // Free the allocated memory
        for (int i = 0; i <= n; i++) {
            free(dp[i]);
        }
        free(dp);

        return max_coins;
    }

    int main() {
        int n = 3; // Number of rows
        int m = 3; // Number of columns

        // Example coin grid (1 means coin, 0 means no coin)
        // Note: This C array is 0-indexed
        int **C = (int**)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) {
            C[i] = (int*)malloc(m * sizeof(int));
        }

        C[0][0] = 0; C[0][1] = 1; C[0][2] = 0; C[0][3] = 0;
        C[1][0] = 1; C[1][1] = 0; C[1][2] = 1; C[1][3] = 0;
        C[2][0] = 0; C[2][1] = 0; C[2][2] = 1; C[2][3] = 1;
        /*c[i][j]=[[1,0,1],
        [1,0,1],
        [1,1,1]]*/

        int result = robotCoinCollection(C, n, m);
        printf("Maximum coins collected: %d\n", result);

        // Free the allocated memory for C
        for (int i = 0; i < n; i++) {
            free(C[i]);
        }
        free(C);

        return 0;
    }
