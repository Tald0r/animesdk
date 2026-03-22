#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_55B1720D3ECF0A32.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Func_1; }

#define CLASS_2_EC28E1D3A39EE7DE_5___C_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x951DD90)
#define CLASS_2_EC28E1D3A39EE7DE_5___C_METHOD_1_8D3A83F5DC35DB7F_OFFSET UNITYSDK_OFFSET(0x951DEE0)
#define CLASS_2_EC28E1D3A39EE7DE_5___C_METHOD_1_A538D7DBA7BF5017_OFFSET UNITYSDK_OFFSET(0x951DDD0)
#define CLASS_2_EC28E1D3A39EE7DE_5___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x951DD40)
#define CLASS_2_EC28E1D3A39EE7DE_5___C__CTOR_OFFSET UNITYSDK_OFFSET(0x951DD80)

inline static constexpr unsigned int Class_2_EC28E1D3A39EE7DE_5___c_TypeDefinitionIndex = 63492;

class Class_2_EC28E1D3A39EE7DE_5___c : public ::System::Object
{
public:
	static ::System::Func_1<::Struct_2_55B1720D3ECF0A32>** StaticGet___9__49_7()
	{
		return (::System::Func_1<::Struct_2_55B1720D3ECF0A32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_5___c_TypeDefinitionIndex)->GetStaticField(0x3CC10);
	}
	static ::Class_2_EC28E1D3A39EE7DE_5___c** StaticGet___9()
	{
		return (::Class_2_EC28E1D3A39EE7DE_5___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_5___c_TypeDefinitionIndex)->GetStaticField(0x3CC18);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__49_10()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_5___c_TypeDefinitionIndex)->GetStaticField(0x3CC20);
	}
	static ::System::Func_1<::System::String*>** StaticGet___9__49_12()
	{
		return (::System::Func_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_EC28E1D3A39EE7DE_5___c_TypeDefinitionIndex)->GetStaticField(0x3CC28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_5___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_5___C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_5___C_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::Struct_2_55B1720D3ECF0A32 Method_1_A538D7DBA7BF5017()
	{
		return ((::Struct_2_55B1720D3ECF0A32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_5___C_METHOD_1_A538D7DBA7BF5017_OFFSET))(this);
	}

	::System::String* Method_1_8D3A83F5DC35DB7F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EC28E1D3A39EE7DE_5___C_METHOD_1_8D3A83F5DC35DB7F_OFFSET))(this);
	}
};
