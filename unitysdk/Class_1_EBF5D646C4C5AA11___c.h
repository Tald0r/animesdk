#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_750C45F06470C198;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_EBF5D646C4C5AA11___C_METHOD_1_1DA046EF3AB7EF36_OFFSET UNITYSDK_OFFSET(0xD4977D0)
#define CLASS_1_EBF5D646C4C5AA11___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD497780)
#define CLASS_1_EBF5D646C4C5AA11___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD4977C0)

inline static constexpr unsigned int Class_1_EBF5D646C4C5AA11___c_TypeDefinitionIndex = 76315;

class Class_1_EBF5D646C4C5AA11___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_750C45F06470C198*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_1_750C45F06470C198*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBF5D646C4C5AA11___c_TypeDefinitionIndex)->GetStaticField(0x45980);
	}
	static ::Class_1_EBF5D646C4C5AA11___c** StaticGet___9()
	{
		return (::Class_1_EBF5D646C4C5AA11___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBF5D646C4C5AA11___c_TypeDefinitionIndex)->GetStaticField(0x45988);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBF5D646C4C5AA11___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EBF5D646C4C5AA11___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1DA046EF3AB7EF36(::Class_1_750C45F06470C198* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_750C45F06470C198*))((::PBYTE)hIl2Cpp + CLASS_1_EBF5D646C4C5AA11___C_METHOD_1_1DA046EF3AB7EF36_OFFSET))(this, a1);
	}
};
