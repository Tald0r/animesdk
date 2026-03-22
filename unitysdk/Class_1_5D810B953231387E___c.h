#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_5D810B953231387E___C_METHOD_1_EC00644AF39B5DED_1_OFFSET UNITYSDK_OFFSET(0x9EF2510)
#define CLASS_1_5D810B953231387E___C_METHOD_1_EC00644AF39B5DED_OFFSET UNITYSDK_OFFSET(0x9EF2440)
#define CLASS_1_5D810B953231387E___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EF23F0)
#define CLASS_1_5D810B953231387E___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF2430)

inline static constexpr unsigned int Class_1_5D810B953231387E___c_TypeDefinitionIndex = 72480;

class Class_1_5D810B953231387E___c : public ::System::Object
{
public:
	static ::Class_1_5D810B953231387E___c** StaticGet___9()
	{
		return (::Class_1_5D810B953231387E___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D810B953231387E___c_TypeDefinitionIndex)->GetStaticField(0x32FC0);
	}
	static ::System::Action** StaticGet___9__8_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D810B953231387E___c_TypeDefinitionIndex)->GetStaticField(0x32FC8);
	}
	static ::System::Action** StaticGet___9__8_1()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D810B953231387E___c_TypeDefinitionIndex)->GetStaticField(0x32FD0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D810B953231387E___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D810B953231387E___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EC00644AF39B5DED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D810B953231387E___C_METHOD_1_EC00644AF39B5DED_OFFSET))(this);
	}

	::System::Void Method_1_EC00644AF39B5DED_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5D810B953231387E___C_METHOD_1_EC00644AF39B5DED_1_OFFSET))(this);
	}
};
