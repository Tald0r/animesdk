#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_158;
class Class_2_16396D88BA38E0AB_2;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA5DED0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0xAA5E050)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA5DF70)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA5DD80)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA5DE20)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWCOMPLETESIGN_OFFSET UNITYSDK_OFFSET(0xAA5E520)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xAA5E2A0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA5E6B0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA5E6E0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0xAA5E750)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA5E7C0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA5E840)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA5E8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerLevelRankItemWidgetController_TypeDefinitionIndex = 77800;

	class UISummerLevelRankItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_16396D88BA38E0AB_2* _view; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnSetData(::System::Object* data, ::System::Object* globalData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data, globalData);
		}

		::System::Void ShowScore(::Class_2_F69D29AB796376C2* questTableInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_F69D29AB796376C2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWSCORE_OFFSET))(this, questTableInfo);
		}

		::System::Void ShowCompleteSign(::Class_0_16E4307DCC419505_158* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_158*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWCOMPLETESIGN_OFFSET))(this, levelData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnSetData(::System::Object* P0, ::System::Object* P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
