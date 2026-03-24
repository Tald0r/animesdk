#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_4_BB83D219B093AD9E;
class Class_4_C70C71116F894573;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_C127574D0DB64B0B___C_METHOD_1_3FDF4D8D4A89A0F1_OFFSET UNITYSDK_OFFSET(0x84A4830)
#define CLASS_3_C127574D0DB64B0B___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x84A47E0)
#define CLASS_3_C127574D0DB64B0B___C__CTOR_OFFSET UNITYSDK_OFFSET(0x84A4820)

inline static constexpr unsigned int Class_3_C127574D0DB64B0B___c_TypeDefinitionIndex = 77735;

class Class_3_C127574D0DB64B0B___c : public ::System::Object
{
public:
	static ::Class_3_C127574D0DB64B0B___c** StaticGet___9()
	{
		return (::Class_3_C127574D0DB64B0B___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C127574D0DB64B0B___c_TypeDefinitionIndex)->GetStaticField(0x3AC80);
	}
	static ::System::Action_2<::Class_4_BB83D219B093AD9E*, ::Class_4_C70C71116F894573*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_4_BB83D219B093AD9E*, ::Class_4_C70C71116F894573*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_C127574D0DB64B0B___c_TypeDefinitionIndex)->GetStaticField(0x3AC88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C127574D0DB64B0B___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C127574D0DB64B0B___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FDF4D8D4A89A0F1(::Class_4_BB83D219B093AD9E* a1, ::Class_4_C70C71116F894573* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_BB83D219B093AD9E*, ::Class_4_C70C71116F894573*))((::PBYTE)hIl2Cpp + CLASS_3_C127574D0DB64B0B___C_METHOD_1_3FDF4D8D4A89A0F1_OFFSET))(this, a1, a2);
	}
};
