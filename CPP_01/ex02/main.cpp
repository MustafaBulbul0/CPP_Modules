# include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "Memory address of str       : " << &str << "\n";
	std::cout << "Memory address of stringPTR : " << stringPTR << "\n";
	std::cout << "Memory address of stringREF : " << &stringREF << "\n\n";

	std::cout << "Value of str       : " << str << "\n";
	std::cout << "Value of stringPTR : " << str << "\n";
	std::cout << "Value of stringREF : " << str << "\n";

	return (0);
}
