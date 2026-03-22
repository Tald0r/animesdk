#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_EA02B975BED3466B;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_CF003797AF1ECFA8___C_METHOD_1_6C4FFF58A8789279_OFFSET UNITYSDK_OFFSET(0x8DA2BC0)
#define CLASS_3_CF003797AF1ECFA8___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DA2B70)
#define CLASS_3_CF003797AF1ECFA8___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DA2BB0)

inline static constexpr unsigned int Class_3_CF003797AF1ECFA8___c_TypeDefinitionIndex = 43279;

class Class_3_CF003797AF1ECFA8___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_3_EA02B975BED3466B*>** StaticGet___9__5_0()
	{
		return (::System::Action_1<::Class_3_EA02B975BED3466B*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CF003797AF1ECFA8___c_TypeDefinitionIndex)->GetStaticField(0x35470);
	}
	static ::Class_3_CF003797AF1ECFA8___c** StaticGet___9()
	{
		return (::Class_3_CF003797AF1ECFA8___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_CF003797AF1ECFA8___c_TypeDefinitionIndex)->GetStaticField(0x35478);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6C4FFF58A8789279(::Class_3_EA02B975BED3466B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_EA02B975BED3466B*))((::PBYTE)hIl2Cpp + CLASS_3_CF003797AF1ECFA8___C_METHOD_1_6C4FFF58A8789279_OFFSET))(this, a1);
	}
};
