#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCAA6E30)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCAA6E70)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__REFRESHROLES_B__29_0_OFFSET UNITYSDK_OFFSET(0xCAA6E80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController___c_TypeDefinitionIndex = 72589;

	class UIBossChallengeInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengeInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2FDF0);
		}
		static ::MoleMole::UIBossChallengeInfoWidgetController___c** StaticGet___9()
		{
			return (::MoleMole::UIBossChallengeInfoWidgetController___c**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengeInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x2FDF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRoles_b__29_0(::MoleMole::UIGeneralHeadRowWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__REFRESHROLES_B__29_0_OFFSET))(this, widget);
		}
	};
}
