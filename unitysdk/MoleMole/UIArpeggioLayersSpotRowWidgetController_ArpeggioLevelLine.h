#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0xB28DA40)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETL1STATE_OFFSET UNITYSDK_OFFSET(0xB28DAC0)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETL2STATE_OFFSET UNITYSDK_OFFSET(0xB28DB80)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETSKIN_OFFSET UNITYSDK_OFFSET(0xB28D550)
#define MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE__CTOR_OFFSET UNITYSDK_OFFSET(0xB28DC40)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioLayersSpotRowWidgetController_ArpeggioLevelLine_TypeDefinitionIndex = 49738;

	class UIArpeggioLayersSpotRowWidgetController_ArpeggioLevelLine : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* L1; // 0x10
		::UnityEngine::GameObject* L2_Lock; // 0x18
		::UnityEngine::GameObject* L2_Unlock; // 0x20
		::UnityEngine::GameObject* L1_Lock; // 0x28
		::UnityEngine::GameObject* Skin; // 0x30
		::UnityEngine::GameObject* L2; // 0x38
		::UnityEngine::GameObject* L1_Unlock; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE__CTOR_OFFSET))(this);
		}

		::System::Void SetSkin(::UnityEngine::GameObject* root)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETSKIN_OFFSET))(this, root);
		}

		::System::Void SetActive(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETACTIVE_OFFSET))(this, isShow);
		}

		::System::Void SetL1State(::System::Boolean isShow, ::System::Boolean unLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETL1STATE_OFFSET))(this, isShow, unLock);
		}

		::System::Void SetL2State(::System::Boolean isShow, ::System::Boolean unLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLAYERSSPOTROWWIDGETCONTROLLER_ARPEGGIOLEVELLINE_SETL2STATE_OFFSET))(this, isShow, unLock);
		}
	};
}
