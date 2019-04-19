We can model the single wheel case as a disk which immediately gets accelerated to the speed of the wheel circumference and try to find the ball speed and spin as: 

![Ball Speed and Spin Model 1](https://github.com/bmrocamora/ttcannon/blob/master/images/Ball%20Speed%20and%20Spin%201.png)

Decomposing the composite field of velocities we get:
![Ball Speed and Spin Model 2](https://github.com/bmrocamora/ttcannon/blob/master/images/Ball%20Speed%20and%20Spin%202.png)

![Ball Speed and Spin Model 3](https://github.com/bmrocamora/ttcannon/blob/master/images/Ball%20Speed%20and%20Spin%203.png)
![Ball Speed and Spin Model 4](https://github.com/bmrocamora/ttcannon/blob/master/images/Ball%20Speed%20and%20Spin%204.png)
![Ball Speed and Spin Model 5](https://github.com/bmrocamora/ttcannon/blob/master/images/Ball%20Speed%20and%20Spin%205.png)

Speed of the ball can then be obtained by the following equation:

![V_{B,y} = \frac{R}{3}(\omega_{W,1}+\omega_{W,2}+\omega_{W,3})](https://latex.codecogs.com/gif.latex?V_%7BB%2Cy%7D%20%3D%20%5Cfrac%7BR%7D%7B3%7D%28%5Comega_%7BW%2C1%7D&plus;%5Comega_%7BW%2C2%7D&plus;%5Comega_%7BW%2C3%7D%29)

Side spin of the ball can then be obtained by the following equation:

![\omega_{B,x} = \frac{\sqrt{3}}{3}\frac{R}{r}  \left ( \omega_{W,2}-\omega_{W,3} \right )](https://latex.codecogs.com/gif.latex?%5Comega_%7BB%2Cz%7D%20%3D%20%5Cfrac%7B1%7D%7B3%7D%5Cfrac%7BR%7D%7Br%7D%20%5Cleft%20%28%20-2%5Comega_%7BW%2C1%7D&plus;%5Comega_%7BW%2C2%7D&plus;%5Comega_%7BW%2C3%7D%20%5Cright%20%29)

Vertical spin of the ball then be obtained by the following equation:

![\omega_{B,z} = \frac{1}{3}\frac{R}{r}  \left ( -2\omega_{W,1}+\omega_{W,2}+\omega_{W,3} \right)
](https://latex.codecogs.com/gif.latex?%5Comega_%7BB%2Cz%7D%20%3D%20%5Cfrac%7B1%7D%7B3%7D%5Cfrac%7BR%7D%7Br%7D%20%5Cleft%20%28%20-2%5Comega_%7BW%2C1%7D&plus;%5Comega_%7BW%2C2%7D&plus;%5Comega_%7BW%2C3%7D%20%5Cright%20%29)


![x=Ab](https://latex.codecogs.com/gif.latex?%5Cbegin%7Bbmatrix%7D%20R/3%20%26%20R/3%20%26%20R/3%20%5C%5C%200%20%26%20%5Csqrt%7B3%7DR/%283r%29%20%26%20-%5Csqrt%7B3%7DR/%283r%29%20%5C%5C%20-2R/%283r%29%20%26%20R/%283r%29%20%26%20R/%283r%29%20%5Cend%7Bbmatrix%7D%20%5Cbegin%7Bbmatrix%7D%20%5Comega_%7BW%2C1%7D%5C%5C%20%5Comega_%7BW%2C2%7D%5C%5C%20%5Comega_%7BW%2C3%7D%20%5Cend%7Bbmatrix%7D%20%3D%20%5Cbegin%7Bbmatrix%7D%20V_%7BB%2Cy%7D%5C%5C%20%5Comega_%7BB%2Cx%7D%5C%5C%20%5Comega_%7BB%2Cz%7D%20%5Cend%7Bbmatrix%7D)
