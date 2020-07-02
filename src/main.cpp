#include <iostream>
#include "Polinom.h"

 bool test1()
{
	int check[4] = { 1,2,2,2 };
	int check2[2] = {1,1};
	Polinom<int> pol1(check,4);
	Polinom<int> pol2(check2, 2);
	if (pol2.solution(2) == 2)
	{
		return true;
	}

	else
	{
		return false;
	}
	

}

 int main()
 {
	 if (test1() == true)
		 std::cout << "true" << std::endl;
	 else
		 std::cout << "false" << std::endl;

 }
