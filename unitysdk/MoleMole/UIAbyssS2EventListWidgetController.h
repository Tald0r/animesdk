#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_06C2877021BC3D18;
class Class_2_14E7CE92E8A3183F;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC249FB0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC24A5F0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONREWARDMISSIONBTNCLICK_OFFSET UNITYSDK_OFFSET(0xC24A6E0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC24A050)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC249B60)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC249F00)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHMISSIONVIEW_OFFSET UNITYSDK_OFFSET(0xC24A290)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC24A130)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC24AB30)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC24AB60)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC24ABD0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC24AC50)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC24ACB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventListWidgetController_TypeDefinitionIndex = 59779;

	class UIAbyssS2EventListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_06C2877021BC3D18* _view; // 0x2A0
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x2A8
		::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* _dungeonConfigs; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>* configs, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_14E7CE92E8A3183F*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, configs, init);
		}

		::System::Void OnInfoBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONINFOBTNCLICK_OFFSET))(this);
		}

		::System::Void OnRewardMissionBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONREWARDMISSIONBTNCLICK_OFFSET))(this);
		}

		::System::Void RefreshMissionView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHMISSIONVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
