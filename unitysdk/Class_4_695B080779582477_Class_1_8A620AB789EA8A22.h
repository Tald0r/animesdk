#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Object.h"

class Class_4_695B080779582477;
class Class_5_2169ABC757988FED;

#define CLASS_4_695B080779582477_CLASS_1_8A620AB789EA8A22_METHOD_1_44BAB1D0DFEB4302_OFFSET UNITYSDK_OFFSET(0x6A39780)
#define CLASS_4_695B080779582477_CLASS_1_8A620AB789EA8A22_METHOD_1_F2A1D3C2AD5054B1_OFFSET UNITYSDK_OFFSET(0x6A399F0)
#define CLASS_4_695B080779582477_CLASS_1_8A620AB789EA8A22__CTOR_OFFSET UNITYSDK_OFFSET(0x6A39770)

inline static constexpr unsigned int Class_4_695B080779582477_Class_1_8A620AB789EA8A22_TypeDefinitionIndex = 54823;

class Class_4_695B080779582477_Class_1_8A620AB789EA8A22 : public ::System::Object
{
public:
	::Il2CppArray<::System::Single>* Field_1_2; // 0x10
	::Class_4_695B080779582477* Field_1_3; // 0x18
	::MoleMole::Vector2Int Field_1_1; // 0x20
	::MoleMole::HollowChessboard::HollowCell Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_695B080779582477_CLASS_1_8A620AB789EA8A22__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_44BAB1D0DFEB4302(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_4_695B080779582477_CLASS_1_8A620AB789EA8A22_METHOD_1_44BAB1D0DFEB4302_OFFSET))(this, a1);
	}

	::System::Void Method_1_F2A1D3C2AD5054B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_695B080779582477_CLASS_1_8A620AB789EA8A22_METHOD_1_F2A1D3C2AD5054B1_OFFSET))(this);
	}
};
