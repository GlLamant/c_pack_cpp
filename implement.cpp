#include "implement.h"


CImplement::CImplement()
{
	m_value = 0;
}

void CImplement::Set(int val)
{
	m_value = val;
}

int CImplement::Value()
{
	return m_value;
}
