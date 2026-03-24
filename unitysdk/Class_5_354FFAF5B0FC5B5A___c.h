#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_0B648F1F8F6AC84A;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_5_354FFAF5B0FC5B5A___C_METHOD_1_D90FD016AE3904D5_OFFSET UNITYSDK_OFFSET(0x6168E30)
#define CLASS_5_354FFAF5B0FC5B5A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x6168DE0)
#define CLASS_5_354FFAF5B0FC5B5A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x6168E20)

inline static constexpr unsigned int Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex = 73284;

class Class_5_354FFAF5B0FC5B5A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_5_0B648F1F8F6AC84A*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_5_0B648F1F8F6AC84A*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex)->GetStaticField(0x3E870);
	}
	static ::Class_5_354FFAF5B0FC5B5A___c** StaticGet___9()
	{
		return (::Class_5_354FFAF5B0FC5B5A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex)->GetStaticField(0x3E878);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D90FD016AE3904D5(::Class_5_0B648F1F8F6AC84A* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_0B648F1F8F6AC84A*))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C_METHOD_1_D90FD016AE3904D5_OFFSET))(this, a1);
	}
};
