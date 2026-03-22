#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_2_A1E176461EC6549F;
class Class_2_A8F5ABF31E066ED4;
class Class_2_DA8BF519212BAE65;
class Class_2_FEB0042A043413D3;
class Class_3_EEF4E8CAD4E8CF37;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB91CA50)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB91D4E0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB91CBD0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB91CAF0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB91C680)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB91C950)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET UNITYSDK_OFFSET(0xB91D7A0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0xB91D810)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_SETBRANCHICON_OFFSET UNITYSDK_OFFSET(0xB91D2E0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB91D9F0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB91DA00)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB91DA70)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB91DAE0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB91DB60)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB91DBE0)
#define MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB91DC40)

namespace MoleMole
{
	inline static constexpr unsigned int UIBranchRelicWidgetController_TypeDefinitionIndex = 51216;

	class UIBranchRelicWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_A1E176461EC6549F* _view; // 0x2D0
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x2D8
		::Class_3_EEF4E8CAD4E8CF37* _relicData; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetBranchIcon(::Class_2_A8F5ABF31E066ED4* image, ::Class_2_FEB0042A043413D3* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_FEB0042A043413D3*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_SETBRANCHICON_OFFSET))(this, image, config);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void RefreshRedPointByData(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_REFRESHREDPOINTBYDATA_OFFSET))(this, args);
		}

		::System::Void RefreshRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER_REFRESHREDPOINT_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBRANCHRELICWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
