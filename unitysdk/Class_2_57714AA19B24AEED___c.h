#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UISwitchTeamBattleLevelRowWidgetController_Data; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_57714AA19B24AEED___C_METHOD_1_5F89D3552ABC9645_OFFSET UNITYSDK_OFFSET(0x13C98C80)
#define CLASS_2_57714AA19B24AEED___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C98C30)
#define CLASS_2_57714AA19B24AEED___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13C98C70)

inline static constexpr unsigned int Class_2_57714AA19B24AEED___c_TypeDefinitionIndex = 39593;

class Class_2_57714AA19B24AEED___c : public ::System::Object
{
public:
	static ::Class_2_57714AA19B24AEED___c** StaticGet___9()
	{
		return (::Class_2_57714AA19B24AEED___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57714AA19B24AEED___c_TypeDefinitionIndex)->GetStaticField(0x2F190);
	}
	static ::System::Func_2<::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*, ::System::UInt32>** StaticGet___9__22_0()
	{
		return (::System::Func_2<::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_57714AA19B24AEED___c_TypeDefinitionIndex)->GetStaticField(0x2F198);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_57714AA19B24AEED___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_57714AA19B24AEED___C__CTOR_OFFSET))(this);
	}

	::System::UInt32 Method_1_5F89D3552ABC9645(::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::MoleMole::UISwitchTeamBattleLevelRowWidgetController_Data*))((::PBYTE)hIl2Cpp + CLASS_2_57714AA19B24AEED___C_METHOD_1_5F89D3552ABC9645_OFFSET))(this, a1);
	}
};
