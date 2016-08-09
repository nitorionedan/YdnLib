// YdnLib.cpp : DLL �A�v���P�[�V�����p�ɃG�N�X�|�[�g�����֐����`���܂��B
//

#include "stdafx.h"
#include "YdnLib.h"
#include <stdexcept>


namespace YdnLib
{
	double MyYdnLib::Add(double a, double b)
	{
		return a + b;
	}

	double MyYdnLib::Substract(double a, double b)
	{
		return a - b;
	}

	double MyYdnLib::Multiply(double a, double b)
	{
		return a * b;
	}

	YDNLIB_API double MyYdnLib::Divide(double a, double b)
	{
		if (b == 0)	throw std::invalid_argument("b cannot be zero!");

		return a / b;
	}
}