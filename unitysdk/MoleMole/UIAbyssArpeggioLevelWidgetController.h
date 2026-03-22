#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_7807B2B04302CD7B_6;
class Class_1_7F489DAFAFC6BD02;
class Class_2_208CC9941471731A_117;
class Class_2_208CC9941471731A_646;
class Class_2_4050202702C5AF24;
class Class_2_79AE422BA06F6D26_145;
class Class_2_DBD69E52FAE36934;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssSweepPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralBottomRewardInfoWidgetController; }
namespace MoleMole { class UIGeneralItemBtnWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_CREATITEM_OFFSET UNITYSDK_OFFSET(0xA4E3600)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_GETLEVELSHOWLIST_OFFSET UNITYSDK_OFFSET(0xA4E4800)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0xA4E1D20)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONBLESSGROUPCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA4E56B0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4E4760)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA4E5950)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONHOLLOWRECONNECTHANDLE_OFFSET UNITYSDK_OFFSET(0xA4E33D0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xA4E1DF0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA4E5E00)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONLEVELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA4E3720)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONREWARDINFOCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA4E3A10)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA4E3D10)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONSTARTCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xA4E26F0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA4E46E0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4E5FC0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4E16C0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4E3C60)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_PLAYBLESSGROUPCHANGE_OFFSET UNITYSDK_OFFSET(0xA4E5860)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHBLESSGROUP_OFFSET UNITYSDK_OFFSET(0xA4E44A0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHREWARDINFO_OFFSET UNITYSDK_OFFSET(0xA4E37B0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHSWEEPBTN_OFFSET UNITYSDK_OFFSET(0xA4E1E60)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA4E3FB0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_SETDEFAULTSELECT_OFFSET UNITYSDK_OFFSET(0xA4E4D40)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E60A0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0xA4E60D0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4E6140)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0xA4E61B0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xA4E6270)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA4E62D0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA4E6340)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4E6350)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4E63D0)
#define MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4E6430)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssArpeggioLevelWidgetController_TypeDefinitionIndex = 50230;

	class UIAbyssArpeggioLevelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_145* _view; // 0x2A0
		::Class_2_208CC9941471731A_117* _selectChapterCfg; // 0x2A8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_646*>* _levelList; // 0x2B0
		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_6*>* _showList; // 0x2B8
		::Class_2_4050202702C5AF24* _arpeggioModel; // 0x2C0
		::Class_2_DBD69E52FAE36934* _uiYorozuyaModel; // 0x2C8
		::System::Int32 _selectBlessGroupID; // 0x2D0
		::System::Int32 _selectedLevelID; // 0x2D4
		::System::Action* LevelClickAction; // 0x2D8
		::System::Action* OnCloseAction; // 0x2E0
		::MoleMole::UIGeneralBottomRewardInfoWidgetController* _rewardInfoWidget; // 0x2E8
		::MoleMole::UIGeneralItemBtnWidgetController* _sweepBtn; // 0x2F0
		::MoleMole::UIAbyssSweepPopWindowController* _sweepPopWindow; // 0x2F8
		::System::Collections::Generic::List_1<::Class_1_7F489DAFAFC6BD02*>* challInfoList; // 0x300
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* questRewardList; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshSweepBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHSWEEPBTN_OFFSET))(this);
		}

		::System::Void OnStartClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONSTARTCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnHollowReconnectHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONHOLLOWRECONNECTHANDLE_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatItem(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_CREATITEM_OFFSET))(this, arg);
		}

		::System::Void OnLevelClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONLEVELCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void RefreshRewardInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHREWARDINFO_OFFSET))(this);
		}

		::System::Void OnRewardInfoClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONREWARDINFOCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnBlessGroupClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONBLESSGROUPCLICKHANDLE_OFFSET))(this);
		}

		::System::Void RefreshBlessGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_REFRESHBLESSGROUP_OFFSET))(this);
		}

		::System::Void PlayBlessGroupChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_PLAYBLESSGROUPCHANGE_OFFSET))(this);
		}

		::System::Void SetDefaultSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_SETDEFAULTSELECT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_6*>* GetLevelShowList()
		{
			return ((::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_6*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_GETLEVELSHOWLIST_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSARPEGGIOLEVELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
