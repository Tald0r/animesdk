#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_2A0117F72708B5DF;
class Class_2_2F3C7D4EFC74D485;
class Class_2_ECE616609A91B968;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMedalIconRowWidgetController_Context; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONCATENATEDESCSTRING_OFFSET UNITYSDK_OFFSET(0x92B2FB0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x92B2250)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x92B26E0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0x92B3100)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x92B2A50)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTMEDALITEM_OFFSET UNITYSDK_OFFSET(0x92B2B80)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x92B2AF0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x92B2260)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x92B2590)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHMEDALPANELUI_OFFSET UNITYSDK_OFFSET(0x92B2C00)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x92B3220)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__12_0_OFFSET UNITYSDK_OFFSET(0x92B3230)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__12_1_OFFSET UNITYSDK_OFFSET(0x92B3290)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x92B32B0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x92B3320)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x92B3330)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x92B3340)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalEditPopWindowController_TypeDefinitionIndex = 66352;

	class UIMedalEditPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_ECE616609A91B968* _view; // 0x2F8
		::Class_2_2F3C7D4EFC74D485* _model; // 0x300
		::Class_1_2A0117F72708B5DF* _data; // 0x308
		::System::Int32 _currSelectedMedalID; // 0x310
		::System::Action* triggerWhenCloseAfterClickOK; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIMedalIconRowWidgetController_Context*>* _contextList; // 0x320
		::System::Int32 _currSelectedIdx; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnSelectMedalItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTMEDALITEM_OFFSET))(this, index);
		}

		::System::Void RefreshMedalPanelUI(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHMEDALPANELUI_OFFSET))(this, index);
		}

		::System::String* ConcatenateDescString(::System::String* descKey, ::System::Boolean isPermanent)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONCATENATEDESCSTRING_OFFSET))(this, descKey, isPermanent);
		}

		::System::Void OnClickOKBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__12_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__12_0_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__12_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__12_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
