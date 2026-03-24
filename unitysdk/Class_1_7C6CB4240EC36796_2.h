#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/Struct_2_11287F05B515FFA7.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7C6CB4240EC36796_2__CTOR_OFFSET UNITYSDK_OFFSET(0xE820860)

inline static constexpr unsigned int Class_1_7C6CB4240EC36796_2_TypeDefinitionIndex = 72518;

class Class_1_7C6CB4240EC36796_2 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x10
	::Struct_2_11287F05B515FFA7 Field_1_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C6CB4240EC36796_2__CTOR_OFFSET))(this);
	}
};
