#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_) {\
	Kp = Kp_;
	Kd = Kd_;
	Ki = Ki_;
	flag = 0;
	// d_error = 0;
	// i_error = 0;
}

void PID::UpdateError(double cte) {
	if (flag==0)
	{
		p_error = cte;
		d_error = cte - p_error;
		flag =1;
	}
	else
	{
		d_error = cte - p_error;
		p_error = cte;
	}
	i_error += cte;
}

double PID::TotalError() {
	return -(Kp*p_error)-(Kd*d_error)-(Ki*i_error);
}

