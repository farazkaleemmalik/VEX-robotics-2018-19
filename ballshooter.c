#pragma config(Motor,  port1,           mot1,          tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port9,           mot2,          tmotorServoContinuousRotation, openLoop, reversed)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main() {
	motor[mot1] = 127;
	motor[mot2] = 127;
	while(true){}
}
