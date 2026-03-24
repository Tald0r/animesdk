#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityResSettingTag.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_1F63CE1DE3DA1262__CCTOR_OFFSET UNITYSDK_OFFSET(0xB5802E0)
#define CLASS_1_1F63CE1DE3DA1262__CTOR_OFFSET UNITYSDK_OFFSET(0xB5802D0)

inline static constexpr unsigned int Class_1_1F63CE1DE3DA1262_TypeDefinitionIndex = 53557;

class Class_1_1F63CE1DE3DA1262 : public ::System::Object
{
public:
	static ::Il2CppArray<::MoleMole::ActivityResSettingTag>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::MoleMole::ActivityResSettingTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F63CE1DE3DA1262_TypeDefinitionIndex)->GetStaticField(0x39510);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_6()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F63CE1DE3DA1262_TypeDefinitionIndex)->GetStaticField(0x39518);
	}
	static ::Il2CppArray<::MoleMole::ActivityResSettingTag>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::MoleMole::ActivityResSettingTag>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1F63CE1DE3DA1262_TypeDefinitionIndex)->GetStaticField(0x39520);
	}
	// static const ::System::Int32 Field_1_0 = 0x989680; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F63CE1DE3DA1262__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1F63CE1DE3DA1262__CCTOR_OFFSET))();
	}
};
