#pragma once

#ifdef YDNLIB_EXPORTS
#define YDNLIB_API __declspec(dllexport)
#else
#define YDNLIB_API __declspec(dllimport)
#endif


namespace YdnLib
{
	class MyYdnLib
	{
	public:
		// Return a + b
		static YDNLIB_API double Add(double a, double b);

		// Return a - b
		static YDNLIB_API double Substract(double a, double b);

		// Return a * b
		static YDNLIB_API double Multiply(double a, double b);

		// Return a / b
		// Throws const std::invalid_argument& if b is 0
		static YDNLIB_API double Divide(double a, double b);
	};
}