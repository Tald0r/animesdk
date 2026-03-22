#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameSubsystemBaseEx_1.h"
#include "unitysdk/Struct_2_7A6F1A858DFA8957.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0xE115C10)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAFOLLOWENTITYROTATIONYAW_OFFSET UNITYSDK_OFFSET(0xE116C60)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET UNITYSDK_OFFSET(0xE116910)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xE115AE0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE115B40)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE115CA0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0xE115FC0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERADATA_OFFSET UNITYSDK_OFFSET(0xE115D00)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHLEVELPERFORMCAMERA_OFFSET UNITYSDK_OFFSET(0xE1161A0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0xE116DE0)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0xE116E00)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE116E60)
#define MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xE116EC0)

namespace MoleMole
{
	inline static constexpr unsigned int LevelPerformCameraSubSystem_TypeDefinitionIndex = 72983;

	class LevelPerformCameraSubSystem : public ::MoleMole::GameSubsystemBaseEx_1<::MoleMole::LevelPerformCameraSubSystem*>
	{
	public:
		::System::Collections::Generic::List_1<::Struct_2_7A6F1A858DFA8957>* _levelPerformCameraDataList; // 0x10
		::MoleMole::Cameras::ScopedOverShoulderCamera* _scopedOverShoulderCamera; // 0x18
		::UnityEngine::Vector3 _lastCameraFollowPosition; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void PushLevelPerformCameraData(::System::String* tag, ::System::String* baseConfigKey, ::System::String* overrideConfigKey, ::System::Boolean enableInitAimTarget, ::UnityEngine::Vector3 initAimTargetPos, ::System::Boolean enableInitPitch, ::System::Single initPitch, ::System::Boolean enableInitYaw, ::System::Single initYaw, ::System::Boolean useWorldCoordYaw)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_PUSHLEVELPERFORMCAMERADATA_OFFSET))(this, tag, baseConfigKey, overrideConfigKey, enableInitAimTarget, initAimTargetPos, enableInitPitch, initPitch, enableInitYaw, initYaw, useWorldCoordYaw);
		}

		::System::Void PopLevelPerformCameraData(::System::String* tag, ::System::Boolean needRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_POPLEVELPERFORMCAMERADATA_OFFSET))(this, tag, needRefresh);
		}

		::System::Void ClearLevelPerformCameraData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_CLEARLEVELPERFORMCAMERADATA_OFFSET))(this);
		}

		::System::Void RefreshLevelPerformCamera(::System::Boolean fromPop)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_REFRESHLEVELPERFORMCAMERA_OFFSET))(this, fromPop);
		}

		::UnityEngine::Vector3 GetCameraMoveFollowPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAMOVEFOLLOWPOSITION_OFFSET))(this);
		}

		::System::Single GetCameraFollowEntityRotationYaw()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM_GETCAMERAFOLLOWENTITYROTATIONYAW_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELPERFORMCAMERASUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
