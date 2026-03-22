#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/Struct_2_02E84E3D148EE908.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_978858B86AA44864__CTOR_OFFSET UNITYSDK_OFFSET(0x93AFCD0)

inline static constexpr unsigned int Class_1_978858B86AA44864_TypeDefinitionIndex = 72011;

class Class_1_978858B86AA44864 : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowChessboardUID Field_1_2; // 0x10
	::Struct_2_02E84E3D148EE908 Field_1_1; // 0x18
	::Struct_2_02E84E3D148EE908 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_978858B86AA44864__CTOR_OFFSET))(this);
	}
};
