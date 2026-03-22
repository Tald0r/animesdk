#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_79AE422BA06F6D26_206;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_CLEARVIEW_OFFSET UNITYSDK_OFFSET(0xCA8C830)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xCA8C2A0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INVOKECLICKACTION_OFFSET UNITYSDK_OFFSET(0xCA8D030)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA8C430)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCA8C4D0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA8CC10)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA8C1F0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET UNITYSDK_OFFSET(0xCA8C900)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xCA8C990)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCLICKACTION_OFFSET UNITYSDK_OFFSET(0xCA8CCF0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCURSELECTSUITINDEX_OFFSET UNITYSDK_OFFSET(0xCA8CD60)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET UNITYSDK_OFFSET(0xCA8CE40)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA8D0E0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xCA8D0F0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xCA8D160)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xCA8D1E0)
#define MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xCA8D260)

namespace MoleMole
{
	inline static constexpr unsigned int UIVideoshopSuitItemWidgetController_TypeDefinitionIndex = 60001;

	class UIVideoshopSuitItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_206* _view; // 0x2D0
		::System::Boolean _isUp; // 0x2D8
		::System::UInt32 _suitID; // 0x2DC
		::System::Action_1<::System::Int32>* _clickAction; // 0x2E0
		::System::Int32 _index; // 0x2E8
		::System::Int32 _curSelectSuitIndex; // 0x2EC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetClickAction(::System::Action_1<::System::Int32>* action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCLICKACTION_OFFSET))(this, action);
		}

		::System::Void SetCurSelectSuitIndex(::System::Int32 curSelectSuitIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETCURSELECTSUITINDEX_OFFSET))(this, curSelectSuitIndex);
		}

		::System::Void RefreshView(::System::UInt32 suitID, ::System::Boolean isUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, suitID, isUp);
		}

		::System::Void SetWishlistTargetAvatarInfo(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_SETWISHLISTTARGETAVATARINFO_OFFSET))(this, active);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InvokeClickAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_INVOKECLICKACTION_OFFSET))(this);
		}

		::System::Void RefreshSelectState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_REFRESHSELECTSTATE_OFFSET))(this);
		}

		::System::Void ClearView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER_CLEARVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIDEOSHOPSUITITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
