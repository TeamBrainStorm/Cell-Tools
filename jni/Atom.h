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

#ifndef ATOM_INCLUDED
#define ATOM_INCLUDED

#include <map>
#include <string>
#include "Color.hpp"

extern int test;

class Atom {
public:
	std::string resn, elem, chain, atom, ss;
	float x, y, z, b;
	int resi, serial;
	Color color;
	bool hetflag;
	bool valid;
	std::map<int, int> bonds;

	Atom();
	int isConnected(Atom &atom);
};

#endif
