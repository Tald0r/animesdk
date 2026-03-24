#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_208CC9941471731A_768;
class Class_3_73AB0398DC776E2A;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define CLASS_3_73AB0398DC776E2A_CLASS_1_A12A0BDF45ABDDC0_METHOD_1_3060617FE14209CC_OFFSET UNITYSDK_OFFSET(0xE773980)
#define CLASS_3_73AB0398DC776E2A_CLASS_1_A12A0BDF45ABDDC0_METHOD_1_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0xE773AF0)
#define CLASS_3_73AB0398DC776E2A_CLASS_1_A12A0BDF45ABDDC0__CTOR_OFFSET UNITYSDK_OFFSET(0xE773970)

inline static constexpr unsigned int Class_3_73AB0398DC776E2A_Class_1_A12A0BDF45ABDDC0_TypeDefinitionIndex = 45756;

class Class_3_73AB0398DC776E2A_Class_1_A12A0BDF45ABDDC0 : public ::System::Object
{
public:
	::Class_3_F35B080B137ECC46* Field_1_6; // 0x10
	::Class_3_73AB0398DC776E2A* Field_1_3; // 0x18
	::MoleMole::Battle::Entity* Field_1_0; // 0x20
	::MoleMole::Battle::Entity* Field_1_4; // 0x28
	::System::String* Field_1_5; // 0x30
	::Class_2_208CC9941471731A_768* Field_1_1; // 0x38
	::System::Int32 Field_1_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_CLASS_1_A12A0BDF45ABDDC0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3060617FE14209CC(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_CLASS_1_A12A0BDF45ABDDC0_METHOD_1_3060617FE14209CC_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_73AB0398DC776E2A_CLASS_1_A12A0BDF45ABDDC0_METHOD_1_ED79705457B92B5C_OFFSET))(this);
	}
};
