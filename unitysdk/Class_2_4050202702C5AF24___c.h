#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CDD9BF51F19F65B4;
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_4050202702C5AF24___C_METHOD_1_BF3575BEA0F512A2_OFFSET UNITYSDK_OFFSET(0x94AD210)
#define CLASS_2_4050202702C5AF24___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x94AD1C0)
#define CLASS_2_4050202702C5AF24___C__CTOR_OFFSET UNITYSDK_OFFSET(0x94AD200)

inline static constexpr unsigned int Class_2_4050202702C5AF24___c_TypeDefinitionIndex = 46151;

class Class_2_4050202702C5AF24___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::Class_1_CDD9BF51F19F65B4*>** StaticGet___9__29_0()
	{
		return (::System::Comparison_1<::Class_1_CDD9BF51F19F65B4*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4050202702C5AF24___c_TypeDefinitionIndex)->GetStaticField(0x37D20);
	}
	static ::Class_2_4050202702C5AF24___c** StaticGet___9()
	{
		return (::Class_2_4050202702C5AF24___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4050202702C5AF24___c_TypeDefinitionIndex)->GetStaticField(0x37D28);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4050202702C5AF24___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4050202702C5AF24___C__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_BF3575BEA0F512A2(::Class_1_CDD9BF51F19F65B4* a1, ::Class_1_CDD9BF51F19F65B4* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_CDD9BF51F19F65B4*, ::Class_1_CDD9BF51F19F65B4*))((::PBYTE)hIl2Cpp + CLASS_2_4050202702C5AF24___C_METHOD_1_BF3575BEA0F512A2_OFFSET))(this, a1, a2);
	}
};
