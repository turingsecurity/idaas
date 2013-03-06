#pragma once

enum DatabaseCommands : __int32
{   
	Wait = 0x100,
	FunctionsList = 0x1000,
	EnumerationsList = 0x2000,
	CreateEnumeration = 0x2001,
	UpdateEnumeration = 0x2002,
	DeleteEnumeration = 0x2003,
	Exit = 0xFFFF
};