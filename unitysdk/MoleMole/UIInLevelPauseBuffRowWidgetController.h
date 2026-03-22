#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_542A772D07AFD4EA;
class Class_2_7A192581FF7290CF;
class Class_2_8CAD669444D1F6DE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x86E6E30)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86E6ED0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x86E6CE0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x86E6D80)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x86E6FB0)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_SETBUFFSTATE_OFFSET UNITYSDK_OFFSET(0x86E7940)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x86E7B60)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x86E7C10)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x86E7C80)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x86E7D00)
#define MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x86E7D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseBuffRowWidgetController_TypeDefinitionIndex = 75636;

	class UIInLevelPauseBuffRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::String* BUFF_ICON_PREFEX_PATH; // 0x0
		::Class_2_7A192581FF7290CF* _view; // 0x2A0
		::System::Collections::Generic::List_1<::Class_2_8CAD669444D1F6DE*>* modifiers; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo(::System::UInt32 enittyId, ::System::Int32 buffId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, enittyId, buffId);
		}

		::System::Void SetBuffState(::Class_2_542A772D07AFD4EA* buffMeta)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_542A772D07AFD4EA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER_SETBUFFSTATE_OFFSET))(this, buffMeta);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSEBUFFROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
