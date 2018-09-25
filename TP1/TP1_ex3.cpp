
#include <iostream>
#include <string>
		


int main(int argc, char **argv){
	std::string machaine;
	std::string imac="IMAC ";
	std::cout << "Entrez une chaine de caractères" << std::endl;
	std::cin >> machaine;
	
	std::cout << "The string : " << machaine << std::endl << "String size : " << machaine.length() << std::endl << "Last element : "<< machaine.back() << std::endl;
	machaine.pop_back();
	std::cout << "Remove last : " << machaine << std::endl;
	std::cout << "Add IMAC : " << imac+machaine << std::endl;


	return 0;
}
