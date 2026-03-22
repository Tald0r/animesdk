#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7C6CB4240EC36796_1__CTOR_OFFSET UNITYSDK_OFFSET(0x828F560)

inline static constexpr unsigned int Class_1_7C6CB4240EC36796_1_TypeDefinitionIndex = 62119;

class Class_1_7C6CB4240EC36796_1 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_1__CTOR_OFFSET))(this);
	}
};
