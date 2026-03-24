#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_7B289FAFFCBC2507;
class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_79F6D62CE30E3F8E_150;
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace UnityEngine::Events { class UnityAction; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONCLICMOREBTN_OFFSET UNITYSDK_OFFSET(0xD00A490)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD009630)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD0097C0)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET UNITYSDK_OFFSET(0xD009360)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD0096D0)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD0091F0)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_OVERRIDECLICKMOREBTN_OFFSET UNITYSDK_OFFSET(0xD00A590)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET UNITYSDK_OFFSET(0xD009430)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_SHOWUIVIEW_OFFSET UNITYSDK_OFFSET(0xD009F50)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD00A620)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_7_0_OFFSET UNITYSDK_OFFSET(0xD00A3E0)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD00A630)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xD00A6A0)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD00A720)
#define MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD00A7A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayerInfoRowWidgetController_TypeDefinitionIndex = 62071;

	class UIArcadePlayerInfoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_150* _view; // 0x2D0
		::Class_1_7B289FAFFCBC2507* cardImgHandler; // 0x2D8
		::Class_1_BE6BF7909AD9D940* _info; // 0x2E0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2E8
		::System::Boolean _isRealPlayer; // 0x2F0
		::System::Boolean _allowShowPlatform; // 0x2F1
		::System::Boolean _canSwitchPlatformInfo; // 0x2F2
		::System::Boolean _isShowingPlatform; // 0x2F3
		::UnityEngine::UI::Extension::UILocalizationText* displayNameText; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchPlatformInfo(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONSWITCHPLATFORMINFO_OFFSET))(this, args);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_SHOWUIVIEW_OFFSET))(this);
		}

		::System::Void ShowPlatformUI(::System::Boolean isShowingPlatformInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_SHOWPLATFORMUI_OFFSET))(this, isShowingPlatformInfo);
		}

		::System::Void OnClicMoreBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_ONCLICMOREBTN_OFFSET))(this);
		}

		::System::Void OverrideClickMoreBtn(::UnityEngine::Events::UnityAction* onClick)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER_OVERRIDECLICKMOREBTN_OFFSET))(this, onClick);
		}

		::System::Void _ShowUIView_g__SetupPlatformUI_7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER__SHOWUIVIEW_G__SETUPPLATFORMUI_7_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYERINFOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
