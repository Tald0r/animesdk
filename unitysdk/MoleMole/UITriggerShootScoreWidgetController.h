#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_13FA7ABD96D1051D;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_INIT_OFFSET UNITYSDK_OFFSET(0xEE44900)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ISALIVE_OFFSET UNITYSDK_OFFSET(0xEE44BE0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE445E0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xEE44860)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xEE44760)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE44680)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE44490)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEE44530)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEE44C60)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xEE44C90)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xEE44D00)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xEE44D60)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xEE44DD0)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xEE44E50)
#define MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xEE44EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UITriggerShootScoreWidgetController_TypeDefinitionIndex = 75398;

	class UITriggerShootScoreWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_13FA7ABD96D1051D* _view; // 0x2A0
		::UnityEngine::Vector3 worldPosition; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void Init(::System::Int32 score, ::UnityEngine::Vector3 position, ::System::Boolean isWeakPoint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_INIT_OFFSET))(this, score, position, isWeakPoint);
		}

		::System::Boolean IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER_ISALIVE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRIGGERSHOOTSCOREWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
