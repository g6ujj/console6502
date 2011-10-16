//
//  main.cpp
//
//  Author:
//       Neil Stoker <gg6ujj@gmail.com>
//
//  Copyright (c) 2011 Neil Stoker
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.
#include <cstdlib>
#include <iostream>
#include <string>

#include "main.h"
#include "versionConsole.h"


int main()
{
    cout << "6502 Simulator. Initialising..." << endl;
    string s=AutoVersion::FULLVERSION_STRING;
    cout<<"Build   :"<<s<<endl;
    cout<<"Library :"<<Lib6502Version::FULLVERSION_STRING<<endl;
    ram=new Memory();
    cpu=new CPU(ram);

    cpuTest();

    cout<<"6502 Simulator. Exiting..."<<endl;
    return 0;
}

void cpuTest()
{
    cout<<"CPU Testing..."<<endl;
    cpuTest001();
    cout<<endl<<"... all tests completed."<<endl<<endl;
}
void cpuTest001()
{
    //
}
