#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_5_354FFAF5B0FC5B5A___C_METHOD_1_D90FD016AE3904D5_OFFSET UNITYSDK_OFFSET(0x681BA50)
#define CLASS_5_354FFAF5B0FC5B5A___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x681BA00)
#define CLASS_5_354FFAF5B0FC5B5A___C__CTOR_OFFSET UNITYSDK_OFFSET(0x681BA40)

inline static constexpr unsigned int Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex = 48336;

class Class_5_354FFAF5B0FC5B5A___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_5_2169ABC757988FED*, ::System::Boolean>** StaticGet___9__1_0()
	{
		return (::System::Func_2<::Class_5_2169ABC757988FED*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex)->GetStaticField(0x3B0E0);
	}
	static ::Class_5_354FFAF5B0FC5B5A___c** StaticGet___9()
	{
		return (::Class_5_354FFAF5B0FC5B5A___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_354FFAF5B0FC5B5A___c_TypeDefinitionIndex)->GetStaticField(0x3B0E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_D90FD016AE3904D5(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_5_354FFAF5B0FC5B5A___C_METHOD_1_D90FD016AE3904D5_OFFSET))(this, a1);
	}
};
