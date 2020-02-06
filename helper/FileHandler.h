#pragma once
#include <iostream>
#include <vector>

namespace fileHandler
{
	std::vector<std::vector<int>> ReadFileTo2DVectorI(std::string path, char deliminator);
	std::vector<std::vector<float>> ReadFileTo2DVectorF(std::string path, char deliminator);
	std::vector<std::vector<double>> ReadFileTo2DVectorD(std::string path, char deliminator);
	std::vector<std::vector<int>> ReadFileTo2DVectorL(std::string path, char deliminator);



}
