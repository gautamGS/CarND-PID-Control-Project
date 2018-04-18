[video1]: ./output.mp4 "Output Video"

# CarND-Controls-PID

In this project i implemented PID i.e. Proportional-Integral-Derivative Controller to provide steering angle 
for simulated car. This project also involves tunning coefficients of PID in order to calucluate steering angle for car.

### Result

The car successfully drove a lap around the track , in such a way that No tire left the drivalble portion of the simulated track.
Video can be seen [here] (./output.mp4) or look for output.mp4 file in root folder.

### Reflection

#### Describe the effect each of the P, I, D components had in your implementation.
The P component which is also called the Proportional component has a proportional effect on car steering makeing the car move left or right to reduce the error. Increase in value for this component causes the car to wobble/oscilate more on high speed.

The I componenet which is also called the Integral component , is the integral sum of all the CTE's. If the value is high car tends to oscilate more , a very low value of I keeps the car oscillate less and tends to keep within the lane.

The D component which is also called the Derivative component is the change in CTE from one value to next. This component helps keep car on track and turns car back to middle in case of tight curves when value is not to large , large value would tend to slow the change  which could set car out of track during tight curves.

#### Describe how the final hyperparameters were chosen.


To tune the hyperparameters i implemented Twiddle ( code is removed from the final submitted code ) , this didn't helped be much as my hyperparameters values didn't change much after few iterations and my car used to be off-track in few seconds . So i decided to tune these parameters manually. So i randomly choose the parameter and tested on the track , but this was not taking me towards the final solution as my car used to run-off the track after crossing bridge.
After struggling for hours i decided to go for values given in Udacity course content. This helped my car to run full track but still few places exists where car went to non-drivable portion. I fine tunned this parameter so as to meet the criteria.
Below were the final value taken
Kp : 0.33
Ki : 0.00019
Kd : 5.0

---

## Dependencies

* cmake >= 3.5
 * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1(mac, linux), 3.81(Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools]((https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)
* [uWebSockets](https://github.com/uWebSockets/uWebSockets)
  * Run either `./install-mac.sh` or `./install-ubuntu.sh`.
  * If you install from source, checkout to commit `e94b6e1`, i.e.
    ```
    git clone https://github.com/uWebSockets/uWebSockets 
    cd uWebSockets
    git checkout e94b6e1
    ```
    Some function signatures have changed in v0.14.x. See [this PR](https://github.com/udacity/CarND-MPC-Project/pull/3) for more details.
* Simulator. You can download these from the [project intro page](https://github.com/udacity/self-driving-car-sim/releases) in the classroom.

There's an experimental patch for windows in this [PR](https://github.com/udacity/CarND-PID-Control-Project/pull/3)

## Basic Build / Run Instructions

1. Clone this repo.
2. Make a build directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./pid`. 

