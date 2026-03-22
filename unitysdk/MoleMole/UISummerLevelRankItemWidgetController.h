#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_241;
class Class_2_16396D88BA38E0AB_1;
class Class_2_8F61B9A09E64A3EA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }

#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE37440)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0xEE375C0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE374E0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE372F0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEE37390)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWCOMPLETESIGN_OFFSET UNITYSDK_OFFSET(0xEE37A90)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xEE37810)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEE37C20)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE37C50)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0xEE37CC0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE37D30)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE37DB0)
#define MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEE37E10)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerLevelRankItemWidgetController_TypeDefinitionIndex = 54549;

	class UISummerLevelRankItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_16396D88BA38E0AB_1* _view; // 0x2A0

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

		::System::Void ShowScore(::Class_2_8F61B9A09E64A3EA* questTableInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_8F61B9A09E64A3EA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWSCORE_OFFSET))(this, questTableInfo);
		}

		::System::Void ShowCompleteSign(::Class_0_16E4307DCC419505_241* levelData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_241*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERLEVELRANKITEMWIDGETCONTROLLER_SHOWCOMPLETESIGN_OFFSET))(this, levelData);
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
