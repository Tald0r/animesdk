#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_208CC9941471731A_12;
class Class_2_D4AD46D790793D96;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB32F60)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONAUDITIONCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xCB33310)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB32FD0)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xCB33720)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCB33430)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONSKINCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0xCB333C0)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCB33520)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_REFRESHVOICEPLAYSTATE_OFFSET UNITYSDK_OFFSET(0xCB335F0)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_SETGETCURRENTPLAYINGACTION_OFFSET UNITYSDK_OFFSET(0xCB337D0)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_SETONCLICKAUDITIONACTION_OFFSET UNITYSDK_OFFSET(0xCB332A0)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCB33840)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xCB33850)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xCB338C0)
#define MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCB33930)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopRoulettSettingRowWidgetController_TypeDefinitionIndex = 51253;

	class UICoopRoulettSettingRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_208CC9941471731A_12* _data; // 0x2D0
		::System::Action_1<::Class_2_208CC9941471731A_12*>* _onClickAuditionAction; // 0x2D8
		::System::Func_1<::System::String*>* _getCurrentPlayingSoundAction; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_D4AD46D790793D96* get__viewModel()
		{
			return ((::Class_2_D4AD46D790793D96*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void SetOnClickAuditionAction(::System::Action_1<::Class_2_208CC9941471731A_12*>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_2_208CC9941471731A_12*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_SETONCLICKAUDITIONACTION_OFFSET))(this, action);
		}

		::System::Void OnAuditionClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONAUDITIONCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnSkinClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONSKINCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshVoicePlayState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_REFRESHVOICEPLAYSTATE_OFFSET))(this);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_12* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_12*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, data);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetGetCurrentPlayingAction(::System::Func_1<::System::String*>* getCurrentPlayingSoundAction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER_SETGETCURRENTPLAYINGACTION_OFFSET))(this, getCurrentPlayingSoundAction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPROULETTSETTINGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}
	};
}
