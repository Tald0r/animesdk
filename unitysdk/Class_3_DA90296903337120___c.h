#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_41E4860029D43D9E;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_DA90296903337120___C_METHOD_1_26734459079BC436_OFFSET UNITYSDK_OFFSET(0xA591A50)
#define CLASS_3_DA90296903337120___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA591A00)
#define CLASS_3_DA90296903337120___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA591A40)

inline static constexpr unsigned int Class_3_DA90296903337120___c_TypeDefinitionIndex = 69634;

class Class_3_DA90296903337120___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_41E4860029D43D9E*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__2_0()
	{
		return (::System::Action_2<::Class_3_41E4860029D43D9E*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA90296903337120___c_TypeDefinitionIndex)->GetStaticField(0x368B0);
	}
	static ::Class_3_DA90296903337120___c** StaticGet___9()
	{
		return (::Class_3_DA90296903337120___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_DA90296903337120___c_TypeDefinitionIndex)->GetStaticField(0x368B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_26734459079BC436(::Class_3_41E4860029D43D9E* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_41E4860029D43D9E*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_DA90296903337120___C_METHOD_1_26734459079BC436_OFFSET))(this, a1, a2);
	}
};
