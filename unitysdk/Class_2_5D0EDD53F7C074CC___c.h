#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_5D0EDD53F7C074CC___C_METHOD_1_913947B6596EB50A_OFFSET UNITYSDK_OFFSET(0x7854C20)
#define CLASS_2_5D0EDD53F7C074CC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7854BD0)
#define CLASS_2_5D0EDD53F7C074CC___C__CTOR_OFFSET UNITYSDK_OFFSET(0x7854C10)

inline static constexpr unsigned int Class_2_5D0EDD53F7C074CC___c_TypeDefinitionIndex = 53069;

class Class_2_5D0EDD53F7C074CC___c : public ::System::Object
{
public:
	static ::Class_2_5D0EDD53F7C074CC___c** StaticGet___9()
	{
		return (::Class_2_5D0EDD53F7C074CC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D0EDD53F7C074CC___c_TypeDefinitionIndex)->GetStaticField(0x394A0);
	}
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D0EDD53F7C074CC___c_TypeDefinitionIndex)->GetStaticField(0x394A8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5D0EDD53F7C074CC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D0EDD53F7C074CC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_913947B6596EB50A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D0EDD53F7C074CC___C_METHOD_1_913947B6596EB50A_OFFSET))(this);
	}
};
