
#include "pch.h"
#include <iostream>
#include<future>
#include <chrono>
#include <thread>
#include<array>
#include<numeric>
using namespace std;
#include<array>
#include<algorithm>


//c++ folds require c+++`17
//template<typename ...T>
//auto sum_1(T ...args) {
//	return ( args + ...);
//}

int main()
{
	std::array< int,10 > arr{ 1, 2,3,4,4,5,6,6,77,87 };
	int sum = std::accumulate(arr.begin(), arr.end(), 0, std::plus<int>());
	std::for_each(arr.begin(), arr.end(), [&](int & i) { sum = sum + i; });


	for (auto i : arr) {
		sum = sum + i;
	}

	//sum_1(1,23,3,4,5);
	//using c++ folds 


}




//Please refer https://www.techiedelight.com/find-sum-elements-cpp-array/
