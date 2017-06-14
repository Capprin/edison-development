#include <mraa.hpp>
 
int main()
{
	//Set up pins 14 and 15
	mraa::Gpio output(36);
	mraa::Gpio input (48);

	//Set pin direction
	output.dir(mraa::DIR_OUT);
	input.dir(mraa::DIR_IN);

	//Turn LED on while button is on
	while(true){
		output.write(1-input.read()); //Pullup resistor so opposite of what's read
	}
}
