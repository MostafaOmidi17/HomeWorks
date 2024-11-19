//403110393 mostafa omidi

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n * m];

    // Reading array elements
    for (int i = 0; i < n * m; i++) {
        scanf("%d", &a[i]);
    }

    int q_input;
    scanf("%d", &q_input);
    int holder[q_input];

    int point_1_x, point_1_y, point_2_x, point_2_y;
    int max_val = 10005;
    int b[max_val];

    // Process each query
    for (int i = 0; i < q_input; i++) {
        // Initialize the b array for each query
        for (int j = 0; j < max_val; j++) {
            b[j] = 0;
        }

        // Read the query points
        scanf("%d %d %d %d", &point_1_x, &point_1_y, &point_2_x, &point_2_y);

        int counter = 0;
        // Iterate through the specified subarray
        for (int x = point_1_x - 1; x <= point_2_x - 1; x++) {
            for (int y = point_1_y - 1; y <= point_2_y - 1; y++) {
                int index = x * m + y;
                if (b[a[index]] == 0) {
                    b[a[index]] = 1;
                    counter++;
                }
            }
        }
        holder[i] = counter;
    }

    // Output the results
    for (int i = 0; i < q_input; i++) {
        printf("%d ", holder[i]);
    }

    return 0;
}
