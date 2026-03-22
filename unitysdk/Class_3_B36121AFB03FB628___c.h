#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_8C84B83D3715B347;
class Class_3_A5AF8EA2F7094EFB;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_B36121AFB03FB628___C_METHOD_1_B950D774316E97B5_OFFSET UNITYSDK_OFFSET(0x89074E0)
#define CLASS_3_B36121AFB03FB628___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8907490)
#define CLASS_3_B36121AFB03FB628___C__CTOR_OFFSET UNITYSDK_OFFSET(0x89074D0)

inline static constexpr unsigned int Class_3_B36121AFB03FB628___c_TypeDefinitionIndex = 61941;

class Class_3_B36121AFB03FB628___c : public ::System::Object
{
public:
	static ::Class_3_B36121AFB03FB628___c** StaticGet___9()
	{
		return (::Class_3_B36121AFB03FB628___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B36121AFB03FB628___c_TypeDefinitionIndex)->GetStaticField(0x2EF60);
	}
	static ::System::Action_2<::Class_3_8C84B83D3715B347*, ::Class_3_A5AF8EA2F7094EFB*>** StaticGet___9__5_0()
	{
		return (::System::Action_2<::Class_3_8C84B83D3715B347*, ::Class_3_A5AF8EA2F7094EFB*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_B36121AFB03FB628___c_TypeDefinitionIndex)->GetStaticField(0x2EF68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_B36121AFB03FB628___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B36121AFB03FB628___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B950D774316E97B5(::Class_3_8C84B83D3715B347* a1, ::Class_3_A5AF8EA2F7094EFB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_8C84B83D3715B347*, ::Class_3_A5AF8EA2F7094EFB*))((::PBYTE)hIl2Cpp + CLASS_3_B36121AFB03FB628___C_METHOD_1_B950D774316E97B5_OFFSET))(this, a1, a2);
	}
};
