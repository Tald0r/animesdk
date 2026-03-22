#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_1_8B664C71B784890D;
class Class_2_1BCC3EC1CB8D0220;
class Class_2_208CC9941471731A_308;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_EMPTY_OFFSET UNITYSDK_OFFSET(0x9439FD0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9439CC0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x943ADA0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x943B3F0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x943A0B0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9439EF0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9439C20)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x943A220)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET UNITYSDK_OFFSET(0x943B630)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_UPDATEGETBUTTON_OFFSET UNITYSDK_OFFSET(0x943AFC0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x943B390)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x943B910)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER__REFRESHVIEW_B__11_0_OFFSET UNITYSDK_OFFSET(0x943B9A0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x943B9F0)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x943BA60)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x943BA90)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x943BB00)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x943BB80)
#define MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x943BC00)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsWidgetController_TypeDefinitionIndex = 59464;

	class UIInterKnotNewsWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_1BCC3EC1CB8D0220* _view; // 0x2D0
		::MoleMole::MonoGamepadSelectable* selectable; // 0x2D8
		::MoleMole::MonoGamepadModule* rootModule; // 0x2E0
		::MoleMole::MonoGamepadCustomList* rewardCumstomList; // 0x2E8
		::MoleMole::MonoGamepadModule* lastFocus; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* itemCtrl; // 0x2F8
		::Class_2_208CC9941471731A_308* template_; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Empty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_EMPTY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_308* template_)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_308*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, template_);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void UpdateGetButton(::Class_2_208CC9941471731A_308* template_, ::Class_1_8B664C71B784890D* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_308*, ::Class_1_8B664C71B784890D*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_UPDATEGETBUTTON_OFFSET))(this, template_, data);
		}

		::System::Void RegisterNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER_REGISTERNOTIFY_OFFSET))(this);
		}

		::System::Void _RefreshView_b__11_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER__REFRESHVIEW_B__11_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
