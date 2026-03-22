#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_06A8079E3568BBAF;
class Class_2_208CC9941471731A_420;
class Class_2_4A630C107F277D99_Class_1_5B726373488B4D86;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ACTIVELOADINGUI_OFFSET UNITYSDK_OFFSET(0xC124660)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET UNITYSDK_OFFSET(0xC1244E0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xC124500)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET UNITYSDK_OFFSET(0xC124510)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xC1244F0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC125210)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC124520)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETCORNER_OFFSET UNITYSDK_OFFSET(0xC1252B0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETLOADINGVIEW_OFFSET UNITYSDK_OFFSET(0xC124870)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xC125070)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_UNACTIVELOADINGUI_OFFSET UNITYSDK_OFFSET(0xC124DD0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC1254D0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC1254E0)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC125550)
#define MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xC125560)

namespace MoleMole
{
	inline static constexpr unsigned int UILoadingPopWindowController_TypeDefinitionIndex = 38170;

	class UILoadingPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_06A8079E3568BBAF* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_AllowAssetProxyUnloadRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_ALLOWASSETPROXYUNLOADRES_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Boolean get_Permanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_GET_PERMANENT_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void ActiveLoadingUI(::Class_2_4A630C107F277D99_Class_1_5B726373488B4D86* loadingData, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4A630C107F277D99_Class_1_5B726373488B4D86*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ACTIVELOADINGUI_OFFSET))(this, loadingData, callback);
		}

		::System::Void UnActiveLoadingUI(::System::Action* endcallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_UNACTIVELOADINGUI_OFFSET))(this, endcallback);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetLoadingView(::Class_2_4A630C107F277D99_Class_1_5B726373488B4D86* loadingData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_4A630C107F277D99_Class_1_5B726373488B4D86*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETLOADINGVIEW_OFFSET))(this, loadingData);
		}

		::System::Void SetCorner(::Class_2_208CC9941471731A_420* loadingPage, ::Class_2_A8F5ABF31E066ED4* cornerIcon, ::UnityEngine::UI::Extension::UILocalizationText* numberText, ::UnityEngine::UI::Extension::UILocalizationText* tagText)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_420*, ::Class_2_A8F5ABF31E066ED4*, ::UnityEngine::UI::Extension::UILocalizationText*, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER_SETCORNER_OFFSET))(this, loadingPage, cornerIcon, numberText, tagText);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOADINGPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
