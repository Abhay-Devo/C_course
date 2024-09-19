import time

class Sensor:
    def __init__(self):
        self.distance_to_obstacle = 10  # Initial distance

    def update_distance(self):
        # Simulate sensor data update
        self.distance_to_obstacle -= 1

    def get_distance(self):
        return self.distance_to_obstacle

class Controller:
    def __init__(self):
        self.speed = 60  # Initial speed

    def adjust_speed(self, distance):
        # Adjust vehicle speed based on distance to obstacle
        if distance > 5:
            self.speed = 60  # Maintain speed at 60 km/h
        else:
            self.speed = 0   # Stop if obstacle is too close

    def adjust_steering(self, distance):
        # Adjust steering angle based on distance to obstacle
        if distance < 10:
            print("Steering left slightly to avoid obstacle")
        elif distance > 15:
            print("Steering right slightly to avoid obstacle")
        else:
            print("Maintaining straight direction")

    def apply_brakes(self, distance):
        # Apply brakes if obstacle is too close
        if distance < 2:
            print("Applying brakes!")
            self.speed = 0

    def get_speed(self):
        return self.speed

def main():
    sensor = Sensor()
    controller = Controller()

    while True:
        sensor.update_distance()
        distance = sensor.get_distance()

        controller.adjust_speed(distance)
        controller.adjust_steering(distance)
        controller.apply_brakes(distance)

        speed = controller.get_speed()

        print(f"Distance to obstacle: {distance} meters | Speed: {speed} km/h")
        time.sleep(1)  # Simulate real-time processing

if __name__ == "__main__":
    main()



# same code for c 
"""
#include <stdio.h>
#include <unistd.h>  // For sleep function

typedef struct {
    int distance_to_obstacle;
} Sensor;

typedef struct {
    int speed;
} Controller;

void update_distance(Sensor *sensor) {
    // Simulate sensor data update
    sensor->distance_to_obstacle -= 1;
}

void adjust_speed(Controller *controller, int distance) {
    // Adjust vehicle speed based on distance to obstacle
    if (distance > 5) {
        controller->speed = 60;  // Maintain speed at 60 km/h
    } else {
        controller->speed = 0;   // Stop if obstacle is too close
    }
}

void adjust_steering(int distance) {
    // Adjust steering angle based on distance to obstacle
    if (distance < 10) {
        printf("Steering left slightly to avoid obstacle\n");
    } else if (distance > 15) {
        printf("Steering right slightly to avoid obstacle\n");
    } else {
        printf("Maintaining straight direction\n");
    }
}

void apply_brakes(Controller *controller, int distance) {
    // Apply brakes if obstacle is too close
    if (distance < 2) {
        printf("Applying brakes!\n");
        controller->speed = 0;
    }
}

int get_speed(Controller *controller) {
    return controller->speed;
}

int main() {
    Sensor sensor = {10};
    Controller controller = {60};

    while (1) {
        update_distance(&sensor);
        int distance = sensor.distance_to_obstacle;

        adjust_speed(&controller, distance);
        adjust_steering(distance);
        apply_brakes(&controller, distance);

        int speed = get_speed(&controller);

        printf("Distance to obstacle: %d meters | Speed: %d km/h\n", distance, speed);
        sleep(1);  // Simulate real-time processing
    }
    return 0;
}
"""