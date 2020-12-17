#include <iostream>
#include "stdio.h"


using namespace std;


int main() {	
		
	system("color a");
	
	cout<<"Red:Neptuno Contraseña:1234567890 "<<endl;
	
	system("netsh wlan set hostednetwork mode=allow ssid=Neptuno key=1234567890");
	system("netsh wlan start hostednetwork");
	system("pause");		
	return 0;
	
	
}
