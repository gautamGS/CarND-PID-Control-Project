#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double i_Kp, double i_Ki, double i_Kd)
{
    this->Kp= i_Kp;
    this->Ki = i_Ki;
    this->Kd = i_Kd;

    this->p_error = 0.0;
    this->i_error =0.0;
    this->d_error =0.0;


}

void PID::UpdateError(double cte)
{
    d_error = cte - p_error ;
    p_error = cte;
    i_error += cte ;

}

double PID::TotalError()
{
    double totalError = 0.0;

    totalError = -Kp * p_error - Ki * i_error - Kd * d_error;

    return totalError;
}

