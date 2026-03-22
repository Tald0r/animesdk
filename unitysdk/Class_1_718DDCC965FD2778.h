#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_109;

#define CLASS_1_718DDCC965FD2778_METHOD_1_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x835D260)
#define CLASS_1_718DDCC965FD2778__CTOR_OFFSET UNITYSDK_OFFSET(0x835D190)

inline static constexpr unsigned int Class_1_718DDCC965FD2778_TypeDefinitionIndex = 68887;

class Class_1_718DDCC965FD2778 : public ::System::Object
{
public:
	::Class_2_208CC9941471731A_109* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_718DDCC965FD2778__CTOR_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_718DDCC965FD2778_METHOD_1_C74CF020AA42ED85_OFFSET))(this);
	}
};
