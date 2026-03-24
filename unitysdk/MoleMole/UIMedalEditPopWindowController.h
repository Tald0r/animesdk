#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_24AC061D0BCF0A10.h"

class Class_1_2A0117F72708B5DF;
class Class_1_C52591F09EF1D4E4;
class Class_2_2F3C7D4EFC74D485;
class Class_2_9D03A501FFCBD526;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMedalIconRowWidgetController_Context; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_CONCATENATEDESCSTRING_OFFSET UNITYSDK_OFFSET(0xAF7C6A0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAF7B770)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITMEDALVIEW_OFFSET UNITYSDK_OFFSET(0xAF7BCB0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITTITLEVIEW_OFFSET UNITYSDK_OFFSET(0xAF7B070)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCLICKOKBTN_OFFSET UNITYSDK_OFFSET(0xAF7C7F0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF7C140)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTMEDALITEM_OFFSET UNITYSDK_OFFSET(0xAF7C270)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTTITLEITEM_OFFSET UNITYSDK_OFFSET(0xAF7B580)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF7C1E0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF7B780)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAF7BB10)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHMEDALPANELUI_OFFSET UNITYSDK_OFFSET(0xAF7C2F0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHTITLEPANELUI_OFFSET UNITYSDK_OFFSET(0xAF7B600)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAF7C9B0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_0_OFFSET UNITYSDK_OFFSET(0xAF7C9C0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_1_OFFSET UNITYSDK_OFFSET(0xAF7CA30)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_2_OFFSET UNITYSDK_OFFSET(0xAF7CA50)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_3_OFFSET UNITYSDK_OFFSET(0xAF7CAC0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAF7CAE0)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAF7CB50)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAF7CB60)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAF7CB70)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalEditPopWindowController_TypeDefinitionIndex = 58404;

	class UIMedalEditPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Boolean isVariableTitle; // 0x2F8
		::Struct_2_24AC061D0BCF0A10 _titleData; // 0x300
		::System::Collections::Generic::List_1<::Class_1_C52591F09EF1D4E4*>* _titleList; // 0x320
		::Class_2_9D03A501FFCBD526* _view; // 0x328
		::Class_2_2F3C7D4EFC74D485* _model; // 0x330
		::System::Boolean isVariableMedal; // 0x338
		::Class_1_2A0117F72708B5DF* _medalData; // 0x340
		::System::Int32 _currSelectedMedalID; // 0x348
		::System::Action* triggerWhenCloseAfterClickOK; // 0x350
		::System::Collections::Generic::List_1<::MoleMole::UIMedalIconRowWidgetController_Context*>* _medalContextList; // 0x358
		::System::Int32 _currSelectedIdx; // 0x360

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void InitTitleView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITTITLEVIEW_OFFSET))(this);
		}

		::System::Void OnSelectTitleItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_ONSELECTTITLEITEM_OFFSET))(this, index);
		}

		::System::Void RefreshTitlePanelUI(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_REFRESHTITLEPANELUI_OFFSET))(this, index);
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

		::System::Void InitMedalView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER_INITMEDALVIEW_OFFSET))(this);
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

		::System::Void _OnClickOKBtn_b__18_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_0_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_1_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_2_OFFSET))(this);
		}

		::System::Void _OnClickOKBtn_b__18_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER__ONCLICKOKBTN_B__18_3_OFFSET))(this);
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
