#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_371;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_AFF4E9169F584164___C_METHOD_1_24B172ECC7AA36B8_OFFSET UNITYSDK_OFFSET(0xA244D00)
#define CLASS_1_AFF4E9169F584164___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA244CB0)
#define CLASS_1_AFF4E9169F584164___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA244CF0)

inline static constexpr unsigned int Class_1_AFF4E9169F584164___c_TypeDefinitionIndex = 48303;

class Class_1_AFF4E9169F584164___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_0_16E4307DCC419505_371*, ::System::Int32>** StaticGet___9__13_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_371*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFF4E9169F584164___c_TypeDefinitionIndex)->GetStaticField(0x3CC50);
	}
	static ::Class_1_AFF4E9169F584164___c** StaticGet___9()
	{
		return (::Class_1_AFF4E9169F584164___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AFF4E9169F584164___c_TypeDefinitionIndex)->GetStaticField(0x3CC58);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AFF4E9169F584164___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AFF4E9169F584164___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_24B172ECC7AA36B8(::Class_0_16E4307DCC419505_371* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_371*))((::PBYTE)hIl2Cpp + CLASS_1_AFF4E9169F584164___C_METHOD_1_24B172ECC7AA36B8_OFFSET))(this, a1);
	}
};
