#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B04DB8B805F5DADF;
class Class_3_F35B080B137ECC46;
namespace System { template <typename T1, typename T2> class Action_2; }

#define CLASS_3_913AA8578231BFC4___C_METHOD_1_60EC58D894FFDC15_OFFSET UNITYSDK_OFFSET(0xF47CBD0)
#define CLASS_3_913AA8578231BFC4___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF47CB80)
#define CLASS_3_913AA8578231BFC4___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF47CBC0)

inline static constexpr unsigned int Class_3_913AA8578231BFC4___c_TypeDefinitionIndex = 55912;

class Class_3_913AA8578231BFC4___c : public ::System::Object
{
public:
	static ::System::Action_2<::Class_3_B04DB8B805F5DADF*, ::Class_3_F35B080B137ECC46*>** StaticGet___9__6_0()
	{
		return (::System::Action_2<::Class_3_B04DB8B805F5DADF*, ::Class_3_F35B080B137ECC46*>**)Il2CppClass::FromTypeDefinitionIndex(Class_3_913AA8578231BFC4___c_TypeDefinitionIndex)->GetStaticField(0x3DC60);
	}
	static ::Class_3_913AA8578231BFC4___c** StaticGet___9()
	{
		return (::Class_3_913AA8578231BFC4___c**)Il2CppClass::FromTypeDefinitionIndex(Class_3_913AA8578231BFC4___c_TypeDefinitionIndex)->GetStaticField(0x3DC68);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_913AA8578231BFC4___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_913AA8578231BFC4___C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_60EC58D894FFDC15(::Class_3_B04DB8B805F5DADF* a1, ::Class_3_F35B080B137ECC46* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_B04DB8B805F5DADF*, ::Class_3_F35B080B137ECC46*))((::PBYTE)hIl2Cpp + CLASS_3_913AA8578231BFC4___C_METHOD_1_60EC58D894FFDC15_OFFSET))(this, a1, a2);
	}
};
