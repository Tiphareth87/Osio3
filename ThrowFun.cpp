#include <iostream>
#include <cmath>

int main() {
	double a, b;
	char m;
	try {
		std::cout << "Kirjoita lasku, esim. 1.4 / 2.2." << std::endl;
		std::cin >> a >> m >> b;
		if (!std::cin.good()) {
			// Menee throw-riviltä catch-lohkoon.
			throw "viallinen syöte";
		}
		std::cout << a << ' ' << m << ' ' << b << std::endl;
		switch (m) {
			
			case '+': throw a + b;
			case '-': throw a - b;
			case '*': throw a * b;
			case '/':
				
				if (b == 0) {
					throw "jakaja on nolla";
				}
				throw a / b;
			case '^':
				if (a == 0 && b == 0) {
					throw "nolla potenssiin nolla, määrittelemätön";
				}
				
				if (a < 0 && std::floor(b) != b) {
					throw "negatiivinen luku ja desimaalieksponentti";
				}
				
				throw std::pow(a, b);
			default:
				throw "tuntematon lasku";
		}
		
	} catch (double vastaus) {
	
		std::cout << "Tulos: " << vastaus << std::endl;
		
	} catch (const char* teksti) {
	
		std::cout << "Virhe: " << teksti << std::endl;
		return 1;
	} catch (...) {
		
		std::cout << "Tuntematon virhe tuntemattomasta lähteestä!" << std::endl;

		
		throw;
	}
	std::cout << "Jos haluat laskea lisää, aja ohjelma uudestaan." << std::endl;
}