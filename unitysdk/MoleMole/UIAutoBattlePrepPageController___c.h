#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_871A5AD984DA0F15;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD00FE10)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD00FE50)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_0_OFFSET UNITYSDK_OFFSET(0xD00FE60)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_1_OFFSET UNITYSDK_OFFSET(0xD00FEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController___c_TypeDefinitionIndex = 65808;

	class UIAutoBattlePrepPageController___c : public ::System::Object
	{
	public:
		static ::MoleMole::UIAutoBattlePrepPageController___c** StaticGet___9()
		{
			return (::MoleMole::UIAutoBattlePrepPageController___c**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x430C0);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__14_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x430C8);
		}
		static ::System::Action_1<::Class_3_871A5AD984DA0F15*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::Class_3_871A5AD984DA0F15*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x430D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryJoinABPVP_b__14_0(::Class_3_871A5AD984DA0F15* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_871A5AD984DA0F15*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinABPVP_b__14_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_1_OFFSET))(this, _);
		}
	};
}
