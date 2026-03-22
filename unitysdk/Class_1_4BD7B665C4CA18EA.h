#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_13.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629;

#define CLASS_1_4BD7B665C4CA18EA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x69CF760)
#define CLASS_1_4BD7B665C4CA18EA__CTOR_OFFSET UNITYSDK_OFFSET(0x69CF750)

inline static constexpr unsigned int Class_1_4BD7B665C4CA18EA_TypeDefinitionIndex = 47422;

class Class_1_4BD7B665C4CA18EA : public ::System::Object
{
public:
	::Enum_3_4608E37A1B3D374A_13 Field_1_1; // 0x10
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BD7B665C4CA18EA__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::Class_1_C9DFE5EE7107C629* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629*))((::PBYTE)hIl2Cpp + CLASS_1_4BD7B665C4CA18EA__CTOR_1_OFFSET))(this, a1);
	}
};
