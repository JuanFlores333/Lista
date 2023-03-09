#include <iostream>
#include <list>
#include <string>

int main()
{
	//preguntar cuantos pacientes desea ingresar
	int n;
	std::cout << "Bienvenido al Hospital 'La Fraternidad'";
	std::cout << "Cuantos pacientes desea ingresar? ";
	std::cin >> n;
	std::cin.ignore();
	
	std::list<std::string> pacientes;
	std::list<int> ECT;

	//ingresar pacientes
	for (int i = 0; i < n; i++)
	{
		std::string nombre;
		int edad;
		int condicion;
		int telefono;
		char sexo;

		std::cout << "Ingrese el nombre del paciente: ";
		std::getline(std::cin, nombre);
		pacientes.push_back(nombre);

		std::cout << "Ingrese la edad del paciente: ";
		std::cin >> edad;
		ECT.push_back(edad);

		std::cout << "Ingrese la condicion del paciente: ";
		std::cin >> condicion;
		ECT.push_back(condicion);

		std::cout << "Ingrese el telefono del paciente: ";
		std::cin >> telefono;
		ECT.push_back(telefono);

		std::cout << "Ingrese el sexo del paciente: ";
		std::cin >> sexo;
		ECT.push_back(sexo);
	}
	int opcion;
	do
	{
		std::cout << "Menu de opciones: ";
		std::cout << "1. Porcentaje de hombres y mujeres registrados";
		std::cout << "2. Numero de pacientes por condicion registrados";
		std::cout << "3. Nombre y telefono de los pacientes con condicion 5";
		std::cout << "4. Salir";
		std::cout << "Ingrese la opcion que desea: ";
		std::cin >> opcion;
		int hombres, mujeres;
		int condicion1,condicion2,condicion3,condicion4,condicion5;
		
		switch (opcion)
		{
		case 1:
			for (int i = 0; i < n; i++)
			{
				if (ECT, i == 'M')
				{
					hombres++;
				}
				else
				{
					mujeres++;
				}
			}
			std::cout << "El porcentaje de hombres es: " << (hombres / n) * 100 << "%";
			std::cout << "El porcentaje de mujeres es: " << (mujeres / n) * 100 << "%";
			break;
		case 2:
			for (int i = 0; i < n; i++)
			{
				if (ECT, i == 1)
				{
					condicion1++;
				}
				else if (ECT, i == 2)
				{
					condicion2++;
				}
				else if (ECT,i  == 3)
				{
					condicion3++;
				}
				else if (ECT, i == 4)
				{
					condicion4++;
				}
				else if (ECT, i == 5)
				{
					condicion5++;
				}
			}
			std::cout << "El numero de pacientes con condicion 1 es: " << condicion1;
			std::cout << "El numero de pacientes con condicion 2 es: " << condicion2;
			std::cout << "El numero de pacientes con condicion 3 es: " << condicion3;
			std::cout << "El numero de pacientes con condicion 4 es: " << condicion4;
			std::cout << "El numero de pacientes con condicion 5 es: " << condicion5;
			break;
		case 3:
			for (int i = 0; i < n; i++)
			{
				if (ECT, i == 5)
				{
					std::cout << "Nombre: " << pacientes, i;
					std::cout << "Telefono: " << ECT, i + 2;
				}
			}
			break;
		case 4:
			std::cout << "Gracias por usar el programa";
			break;
		default:
			std::cout << "Opcion invalida";
			break;
		}
	} while (opcion != 4);
}