#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_944E370CE399E537___C_METHOD_1_32403D801D072934_OFFSET UNITYSDK_OFFSET(0x6477EF0)
#define CLASS_1_944E370CE399E537___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6477EA0)
#define CLASS_1_944E370CE399E537___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6477EE0)

inline static constexpr unsigned int Class_1_944E370CE399E537___c_TypeDefinitionIndex = 51334;

class Class_1_944E370CE399E537___c : public ::System::Object
{
public:
	static ::Class_1_944E370CE399E537___c** StaticGet___9()
	{
		return (::Class_1_944E370CE399E537___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_944E370CE399E537___c_TypeDefinitionIndex)->GetStaticField(0x3FA20);
	}
	static ::System::Action** StaticGet___9__0_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_944E370CE399E537___c_TypeDefinitionIndex)->GetStaticField(0x3FA28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_32403D801D072934()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_944E370CE399E537___C_METHOD_1_32403D801D072934_OFFSET))(this);
	}
};
