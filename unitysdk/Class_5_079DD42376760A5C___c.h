#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_5_2169ABC757988FED;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_5_079DD42376760A5C___C_METHOD_1_71E03FFB54AF3649_OFFSET UNITYSDK_OFFSET(0x987F230)
#define CLASS_5_079DD42376760A5C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x987F1E0)
#define CLASS_5_079DD42376760A5C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x987F220)

inline static constexpr unsigned int Class_5_079DD42376760A5C___c_TypeDefinitionIndex = 76333;

class Class_5_079DD42376760A5C___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_5_2169ABC757988FED*, ::System::Boolean>** StaticGet___9__2_1()
	{
		return (::System::Func_2<::Class_5_2169ABC757988FED*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_5_079DD42376760A5C___c_TypeDefinitionIndex)->GetStaticField(0x370E0);
	}
	static ::Class_5_079DD42376760A5C___c** StaticGet___9()
	{
		return (::Class_5_079DD42376760A5C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_5_079DD42376760A5C___c_TypeDefinitionIndex)->GetStaticField(0x370E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C___C__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_71E03FFB54AF3649(::Class_5_2169ABC757988FED* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_5_2169ABC757988FED*))((::PBYTE)hIl2Cpp + CLASS_5_079DD42376760A5C___C_METHOD_1_71E03FFB54AF3649_OFFSET))(this, a1);
	}
};
