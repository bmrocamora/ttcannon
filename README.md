# TTCannon - Design of a Cannon that Shoots Table Tennis Balls

## Introduction
Design of a robot that shoots table tennis balls for table tennis practicing.
The design includes:
1. Control of Feed Rate (how many balls per minute)
2. Control of Elevation and Side Angles (ballistic angles)
3. Control of Ball Speed and Spins (in two axis)

## Mechanical Design

### Feed Rate
This system includes a mixer and a reservoir that contains many balls. Balls are drawn by gravity and are taken to the nozzle, where they will be accelerated.
### Ballistic Angles
Two servo-motors are assigned to control the ballistic angles. The schematics of the angle references is to be added. The elevation angle can go from a negative angle, in which the ball bounces in the serving side of the table, to a positive angle. Side angle can also from negative to positive angles. Possibility to use oscillatory lateral motion.

### Ball Speed and Spins
Ball is accelerated by three wheels equally distributed circumferentially. Differences in the speed of the wheels result in spin.

## Electronics and Control

### Feed Rate
Simple control of a DC motor speed.

### Ballistic Angles
Simple control of these angles using servo control libraries.

### Ball Speed and Spins
Simple control of DC motor speeds can set ball velocity and spin rates. 

More information on electronics design can be found [here](../documentation/electronics_design.md).


## Modelling Nozzle and Wheels

Three wheels and linear combination of the induced velocity and spin rates.

More information on modelling can be found [here](../documentation/speed_and_spin_modelling.md).
