

#pragma once


#ifdef MEMORYLIBRARY_EXPORTS  
#define MEMORYLIBRARY_API __declspec(dllexport)   
#else  
#define MEMORYLIBRARY_API __declspec(dllimport)   
#endif  


namespace MemoryLibrary
{
	// This class is exported from the MathLibrary.dll  
	class Functions
	{
	public:


		// Example for future definitions
		
		//// Returns a * b  
		//static MEMORYLIBRARY_API double Multiply(double a, double b);

		//// Returns a + (a * b)  
		//static MEMORYLIBRARY_API double AddMultiply(double a, double b);

	};
}


