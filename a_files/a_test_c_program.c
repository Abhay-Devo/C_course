// #include <stdio.h>

// // Define a constant for the maximum number of lidar data points
// #define MAX_DATA_POINTS 1000

// // Structure to represent a single lidar data point
// typedef struct {
//     double x; // X coordinate
//     double y; // Y coordinate
//     double z; // Z coordinate
// } LidarDataPoint;

// int main() {
//     // Declare an array to store lidar data points
//     LidarDataPoint lidarData[MAX_DATA_POINTS];

//     // Simulate generating some sample lidar data
//     // For demonstration, let's initialize some dummy data
//     int numDataPoints = 10; // Number of data points to generate
//     for (int i = 0; i < numDataPoints; i++) {
//         lidarData[i].x = i * 0.1; // Sample x coordinate
//         lidarData[i].y = i * 0.5; // Sample y coordinate
//         lidarData[i].z = i * 0.3; // Sample z coordinate
//     }

//     // Print the lidar data points
//     printf("Lidar Data Points:\n");
//     for (int i = 0; i < numDataPoints; i++) {
//         printf("Point %d: (%.2f, %.2f, %.2f)\n", i+1, lidarData[i].x, lidarData[i].y, lidarData[i].z);
//     }

//     return 0;
// }







#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // for sleep function (UNIX/Linux)

// Define a constant for the maximum number of lidar data points
#define MAX_DATA_POINTS 1000

// Structure to represent a single lidar data point
typedef struct {
    double x; // X coordinate
    double y; // Y coordinate
    double z; // Z coordinate
} LidarDataPoint;

// Function to simulate lidar data generation/update
void generateLidarData(LidarDataPoint *lidarData, int *numDataPoints) {
    // For demonstration, let's generate random data points
    // You can replace this with actual lidar data acquisition logic
    
    // Generate a random number of data points between 1 and 5
    int numNewPoints = rand() % 5 + 1;
    
    // Update the total number of data points
    *numDataPoints += numNewPoints;

    // Generate random x, y, z coordinates for new data points
    for (int i = *numDataPoints - numNewPoints; i < *numDataPoints; i++) {
        lidarData[i].x = (double)rand() / RAND_MAX * 100.0; // Sample x coordinate (random value between 0 and 100)
        lidarData[i].y = (double)rand() / RAND_MAX * 100.0; // Sample y coordinate (random value between 0 and 100)
        lidarData[i].z = (double)rand() / RAND_MAX * 100.0; // Sample z coordinate (random value between 0 and 100)
    }
}

int main() {
    // Declare an array to store lidar data points
    LidarDataPoint lidarData[MAX_DATA_POINTS];
    int numDataPoints = 0; // Current number of data points

    // Continuously update lidar data and store it into the array
    while (1) {
        generateLidarData(lidarData, &numDataPoints);
        
        // Print the updated lidar data points
        printf("Lidar Data Points (Total: %d):\n", numDataPoints);
        for (int i = 0; i < numDataPoints; i++) {
            printf("Point %d: (%.2f, %.2f, %.2f)\n", i+1, lidarData[i].x, lidarData[i].y, lidarData[i].z);
        }
        
        // Sleep for a short interval to simulate real-time data updates
        usleep(500000); // Sleep for 0.5 seconds (500 milliseconds)
    }

    return 0;
}
