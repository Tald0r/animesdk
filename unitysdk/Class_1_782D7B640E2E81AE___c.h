#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_782D7B640E2E81AE___C_METHOD_1_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x7B987F0)
#define CLASS_1_782D7B640E2E81AE___C_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x7B98730)
#define CLASS_1_782D7B640E2E81AE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7B986E0)
#define CLASS_1_782D7B640E2E81AE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7B98720)

inline static constexpr unsigned int Class_1_782D7B640E2E81AE___c_TypeDefinitionIndex = 76968;

class Class_1_782D7B640E2E81AE___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__24_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_782D7B640E2E81AE___c_TypeDefinitionIndex)->GetStaticField(0x30FF0);
	}
	static ::Class_1_782D7B640E2E81AE___c** StaticGet___9()
	{
		return (::Class_1_782D7B640E2E81AE___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_782D7B640E2E81AE___c_TypeDefinitionIndex)->GetStaticField(0x30FF8);
	}
	static ::System::Action** StaticGet___9__40_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_782D7B640E2E81AE___c_TypeDefinitionIndex)->GetStaticField(0x31000);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_782D7B640E2E81AE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_782D7B640E2E81AE___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_782D7B640E2E81AE___C_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_782D7B640E2E81AE___C_METHOD_1_10054BB010E03EDD_OFFSET))(this);
	}
};
