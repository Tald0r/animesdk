#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_208CC9941471731A_923;
class Class_2_4050202702C5AF24;
class Class_2_79AE422BA06F6D26_245;
namespace MoleMole { class UIAbyssArpeggioLevelWidgetController; }
namespace MoleMole { class UIAbyssArpeggioRowWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0xC33E7E0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xC33D7A0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC33D790)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GOTOMAINCITY_OFFSET UNITYSDK_OFFSET(0xC33F6D0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_INITTOKEN_OFFSET UNITYSDK_OFFSET(0xC33E4A0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONARPEGGIOROWCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xC33F110)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC33D7B0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONDUNGEONSWEEP_OFFSET UNITYSDK_OFFSET(0xC33EF80)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONINFOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xC33E8A0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONLEVELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xC33F350)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC33E770)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTALENTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xC33EAB0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTOTALREWARDCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xC33ED00)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC33F830)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC33D850)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC33DF80)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_PLAYBMFADEOUT_OFFSET UNITYSDK_OFFSET(0xC33EC10)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC33F8C0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__ONTALENTCLICKHANDLE_B__20_0_OFFSET UNITYSDK_OFFSET(0xC33F8D0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0xC33FAB0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC33FAC0)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xC33FB30)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC33FB40)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC33FB50)
#define MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC33FB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioPageController_TypeDefinitionIndex = 74978;

	class UIAbyssArpeggioPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_245* _view; // 0x2F8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_923*>* _chapterList; // 0x300
		::MoleMole::UIAbyssArpeggioLevelWidgetController* _levelWidgetCtrl; // 0x308
		::Class_2_208CC9941471731A_923* _selectChapterCfg; // 0x310
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _bigRewardBtn; // 0x318
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _timeLimitRewardBtn; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIAbyssArpeggioRowWidgetController*>* _rowList; // 0x328
		::MoleMole::UIAbyssArpeggioRowWidgetController* _selectArpeggioRow; // 0x330
		::Class_2_4050202702C5AF24* _arpeggioModel; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void InitToken()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_INITTOKEN_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::String* GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_340DE32BA097F66C fromCtrl)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET))(this, fadeData, fromCtrl);
		}

		::System::Void OnInfoBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONINFOBTNCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnTalentClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTALENTCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnTotalRewardClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONTOTALREWARDCLICKHANDLE_OFFSET))(this);
		}

		::System::Single PlayBmFadeOut()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_PLAYBMFADEOUT_OFFSET))(this);
		}

		::System::Void OnDungeonSweep(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONDUNGEONSWEEP_OFFSET))(this, args);
		}

		::System::Void OnArpeggioRowClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONARPEGGIOROWCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnLevelClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONLEVELCLICKHANDLE_OFFSET))(this);
		}

		::System::Void GoToMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_GOTOMAINCITY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnTalentClickHandle_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER__ONTALENTCLICKHANDLE_B__20_0_OFFSET))(this);
		}

		::System::String* __base_GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_340DE32BA097F66C P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_340DE32BA097F66C))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
