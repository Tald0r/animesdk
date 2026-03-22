#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::Cameras { class AsistantCameraEffect_EffectIns; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x62171B0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x6216EB0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_TEST_OFFSET UNITYSDK_OFFSET(0x6217320)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT_UPDATEALLPROGRESS_OFFSET UNITYSDK_OFFSET(0x6217020)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x62174E0)
#define MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__TEST_B__6_1_OFFSET UNITYSDK_OFFSET(0x6217500)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int AsistantCameraEffect_TypeDefinitionIndex = 41320;

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

		::System::Void _Test_b__6_1(::System::Int32 t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_ASISTANTCAMERAEFFECT__TEST_B__6_1_OFFSET))(this, t);
		}
	};
}
