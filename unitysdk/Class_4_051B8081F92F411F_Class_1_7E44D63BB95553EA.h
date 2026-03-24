#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class Class_3_EAEAD96BCD002533_1;

#define CLASS_4_051B8081F92F411F_CLASS_1_7E44D63BB95553EA_METHOD_1_D32CEADAF1DC0152_OFFSET UNITYSDK_OFFSET(0x9980800)
#define CLASS_4_051B8081F92F411F_CLASS_1_7E44D63BB95553EA__CTOR_OFFSET UNITYSDK_OFFSET(0x99807F0)

inline static constexpr unsigned int Class_4_051B8081F92F411F_Class_1_7E44D63BB95553EA_TypeDefinitionIndex = 40258;

class Class_4_051B8081F92F411F_Class_1_7E44D63BB95553EA : public ::System::Object
{
public:
	::Class_3_EAEAD96BCD002533_1* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_CLASS_1_7E44D63BB95553EA__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D32CEADAF1DC0152(::MoleMole::HollowChessboard::HollowCell a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + CLASS_4_051B8081F92F411F_CLASS_1_7E44D63BB95553EA_METHOD_1_D32CEADAF1DC0152_OFFSET))(this, a1);
	}
};
