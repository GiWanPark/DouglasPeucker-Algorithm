#pragma once
#include <vector>
#include <iostream>
#include "DouglasPeucker.h"

int main()
{
	std::vector<Point> polyLine;
	std::vector<Point> simplifiedPolyLine;

	polyLine.push_back(Point(0.0, 0.0));
	polyLine.push_back(Point(0.2, -1.0));
	polyLine.push_back(Point(3.0, -2.3));
	polyLine.push_back(Point(4.0, -1.0));
	polyLine.push_back(Point(5.0, -0.4));
	polyLine.push_back(Point(5.3, -0.5));
	polyLine.push_back(Point(6.0, -1.5));
	polyLine.push_back(Point(9.0, 0.0));

	DouglasPeucker(polyLine, 1.0, simplifiedPolyLine);

	for (int i = 0; i < simplifiedPolyLine.size(); i++)
		std::cout << simplifiedPolyLine[i].first << "," << simplifiedPolyLine[i].second << std::endl;

	return 0;
}

