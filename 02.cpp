#include <iostream>
#include <string>
#include <windows.h>

double* create_array(int size);

double* create_array(int size)
{
	double* out{nullptr};

	if (size > 0)
	{
		out = new double[size] {0};
		

		return(out );
	}
	else 
	{
		return(nullptr);
	}
}



int main(int argc, char** argv)
{
	int size{ 0 };
	double *mass{ nullptr };


	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);

	std::cout << "Введите размер массива: ";

	std::cin >> size;

	if (size <= 0) 
	{
		return(1);
	}

	mass = create_array(size);

	std::cout << "Массив: ";

	for (int i = 0; i < (size); i++)
	{
		std::cout << mass[i] << " ";
	}


	delete[] mass;

	return(0);
}

