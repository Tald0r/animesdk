#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Cameras { class AsistantCameraEffect_EffectIns; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x84EB3D0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x84EAF90)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x84EB1C0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x84EB050)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_TEST_OFFSET UNITYSDK_OFFSET(0x84EB540)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_UPDATEALLPROGRESS_OFFSET UNITYSDK_OFFSET(0x84EB240)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x84EB700)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__TEST_B__8_1_OFFSET UNITYSDK_OFFSET(0x84EB720)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AsistantCameraEffect_TypeDefinitionIndex = 68446;

	class AsistantCameraEffect : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Cameras::AsistantCameraEffect_EffectIns*>* effectGroups; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnLightweightActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
		}

		::System::Void OnRealEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONREALENABLE_OFFSET))(this);
		}

		::System::Void UpdateAllProgress(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_UPDATEALLPROGRESS_OFFSET))(this, time);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void Test()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_TEST_OFFSET))(this);
		}

		::System::Void _Test_b__8_1(::System::Int32 t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__TEST_B__8_1_OFFSET))(this, t);
		}
	};
}
