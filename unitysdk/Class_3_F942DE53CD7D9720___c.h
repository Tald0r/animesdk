#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_D2084E0C2DD39509;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_F942DE53CD7D9720___C_METHOD_1_D25406433BDF03C7_OFFSET UNITYSDK_OFFSET(0x88A83F0)
#define CLASS_3_F942DE53CD7D9720___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x88A83A0)
#define CLASS_3_F942DE53CD7D9720___C__CTOR_OFFSET UNITYSDK_OFFSET(0x88A83E0)

inline static constexpr unsigned int Class_3_F942DE53CD7D9720___c_TypeDefinitionIndex = 59877;

class Class_3_F942DE53CD7D9720___c : public ::System::Object
{
public:
	static ::Class_3_F942DE53CD7D9720___c** StaticGet___9()
	{
		return (::Class_3_F942DE53CD7D9720___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F942DE53CD7D9720___c_TypeDefinitionIndex)->GetStaticField(0x3CDE0);
	}
	static ::System::Action_2<::Class_3_D2084E0C2DD39509*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__7_0()
	{
		return (::System::Action_2<::Class_3_D2084E0C2DD39509*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_F942DE53CD7D9720___c_TypeDefinitionIndex)->GetStaticField(0x3CDE8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D25406433BDF03C7(::Class_3_D2084E0C2DD39509* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_D2084E0C2DD39509*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_F942DE53CD7D9720___C_METHOD_1_D25406433BDF03C7_OFFSET))(this, a1, a2);
	}
};
