#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_1F5CE9F6C8A6F157;
class Class_2_80E90D6D04CD4C89;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_GET_CURFOCUSCURSEID_OFFSET UNITYSDK_OFFSET(0xE23BC00)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_GET_CURFOCUSED_OFFSET UNITYSDK_OFFSET(0xE23B9E0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE23C230)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0xE23BC80)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE23BB20)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE23C2D0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE23AB80)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xE23BFC0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHCONFIGDATA_OFFSET UNITYSDK_OFFSET(0xE23AEF0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHPROGRESSTITLETEXT_OFFSET UNITYSDK_OFFSET(0xE23C090)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xE23C180)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHVIEWONFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0xE23B0F0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xE23B160)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_TRYCANCELSELECTONLAYOUTCHANGETOCONSOLE_OFFSET UNITYSDK_OFFSET(0xE23BEE0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_TRYSELECTFIRSTITEMEXCEPTCONSOLELAYOUT_OFFSET UNITYSDK_OFFSET(0xE23BE00)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xE23C3B0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xE23C460)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xE23C4D0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xE23C540)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xE23C5C0)
#define MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xE23C620)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowErosionWidgetController_TypeDefinitionIndex = 64140;

	class UIHollowErosionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* SPECIAL_TAG; // 0x0
		::Class_2_80E90D6D04CD4C89* _view; // 0x2A0
		::Class_2_1F5CE9F6C8A6F157* m_curFocusCurseCfg; // 0x2A8
		::System::Collections::Generic::List_1<::Class_2_1F5CE9F6C8A6F157*>* m_curseCfgList; // 0x2B0
		::System::Int32 m_selectIndex; // 0x2B8
		::MoleMole::MonoGamepadNavigatableList* m_naviList; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void RefreshViewOnFocusChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHVIEWONFOCUSCHANGE_OFFSET))(this, args);
		}

		::System::Boolean get_CurFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_GET_CURFOCUSED_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Int32 get_CurFocusCurseID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_GET_CURFOCUSCURSEID_OFFSET))(this);
		}

		::System::Void OnScrollViewSelectHandle(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONSCROLLVIEWSELECTHANDLE_OFFSET))(this, selectIndex);
		}

		::System::Void TrySelectFirstItemExceptConsoleLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_TRYSELECTFIRSTITEMEXCEPTCONSOLELAYOUT_OFFSET))(this);
		}

		::System::Void TryCancelSelectOnLayoutChangeToConsole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_TRYCANCELSELECTONLAYOUTCHANGETOCONSOLE_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void RefreshProgressTitleText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHPROGRESSTITLETEXT_OFFSET))(this);
		}

		::System::Void RefreshScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHSCROLLVIEW_OFFSET))(this);
		}

		::System::Void RefreshConfigData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_REFRESHCONFIGDATA_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWEROSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
