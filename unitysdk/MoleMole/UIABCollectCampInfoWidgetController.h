#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_3E1A0459A6647B99_9;
namespace MoleMole { class UIAutoBattlePVPCollectBangbooRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4E09B0)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4E0A50)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4E0860)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4E0900)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0xA4E0B60)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4E0E10)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4E0EC0)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4E0F30)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4E0FB0)
#define MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4E1010)

namespace MoleMole
{
	inline static constexpr unsigned int UIABCollectCampInfoWidgetController_TypeDefinitionIndex = 69269;

	class UIABCollectCampInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_3E1A0459A6647B99_9* _view; // 0x2A0
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattlePVPCollectBangbooRowWidgetController*>* _bangbooCtrls; // 0x2A8
		::System::Action_1<::System::Int32>* JumpToBangbooTab; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshInfo(::System::Int32 campId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER_REFRESHINFO_OFFSET))(this, campId);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABCOLLECTCAMPINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
