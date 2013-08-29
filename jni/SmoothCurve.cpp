/*  NDKmol - Molecular Viewer on Android NDK

     (C) Copyright 2011 - 2012, biochem_fan

     This file is part of NDKmol.

     NDKmol is free software: you can redistribute it and/or modify
     it under the terms of the GNU Lesser General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.

     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU Lesser General Public License for more details.

     You should have received a copy of the GNU Lesser General Public License
     along with this program.  If not, see <http://www.gnu.org/licenses/>. */

#include "SmoothCurve.hpp"

SmoothCurve::SmoothCurve(std::vector<Vector3> &points, std::vector<Color> &colors, float curveWidth, int div)
 : Line() {
	if (points.size() > 1) {
		vertexBuffer = subdivide(points, div);
		if (colors.size() > 0) {
			colorBuffer = colorVectorToFloatArray(colors, div);
			nPoints = ((points.size() - 1) * div + 1);
			vertexColors = true;
		}

		width = curveWidth;
		discrete = false;
	}
}

SmoothCurve::SmoothCurve(std::vector<Vector3> &points, std::vector<bool> &smoothen, std::vector<Color> &colors, float curveWidth, int div)
: Line() {
	if (points.size() > 1) {
		vertexBuffer = subdivide(points, div, smoothen);
		if (colors.size() > 0) {
			colorBuffer = colorVectorToFloatArray(colors, div);
			nPoints = ((points.size() - 1) * div + 1);
			vertexColors = true;
		}
		
		width = curveWidth;
		discrete = false;
	}
}