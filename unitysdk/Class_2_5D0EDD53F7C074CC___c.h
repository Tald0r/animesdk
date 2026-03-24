#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_2_5D0EDD53F7C074CC___C_METHOD_1_07E567B3C6C3D7D7_OFFSET UNITYSDK_OFFSET(0xBCCA990)
#define CLASS_2_5D0EDD53F7C074CC___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xBCCA940)
#define CLASS_2_5D0EDD53F7C074CC___C__CTOR_OFFSET UNITYSDK_OFFSET(0xBCCA980)

inline static constexpr unsigned int Class_2_5D0EDD53F7C074CC___c_TypeDefinitionIndex = 37495;

class Class_2_5D0EDD53F7C074CC___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__5_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D0EDD53F7C074CC___c_TypeDefinitionIndex)->GetStaticField(0x37E40);
	}
	static ::Class_2_5D0EDD53F7C074CC___c** StaticGet___9()
	{
		return (::Class_2_5D0EDD53F7C074CC___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_5D0EDD53F7C074CC___c_TypeDefinitionIndex)->GetStaticField(0x37E48);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_5D0EDD53F7C074CC___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D0EDD53F7C074CC___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_07E567B3C6C3D7D7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D0EDD53F7C074CC___C_METHOD_1_07E567B3C6C3D7D7_OFFSET))(this);
	}
};
