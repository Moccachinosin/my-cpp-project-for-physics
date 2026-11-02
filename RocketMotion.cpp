#include <iostream>

int main(){
    std::cout << "==== Rocket Flight Report ====" << '\n';

    double initialvelocity = 120.0; // m/s
    double acceleration = 15.5; // m/s^2
    double time = 8.0; // seconds
    double mass = 250.5; // kg
    double initialhigh = 50.0; // meters
    double gravity = 9.81; // m/s^2

    double finalvelocity = initialvelocity + (acceleration * time);
    double finalhigh = initialhigh + (initialvelocity * time) + (0.5 * acceleration * time * time);
    double kineticenergy = 0.5 * mass * finalvelocity * finalvelocity;
    double gravitationalpotentialenergy = mass * gravity * finalhigh;
    double totalmechanicalenergy = kineticenergy + gravitationalpotentialenergy;
    double averagevelocity = (initialvelocity + finalvelocity) / 2.0;
    double distance = averagevelocity * time;

    std::cout << "Initial Velocity: " << initialvelocity << " m/s" << '\n';
    std::cout << "Final Velocity: " << finalvelocity << " m/s" << '\n';
    std::cout << "Final Height: " << finalhigh << " m" << '\n';
    std::cout << "Kinetic Energy: " << kineticenergy << " J" << '\n';
    std::cout << "Gravitational Potential Energy: " << gravitationalpotentialenergy << " J" << '\n';
    std::cout << "Total Mechanical Energy: " << totalmechanicalenergy << " J" << '\n';
    std::cout << "Average Velocity: " << averagevelocity << " m/s" << '\n';
    std::cout << "Distance Traveled: " << distance << " m" << '\n';
    std::cout << "===============================" << '\n';



    return 0;
}