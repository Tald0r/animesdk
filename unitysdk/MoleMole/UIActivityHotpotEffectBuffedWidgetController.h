#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_6BA62FD8CBCEC414;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD237AF0)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD237B90)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD2379A0)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD237A40)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_PLAYANIMANDCLOSE_OFFSET UNITYSDK_OFFSET(0xD237D70)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_PLAYEFFANIM_OFFSET UNITYSDK_OFFSET(0xD237C70)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD237E30)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD237EA0)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD237F10)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD237F90)
#define MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD237FF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotEffectBuffedWidgetController_TypeDefinitionIndex = 39765;

	class UIActivityHotpotEffectBuffedWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_6BA62FD8CBCEC414* _view; // 0x2A0
		::System::String* AnimHigh; // 0x2A8
		::System::String* AnimLow; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void PlayEffAnim(::System::Boolean highOrLow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_PLAYEFFANIM_OFFSET))(this, highOrLow);
		}

		::Cysharp::Threading::Tasks::UniTask PlayAnimAndClose(::System::Boolean highOrLow)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER_PLAYANIMANDCLOSE_OFFSET))(this, highOrLow);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTEFFECTBUFFEDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
