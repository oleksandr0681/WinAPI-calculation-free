// cost.cpp
// ���������� ��������� prime_cost, ������������� ���������
// ������������ �������.

#include "cost.h"
// ��� ���������� ���������� � ���� ��������� ���������� ����� cost.h

prime_cost::prime_cost
// ����������� ��������� prime_cost.
(
	float initial_time,
	// ������������� ������� ���������� �������, �����.
	float initial_cost_hour
	// ������������� ����������� ��������� ������ ���� ������
	// ���������, ���.
)
{
	object_time=initial_time;
	// ���������� ����������-����� ������� ���������� �������, �����.
	object_cost_hour=initial_cost_hour;
	// ���������� ����������-����� ����������� ��������� ������ ����
	// ������ ���������, ���.
	object_cost_manufacture=0.0;
	// ������������� ����������-����� object_cost_article.
}

prime_cost::~prime_cost()
// ���������� ��������� prime_cost.
{
}

void prime_cost::set_time(float time)
// ���������� ������� ������� set_time().
{
	object_time=time;
	// ���������� ����������-����� object_time ��������, ����������� �����
	// �������� time.
}

float prime_cost::get_time() const
// ���������� ������� ������� get_time().
{
	return object_time;
	// ����������� �������� ����������-����� object_time.
}

void prime_cost::set_cost_hour(float cost_hour)
// ���������� ������� ������� set_cost_hour().
{
	object_cost_hour=cost_hour;
	// ���������� ����������-����� object_cost_hour ��������, �����������
	// ����� �������� cost_hour.
}

float prime_cost::get_cost_hour() const
// ���������� ������� ������� get_cost_hour().
{
	return object_cost_hour;
	// ����������� �������� ����������-����� object_hour.
}

float prime_cost::calculation()
// ���������� �������-����� calculation().
{
	object_cost_manufacture=object_time*object_cost_hour;
	// ���������� ��������� ������������ �������, ���.
	// ��������� ������������ ������� ����������� ��� ������������
	// ������� ���������� ������� �� ����������� ��������� ������ ����
	// ������ ���������.	
	return object_cost_manufacture;
	// ����������� �������� ����������-����� object_cost_manufacture.
}

float prime_cost::get_cost_manufacture() const
// ���������� ������� ������� get_cost_manufacture().
{
	return object_cost_manufacture;
	// ����������� �������� ����������-����� object_cost_manufacture.
}

