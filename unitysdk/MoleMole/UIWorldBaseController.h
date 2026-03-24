#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

namespace UnityEngine { class Camera; }

#define MOLEMOLE_UIWORLDBASECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x9F09140)
#define MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEINANIMATION_OFFSET UNITYSDK_OFFSET(0x9F099A0)
#define MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEOUTANIMATION_OFFSET UNITYSDK_OFFSET(0x9F09A00)
#define MOLEMOLE_UIWORLDBASECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9F09150)
#define MOLEMOLE_UIWORLDBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F09A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIWorldBaseController_TypeDefinitionIndex = 45619;

	class UIWorldBaseController : public ::MoleMole::UIWindowController
	{
	public:
		::UnityEngine::Camera* WorldCamera; // 0x2F8
		::System::Boolean isFadeIn; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void PlayFadeInAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEINANIMATION_OFFSET))(this);
		}

		::System::Void PlayFadeOutAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIWORLDBASECONTROLLER_PLAYFADEOUTANIMATION_OFFSET))(this);
		}
	};
}
