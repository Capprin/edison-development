
#include <iostream>
#include <mraa.hpp>
 
int main()
{

	mraa::Gpio pin(36,true,false); //Opening GPIO pin 14 with pin ownership and without raw value

	//Set pin as output; quit on failure
	if (pin.dir(mraa::DIR_OUT) != mraa::SUCCESS){
		std::cerr<<"Could not set pin as output; exiting."<<std::endl;
		return mraa::ERROR_UNSPECIFIED;
	}

	while(true){
		pin.write(1);
		sleep(1);
		pin.write(0);
		sleep(1);
	}


	return mraa::SUCCESS;
}
