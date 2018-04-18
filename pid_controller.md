
# Implementation

## The PID procedure follows what was taught in the lessons.

PID.cpp implements PID controller. Proportional, integral and derivative errors are calculated in PID::UpdateError. Total error is calculated using coefficients in PID::TotalError.

# Reflection

## Describe the effect each of the P, I, D components had in your implementation.

* The proportional portion tries to steer the car towards the reference lin(center). If used alone, car will overshoot the line and go off the road very quickly.
* The differential portion smoothens the car towards the refernce line(line) and counteract the proportional trend to overshoot the center line.
* The integral portion tries to eliminate a possible bias on the controlled system. If used alone, it makes the car to go in circles. I set Ki to 0 as there was no bias in the simulator.

## Describe how the final hyperparameters were chosen.

The parameters were chosen manually by try and error. I added the proportional then differential and then integral factor with some value of coefficient and observed the car movement. By increasing and decreasing the coefficient value, I end up with the [P: 0.2, I: 0.0, D: 3.0].

