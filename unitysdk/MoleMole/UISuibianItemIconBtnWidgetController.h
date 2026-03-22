#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_BCF38F46F7CC12F2.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_208;
class Class_2_79AE422BA06F6D26_84;
namespace MoleMole { class UIControlReference; }
namespace System { class Action; }
namespace System { class Object; }

#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC85D9A0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC85DB20)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC85DA40)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC85D780)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET UNITYSDK_OFFSET(0xC85ED20)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0xC85EF70)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET UNITYSDK_OFFSET(0xC85EB20)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC85DC10)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET UNITYSDK_OFFSET(0xC85E580)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET UNITYSDK_OFFSET(0xC85F4F0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0xC85F190)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET UNITYSDK_OFFSET(0xC85F2C0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET UNITYSDK_OFFSET(0xC85F3A0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET UNITYSDK_OFFSET(0xC85F460)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET UNITYSDK_OFFSET(0xC860640)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC8606E0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC8606F0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xC860760)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC8607E0)
#define MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC860860)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianItemIconBtnWidgetController_TypeDefinitionIndex = 44373;

	class UISuibianItemIconBtnWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_84* _view; // 0x2D0
		::Class_0_16E4307DCC419505_208* _itemView; // 0x2D8
		::System::Int32 _curCount; // 0x2E0
		::System::Int32 _targetCount; // 0x2E4
		::System::Boolean _enableClick; // 0x2E8
		::System::Int32 _itemID; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetEmptyState(::System::Boolean showEmptyLabel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETEMPTYSTATE_OFFSET))(this, showEmptyLabel);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_208* itemView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_208*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemView);
		}

		::System::Void RefreshViewInner(::Class_0_16E4307DCC419505_208* itemView, ::System::Int32 curCount)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_208*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEWINNER_OFFSET))(this, itemView, curCount);
		}

		::System::Void RefreshView_1(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::Enum_3_BCF38F46F7CC12F2 Type, ::System::Boolean showTips, ::System::Action* customTipHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_BCF38F46F7CC12F2, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, itemID, curCount, targetcount, Type, showTips, customTipHandle);
		}

		::System::Void RefreshView_2(::System::Int32 itemID, ::System::Int32 count, ::Enum_3_BCF38F46F7CC12F2 showCountTextType, ::System::Boolean isShowTip, ::System::Action* customTipHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Enum_3_BCF38F46F7CC12F2, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_REFRESHVIEW_2_OFFSET))(this, itemID, count, showCountTextType, isShowTip, customTipHandle);
		}

		::System::Void TryShowNegative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_TRYSHOWNEGATIVE_OFFSET))(this);
		}

		::System::Void SetItemInfo(::System::Int32 itemID, ::System::Int32 curCount, ::System::Int32 targetcount, ::Enum_3_BCF38F46F7CC12F2 showCountTextType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Enum_3_BCF38F46F7CC12F2))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETITEMINFO_OFFSET))(this, itemID, curCount, targetcount, showCountTextType);
		}

		::System::Void SetLock(::System::Boolean isLock, ::System::Boolean isDress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETLOCK_OFFSET))(this, isLock, isDress);
		}

		::System::Void SetMaskState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETMASKSTATE_OFFSET))(this, active);
		}

		::System::Void SetTransGray(::System::Boolean isGray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETTRANSGRAY_OFFSET))(this, isGray);
		}

		::System::Void SetUpState(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER_SETUPSTATE_OFFSET))(this, active);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANITEMICONBTNWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
