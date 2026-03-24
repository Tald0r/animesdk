#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_69CBB7FF0BE6A673_22;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUI; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIInLevelPulchraWidgetController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x8F06BE0)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_GET_ISARRIVEMAXATTACKTIME_OFFSET UNITYSDK_OFFSET(0x8F05F50)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8F05F40)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0x8F061F0)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLECURATTACKTIME_OFFSET UNITYSDK_OFFSET(0x8F064C0)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0x8F06310)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLEISENHANCE_OFFSET UNITYSDK_OFFSET(0x8F06C40)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLEMAXATTACKTIME_OFFSET UNITYSDK_OFFSET(0x8F06670)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x8F06B20)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8F06040)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8F060E0)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F06DD0)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0x8F06E60)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8F06EC0)
#define MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8F06F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPulchraPanelChildWindowController_TypeDefinitionIndex = 67048;

	class UIInLevelPulchraPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		::Class_2_69CBB7FF0BE6A673_22* _view; // 0x330
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUI* _realConfig; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPulchraWidgetController*>* _itemCtrlers; // 0x340
		::System::Boolean _lastIsArriveMaxAttackTime; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsArriveMaxAttackTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_GET_ISARRIVEMAXATTACKTIME_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void HandleMaxAttackTime(::System::Int32 maxAttackTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLEMAXATTACKTIME_OFFSET))(this, maxAttackTime);
		}

		::System::Void HandleCurAttackTime(::System::Int32 curAttackTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLECURATTACKTIME_OFFSET))(this, curAttackTime);
		}

		::System::Void HandleIsEnhance(::System::Boolean isArriveMaxAttackTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER_HANDLEISENHANCE_OFFSET))(this, isArriveMaxAttackTime);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPULCHRAPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
