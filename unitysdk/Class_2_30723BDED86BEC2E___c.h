#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_30723BDED86BEC2E___C_METHOD_1_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xAEA0310)
#define CLASS_2_30723BDED86BEC2E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xAEA02C0)
#define CLASS_2_30723BDED86BEC2E___C__CTOR_OFFSET UNITYSDK_OFFSET(0xAEA0300)

inline static constexpr unsigned int Class_2_30723BDED86BEC2E___c_TypeDefinitionIndex = 62277;

class Class_2_30723BDED86BEC2E___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__13_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_30723BDED86BEC2E___c_TypeDefinitionIndex)->GetStaticField(0x35120);
	}
	static ::Class_2_30723BDED86BEC2E___c** StaticGet___9()
	{
		return (::Class_2_30723BDED86BEC2E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_30723BDED86BEC2E___c_TypeDefinitionIndex)->GetStaticField(0x35128);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_30723BDED86BEC2E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30723BDED86BEC2E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_832295EC279E5994()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_30723BDED86BEC2E___C_METHOD_1_832295EC279E5994_OFFSET))(this);
	}
};
