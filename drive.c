#pragma config(Motor,  port2,           motorfl,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           motorfr,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           motorbl,       tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           motorbr,       tmotorVex393_MC29, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#define SET_MOTOR(vfl, vfr, vbl, vbr) \
motor[motorfl] = ((vfl) / REDUCE); \
motor[motorfr] = ((vfr) / REDUCE); \
motor[motorbl] = (-(vbl) / REDUCE); \
motor[motorbr] = (-(vbr) / REDUCE)


const int REDUCE = 1;
const bool LEFT = true; // Enables left-handed ness

int up, down, left, right, uplift, downlift, rotateleft, rotateright;

void lift_motor(int state){
	if(state = -1){ // Down
		//
	}
	else if(state == 0){ // None
		//
	}
	else{ // state == 1 | Up
		//
	}
}

void rotate_motor(int state){
	if(state = -1){ // Down
		//
	}
	else if(state == 0){ // None
		//
	}
	else{ // state == 1 | Up
		//
	}
}

task main(){
	for(;;){
		up = LEFT ? vexRT[Btn7U] : vexRT[Btn8U];
		down = LEFT ? vexRT[Btn7D] : vexRT[Btn8D];
		left = LEFT ? vexRT[Btn7L] : vexRT[Btn8L];
		right = LEFT ? vexRT[Btn7R] : vexRT[Btn8R];

		uplift = vexRT[Btn8U];
		downlift = vexRT[Btn8D];

		rotateleft = vexRT[Btn8L];
		rotateright = vexRT[Btn8R];

		if(up){
			SET_MOTOR(127, 127, 127, 127);
		}
		else if(down){
			SET_MOTOR(-127, -127, -127, -127);
		}
		else if(right){
			SET_MOTOR(-127, 127, -127, 127);
		}
		else if(left){
			SET_MOTOR(127, -127, 127, -127);
		}
		else{
			SET_MOTOR(0, 0, 0, 0);
		}

		if(uplift){
			lift_motor(1);
		}
		else if(downlift){
			lift_motor(-1);
		}
		else{
			lift_motor(0);
		}

		if(rotateright){
			rotate_motor(1);
		}
		else if(rotateleft){
			rotate_motor(-1);
		}
		else{
			rotate_motor(0);
		}
	}
}
