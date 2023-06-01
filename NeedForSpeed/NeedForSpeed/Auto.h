#pragma once

#include <string>
#include "Ciguenal.h"
#include "Diferencial.h"
#include "Radiador.h"
#include "Neumaticos.h"
#include "CajaCambios.h"

class Auto
{
public:
	std::string marca;
	std::string modelo;
	int velMax; //km/h
	int caballosFuerza;
	float aceleracion;
	Ciguenal* cig;
	Radiador* rad;
	Neumaticos* neum;
	Diferencial* dif;
	CajaCambios *caja;

	Auto(std::string marca, std::string modelo, int vel, int caballos, float aceleracion);
};

