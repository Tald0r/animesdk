#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MonoCustomPropertyUIControllerBase.h"

class Class_2_081DC89E6FC143C9;
namespace MoleMole { class CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold; }
namespace MoleMole { class UIControlReference; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xBFDA4D0)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xBFD9400)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET UNITYSDK_OFFSET(0xBFD9580)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET UNITYSDK_OFFSET(0xBFD96A0)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0xBFDA130)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFD9410)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFD94B0)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_SETTHRESHOLDLINEPOSITION_OFFSET UNITYSDK_OFFSET(0xBFDA370)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFDA590)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER__HANDLECUSTOMPROPERTY_B__13_0_OFFSET UNITYSDK_OFFSET(0xBFDA5A0)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER__HANDLECUSTOMPROPERTY_B__13_1_OFFSET UNITYSDK_OFFSET(0xBFDA6B0)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET UNITYSDK_OFFSET(0xBFDA7C0)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFDA820)
#define MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFDA890)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelJuFufuPanelChildWindowController_TypeDefinitionIndex = 40196;

	class UIInLevelJuFufuPanelChildWindowController : public ::MonoCustomPropertyUIControllerBase
	{
	public:
		// static const ::System::String* BulletFadeIn; // 0x0
		// static const ::System::String* BulletLoop; // 0x0
		// static const ::System::String* BulletFadeOut; // 0x0
		// static const ::System::String* BulletChange; // 0x0
		::Class_2_081DC89E6FC143C9* _view; // 0x330
		::System::Single _fillBgParentWidth; // 0x338
		::UnityEngine::RectTransform* _fillRect; // 0x340
		::MoleMole::CharacterScriptConfig_ConfigCustomPropertyUIWithMatThreshold* _realConfig; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void HandleAllCustomPropertiesOnShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_HANDLEALLCUSTOMPROPERTIESONSHOW_OFFSET))(this);
		}

		::System::Void HandleCustomProperty(::System::String* customTypePlaceholder, ::System::Double oldValue, ::System::Double newValue, ::System::Boolean ignoreAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_HANDLECUSTOMPROPERTY_OFFSET))(this, customTypePlaceholder, oldValue, newValue, ignoreAnimation);
		}

		::System::Void OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void CollectAllAnimationComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_COLLECTALLANIMATIONCOMPONENTS_OFFSET))(this);
		}

		::System::Void SetThresholdLinePosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER_SETTHRESHOLDLINEPOSITION_OFFSET))(this);
		}

		::System::Void _HandleCustomProperty_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER__HANDLECUSTOMPROPERTY_B__13_0_OFFSET))(this);
		}

		::System::Void _HandleCustomProperty_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER__HANDLECUSTOMPROPERTY_B__13_1_OFFSET))(this);
		}

		::System::Void __base_OnAttachEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER___BASE_ONATTACHENTITY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELJUFUFUPANELCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
