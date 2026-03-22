#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_3_E6469BA5424FD931___C_METHOD_1_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x8E84BC0)
#define CLASS_3_E6469BA5424FD931___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8E84B70)
#define CLASS_3_E6469BA5424FD931___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8E84BB0)

inline static constexpr unsigned int Class_3_E6469BA5424FD931___c_TypeDefinitionIndex = 49184;

class Class_3_E6469BA5424FD931___c : public ::System::Object
{
public:
	static ::System::Action** StaticGet___9__47_0()
	{
		return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E6469BA5424FD931___c_TypeDefinitionIndex)->GetStaticField(0x36170);
	}
	static ::Class_3_E6469BA5424FD931___c** StaticGet___9()
	{
		return (::Class_3_E6469BA5424FD931___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E6469BA5424FD931___c_TypeDefinitionIndex)->GetStaticField(0x36178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E6469BA5424FD931___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6469BA5424FD931___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6469BA5424FD931___C_METHOD_1_CEA32FF190776922_OFFSET))(this);
	}
};
