# DouglasPeucker-Algorithm
The source code of DouglasPeucker Algorithm in C++.

This algorithm is to simplify polyline. remove some points which are in a road.

I used this algorithm when I was working in Navigation industry.
Roads(we called links) are composed lots of vertexs. Because drawing road is to draw line between two vertexs. especially, curved roads have lots of vertexs.
Lots of vertexs are good to express real world roads.
However, there are some problem in digitalizing. As I said, to draw road is to draw line between two vertexs. so it takes long time when we need to calculate using vertexts and to draw roads.
So before we do something, we always simplify lines.

This algorithm is quite simple.
the algorithm is,
 1. draw a line between start point and end point.
 2. find the fartest point from the line.
 3. if the fartest point is over the epsilon, remove the point.
 
