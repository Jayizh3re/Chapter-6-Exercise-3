#include <iostream>

double fallingDistance(int time)
{
    const double gravity = 9.8;
    return 0.5 * gravity * time * time;
}

int main()
{
    for (int time = 1; time <= 10; ++time)
    {
        const char* timeUnit = time == 1 ? "second" : "seconds";

        std::cout << "At " << time << ' ' << timeUnit
            << ", the object has fallen "
            << fallingDistance(time) << " meters.\n";
    }

    return 0;
}