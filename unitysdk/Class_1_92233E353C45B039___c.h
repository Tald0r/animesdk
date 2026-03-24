#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_84CEDCEF739506C1_2;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_92233E353C45B039___C_METHOD_1_8EEE6B9DDA765056_OFFSET UNITYSDK_OFFSET(0x73858E0)
#define CLASS_1_92233E353C45B039___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x7385890)
#define CLASS_1_92233E353C45B039___C__CTOR_OFFSET UNITYSDK_OFFSET(0x73858D0)

inline static constexpr unsigned int Class_1_92233E353C45B039___c_TypeDefinitionIndex = 69045;

class Class_1_92233E353C45B039___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Int32, ::Class_2_84CEDCEF739506C1_2*>** StaticGet___9__17_0()
	{
		return (::System::Func_2<::System::Int32, ::Class_2_84CEDCEF739506C1_2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92233E353C45B039___c_TypeDefinitionIndex)->GetStaticField(0x3E040);
	}
	static ::Class_1_92233E353C45B039___c** StaticGet___9()
	{
		return (::Class_1_92233E353C45B039___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92233E353C45B039___c_TypeDefinitionIndex)->GetStaticField(0x3E048);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92233E353C45B039___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_92233E353C45B039___C__CTOR_OFFSET))(this);
	}

	::Class_2_84CEDCEF739506C1_2* Method_1_8EEE6B9DDA765056(::System::Int32 a1)
	{
		return ((::Class_2_84CEDCEF739506C1_2*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92233E353C45B039___C_METHOD_1_8EEE6B9DDA765056_OFFSET))(this, a1);
	}
};
