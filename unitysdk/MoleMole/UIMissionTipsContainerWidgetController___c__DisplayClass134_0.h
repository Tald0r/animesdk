#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController_MissionTipData; }
namespace System { class Action; }

#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET UNITYSDK_OFFSET(0xAF7D8F0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__0_OFFSET UNITYSDK_OFFSET(0xAF7D900)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__10_OFFSET UNITYSDK_OFFSET(0xAF7DFA0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__8_OFFSET UNITYSDK_OFFSET(0xAF7DC90)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__9_OFFSET UNITYSDK_OFFSET(0xAF7DF10)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_G__PLAYFADEIN_2_OFFSET UNITYSDK_OFFSET(0xAF7DBB0)
#define MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_G__PLAYRECOMMENDFADEIN_1_OFFSET UNITYSDK_OFFSET(0xAF7D920)

namespace MoleMole
{
	inline static constexpr unsigned int UIMissionTipsContainerWidgetController___c__DisplayClass134_0_TypeDefinitionIndex = 70952;

	class UIMissionTipsContainerWidgetController___c__DisplayClass134_0 : public ::System::Object
	{
	public:
		::System::Action* __9__9; // 0x10
		::System::Action* __9__8; // 0x18
		::System::Action* __9__10; // 0x20
		::MoleMole::UIMissionTipsContainerWidgetController_MissionTipData* tipData; // 0x28
		::MoleMole::UIMissionTipsContainerWidgetController* __4__this; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__0_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_g__PlayRecommendFadeIn_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_G__PLAYRECOMMENDFADEIN_1_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_g__PlayFadeIn_2(::System::Boolean fadeInFlag, ::System::Single recommendDelay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_G__PLAYFADEIN_2_OFFSET))(this, fadeInFlag, recommendDelay);
		}

		::System::Void _PlayRecommendTrack_b__8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__8_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__9_OFFSET))(this);
		}

		::System::Void _PlayRecommendTrack_b__10()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMISSIONTIPSCONTAINERWIDGETCONTROLLER___C__DISPLAYCLASS134_0__PLAYRECOMMENDTRACK_B__10_OFFSET))(this);
		}
	};
}
