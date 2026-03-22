#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define CLASS_1_3169BBF21D83DEAB__CCTOR_OFFSET UNITYSDK_OFFSET(0xC530EB0)
#define CLASS_1_3169BBF21D83DEAB__CTOR_OFFSET UNITYSDK_OFFSET(0xC530E90)

inline static constexpr unsigned int Class_1_3169BBF21D83DEAB_TypeDefinitionIndex = 71586;

class Class_1_3169BBF21D83DEAB : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::Config::MonsterFunctionType>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::MoleMole::Config::MonsterFunctionType>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3169BBF21D83DEAB_TypeDefinitionIndex)->GetStaticField(0x38990);
	}
	::System::String* Field_1_6; // 0x10
	::Il2CppArray<::MoleMole::Config::MonsterFunctionType>* Field_1_5; // 0x18
	::UnityEngine::Vector3 Field_1_10; // 0x20
	::System::Boolean Field_1_1; // 0x2C
	::System::Boolean Field_1_7; // 0x2D
	::System::Boolean Field_1_9; // 0x2E
	::System::Boolean Field_1_2; // 0x2F
	::System::Single Field_1_11; // 0x30
	::System::Boolean Field_1_8; // 0x34
	::System::Boolean Field_1_3; // 0x35
	::System::Boolean Field_1_12; // 0x36
	::System::Boolean Field_1_13; // 0x37
	::System::Boolean Field_1_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3169BBF21D83DEAB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3169BBF21D83DEAB__CCTOR_OFFSET))();
	}
};
