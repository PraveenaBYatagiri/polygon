#include <simplecpp>

main_program
{
    turtleSim();
    int nsides;
    cout << "How many sides?";
    cin >> nsides;
    repeat(nsides) {
        forward(100);
        right(360.0/nsides); // Exterior angle of an n sided polygon is 360/n
    }
    wait(10);
}
