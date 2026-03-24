#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_204;
class Class_3_E342D954CB576697;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class MonoGamepadNestedListDelegate; }

#define CLASS_1_7883C51142BE2152_METHOD_1_D3A7E21D555BCD74_OFFSET UNITYSDK_OFFSET(0x83EF3D0)
#define CLASS_1_7883C51142BE2152__CTOR_OFFSET UNITYSDK_OFFSET(0x83EF3C0)

inline static constexpr unsigned int Class_1_7883C51142BE2152_TypeDefinitionIndex = 39396;

class Class_1_7883C51142BE2152 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_204* Field_1_2; // 0x10
	::MoleMole::MonoGamepadNavigatableList* Field_1_4; // 0x18
	::Class_3_E342D954CB576697* Field_1_7; // 0x20
	::MoleMole::MonoGamepadNestedListDelegate* Field_1_5; // 0x28
	::System::Int32 Field_1_6; // 0x30
	::System::Int32 Field_1_0; // 0x34
	::System::Single Field_1_3; // 0x38
	::System::Boolean Field_1_1; // 0x3C
	::System::Boolean Field_1_8; // 0x3D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7883C51142BE2152__CTOR_OFFSET))(this);
	}

	::MoleMole::MonoGamepadNavigatableList* Method_1_D3A7E21D555BCD74()
	{
		return ((::MoleMole::MonoGamepadNavigatableList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7883C51142BE2152_METHOD_1_D3A7E21D555BCD74_OFFSET))(this);
	}
};
