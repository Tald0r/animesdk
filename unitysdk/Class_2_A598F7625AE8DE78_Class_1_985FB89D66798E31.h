#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_A598F7625AE8DE78_Class_1_32BCD41779DEEDDF;
namespace MoleMole { class GlobalPrepatchData; }
namespace System { class Exception; }

#define CLASS_2_A598F7625AE8DE78_CLASS_1_985FB89D66798E31__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDAB00)

inline static constexpr unsigned int Class_2_A598F7625AE8DE78_Class_1_985FB89D66798E31_TypeDefinitionIndex = 74306;

class Class_2_A598F7625AE8DE78_Class_1_985FB89D66798E31 : public ::System::Object
{
public:
	::System::Exception* Field_1_2; // 0x10
	::MoleMole::GlobalPrepatchData* Field_1_1; // 0x18
	::Class_2_A598F7625AE8DE78_Class_1_32BCD41779DEEDDF* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A598F7625AE8DE78_CLASS_1_985FB89D66798E31__CTOR_OFFSET))(this);
	}
};
