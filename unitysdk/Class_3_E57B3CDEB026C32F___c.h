#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B88093644CDFA8DF;
namespace System { template <typename T> class Action_1; }

#define CLASS_3_E57B3CDEB026C32F___C_METHOD_1_8AC175EE11DDE09E_OFFSET UNITYSDK_OFFSET(0x966B520)
#define CLASS_3_E57B3CDEB026C32F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x966B4D0)
#define CLASS_3_E57B3CDEB026C32F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x966B510)

inline static constexpr unsigned int Class_3_E57B3CDEB026C32F___c_TypeDefinitionIndex = 52700;

class Class_3_E57B3CDEB026C32F___c : public ::System::Object
{
public:
	static ::Class_3_E57B3CDEB026C32F___c** StaticGet___9()
	{
		return (::Class_3_E57B3CDEB026C32F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E57B3CDEB026C32F___c_TypeDefinitionIndex)->GetStaticField(0x3F790);
	}
	static ::System::Action_1<::Class_3_B88093644CDFA8DF*>** StaticGet___9__4_0()
	{
		return (::System::Action_1<::Class_3_B88093644CDFA8DF*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_E57B3CDEB026C32F___c_TypeDefinitionIndex)->GetStaticField(0x3F798);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8AC175EE11DDE09E(::Class_3_B88093644CDFA8DF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B88093644CDFA8DF*))((::PBYTE)hIl2Cpp + CLASS_3_E57B3CDEB026C32F___C_METHOD_1_8AC175EE11DDE09E_OFFSET))(this, a1);
	}
};
