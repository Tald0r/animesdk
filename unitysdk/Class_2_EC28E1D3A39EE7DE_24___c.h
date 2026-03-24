#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EC28E1D3A39EE7DE_24___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x8C12CB0)
#define CLASS_2_EC28E1D3A39EE7DE_24___C_METHOD_1_8D3A83F5DC35DB7F_OFFSET UNITYSDK_OFFSET(0x8C12BC0)
#define CLASS_2_EC28E1D3A39EE7DE_24___C_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x8C12CF0)
#define CLASS_2_EC28E1D3A39EE7DE_24___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8C12B70)
#define CLASS_2_EC28E1D3A39EE7DE_24___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8C12BB0)

inline static constexpr unsigned int Class_2_EC28E1D3A39EE7DE_24___c_TypeDefinitionIndex = 71621;

class Class_2_EC28E1D3A39EE7DE_24___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::String*>** StaticGet___9__49_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_24___c_TypeDefinitionIndex)->GetStaticField(0x3A9A0);
	}
	static ::Class_2_EC28E1D3A39EE7DE_24___c** StaticGet___9()
	{
		return (::Class_2_EC28E1D3A39EE7DE_24___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_24___c_TypeDefinitionIndex)->GetStaticField(0x3A9A8);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__49_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_24___c_TypeDefinitionIndex)->GetStaticField(0x3A9B0);
	}
	static ::System::Func_1<::Struct_2_55B1720D3ECF0A32>** StaticGet___9__49_7()
	{
		return (::System::Func_1<::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_24___c_TypeDefinitionIndex)->GetStaticField(0x3A9B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_24___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_24___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_8D3A83F5DC35DB7F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_24___C_METHOD_1_8D3A83F5DC35DB7F_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_24___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Struct_2_55B1720D3ECF0A32 Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_55B1720D3ECF0A32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_24___C_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}
};
