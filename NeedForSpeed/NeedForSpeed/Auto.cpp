#include "Auto.h"

Auto::Auto(std::string marca, std::string modelo, int vel, int caballos, float aceleracion)
{
	this->marca = marca;
	this->modelo = modelo;
	this->velMax = vel;
	this->aceleracion = aceleracion;
}
