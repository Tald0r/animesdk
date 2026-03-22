#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_A199AA1B91A2E0C6_1;
class Class_2_C1865A61828EE67A;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_BIND_OFFSET UNITYSDK_OFFSET(0xA508B70)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xA5098F0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA508910)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA508DD0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA5097C0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA509830)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA5089B0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA508D20)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA5090B0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETBAN_OFFSET UNITYSDK_OFFSET(0xA509AD0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETCLICKCB_OFFSET UNITYSDK_OFFSET(0xA509B70)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0xA509990)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINDEX_OFFSET UNITYSDK_OFFSET(0xA509A60)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINMAKE_OFFSET UNITYSDK_OFFSET(0xA509040)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0xA509710)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA509BE0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0xA509BF0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA509C00)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA509C70)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA509CF0)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA509D00)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA509D80)
#define MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA509DE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivePropsItemIconWidgetController_TypeDefinitionIndex = 50363;

	class UIActivePropsItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Int32 iniItemId; // 0x2D0
		::System::Int32 index; // 0x2D4
		::Class_2_C1865A61828EE67A* _uiRamenModel; // 0x2D8
		::System::Boolean _isInMakePanel; // 0x2E0
		::Class_2_A199AA1B91A2E0C6_1* _view; // 0x2E8
		::System::Action_1<::MoleMole::UIActivePropsItemIconWidgetController*>* selectAction; // 0x2F0
		::System::Boolean _canInteractive; // 0x2F8
		::System::Boolean _isBan; // 0x2F9

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Bind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_BIND_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void SetIndex(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINDEX_OFFSET))(this, index);
		}

		::System::Void SetSelect(::System::Boolean show, ::System::Boolean banBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETSELECT_OFFSET))(this, show, banBtn);
		}

		::System::Void SetBan(::System::Boolean isBan)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETBAN_OFFSET))(this, isBan);
		}

		::System::Void SetClickCB(::System::Action_1<::MoleMole::UIActivePropsItemIconWidgetController*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIActivePropsItemIconWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETCLICKCB_OFFSET))(this, cb);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void SetInMake(::System::Boolean isIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER_SETINMAKE_OFFSET))(this, isIn);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVEPROPSITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
