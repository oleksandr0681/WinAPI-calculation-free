// cost.cpp
// Реализация структуры prime_cost, расчитывающей стоимость
// изготовления изделия.

#include "cost.h"
// Эта инструкция подключает к коду программы содержимое файла cost.h

prime_cost::prime_cost
// Конструктор структуры prime_cost.
(
	float initial_time,
	// Инициализация времени построения изделия, часов.
	float initial_cost_hour
	// Инициализация приведенной стоимости одного часа работы
	// установки, грн.
)
{
	object_time=initial_time;
	// Присвоение переменной-члену времени построения изделия, часов.
	object_cost_hour=initial_cost_hour;
	// Присвоение переменной-члену приведенной стоимости одного часа
	// работы установки, грн.
	object_cost_manufacture=0.0;
	// Инициализация переменной-члена object_cost_article.
}

prime_cost::~prime_cost()
// Деструктор структуры prime_cost.
{
}

void prime_cost::set_time(float time)
// Реализация функции доступа set_time().
{
	object_time=time;
	// Присвоение переменной-члену object_time значения, переданного через
	// параметр time.
}

float prime_cost::get_time() const
// Реализация функции доступа get_time().
{
	return object_time;
	// Возвращение значения переменной-члена object_time.
}

void prime_cost::set_cost_hour(float cost_hour)
// Реализация функции доступа set_cost_hour().
{
	object_cost_hour=cost_hour;
	// Присвоение переменной-члену object_cost_hour значения, переданного
	// через параметр cost_hour.
}

float prime_cost::get_cost_hour() const
// Реализация функции доступа get_cost_hour().
{
	return object_cost_hour;
	// Возвращение значения переменной-члена object_hour.
}

float prime_cost::calculation()
// Реализация функции-члена calculation().
{
	object_cost_manufacture=object_time*object_cost_hour;
	// Вычисление стоимости изготовления изделия, грн.
	// Стоимость изготовления изделия вычисляется как произведение
	// времени построения изделия на приведенную стоимость одного часа
	// работы установки.	
	return object_cost_manufacture;
	// Возвращение значения переменной-члена object_cost_manufacture.
}

float prime_cost::get_cost_manufacture() const
// Реализация функции доступа get_cost_manufacture().
{
	return object_cost_manufacture;
	// Возвращение значения переменной-члена object_cost_manufacture.
}

