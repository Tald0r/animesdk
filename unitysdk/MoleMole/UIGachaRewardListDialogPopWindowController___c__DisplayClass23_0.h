#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D5E55949F51D9DD0.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIGachaPage; }
namespace MoleMole { class UIGachaRewardListDialogPopWindowController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC10A550)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__0_OFFSET UNITYSDK_OFFSET(0xC10A560)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__1_OFFSET UNITYSDK_OFFSET(0xC10A5A0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__3_OFFSET UNITYSDK_OFFSET(0xC10A9D0)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__4_OFFSET UNITYSDK_OFFSET(0xC10AB10)
#define MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_G__GETINTERVALBETWEENFADEINANDACTIVATE_2_OFFSET UNITYSDK_OFFSET(0xC10A8D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaRewardListDialogPopWindowController___c__DisplayClass23_0_TypeDefinitionIndex = 47569;

	class UIGachaRewardListDialogPopWindowController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::MoleMole::ConfigUIGachaPage* config; // 0x10
		::System::Action* __9__4; // 0x18
		::System::Collections::Generic::Dictionary_2<::Enum_3_D5E55949F51D9DD0, ::System::Single>* rarityToAnimInterval; // 0x20
		::UnityEngine::AnimationCurve* curve; // 0x28
		::System::Action* __9__3; // 0x30
		::MoleMole::UIGachaRewardListDialogPopWindowController* __4__this; // 0x38
		::System::Single extraDelay; // 0x40
		::System::Single firstItemAnimInterval; // 0x44
		::System::Single totalTime; // 0x48
		::System::Int32 idx; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshMultipleRewardItems_b__0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__0_OFFSET))(this);
		}

		::System::Void _RefreshMultipleRewardItems_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__1_OFFSET))(this);
		}

		::System::Void _RefreshMultipleRewardItems_b__3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__3_OFFSET))(this);
		}

		::System::Void _RefreshMultipleRewardItems_b__4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_B__4_OFFSET))(this);
		}

		::System::Single _RefreshMultipleRewardItems_g__GetIntervalBetweenFadeInAndActivate_2(::System::Int32 itemID)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAREWARDLISTDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS23_0__REFRESHMULTIPLEREWARDITEMS_G__GETINTERVALBETWEENFADEINANDACTIVATE_2_OFFSET))(this, itemID);
		}
	};
}
