#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigUICoopTeam3D_CameraConfigEnum.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class ConfigUICoopTeam3D_CameraConfig; }

#define MOLEMOLE_CONFIGUICOOPTEAM3D_AVATARCONFIG_GETPOSITIONBYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xCCB1920)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_AVATARCONFIG_GETYROTATIONBYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xCCB1890)
#define MOLEMOLE_CONFIGUICOOPTEAM3D_AVATARCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB19D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICoopTeam3D_AvatarConfig_TypeDefinitionIndex = 74909;

	class ConfigUICoopTeam3D_AvatarConfig : public ::System::Object
	{
	public:
		::MoleMole::ConfigUICoopTeam3D_CameraConfig* cameraConfig; // 0x10
		::System::Single yRotationMiddle; // 0x18
		::UnityEngine::Vector3 PositionMiddle; // 0x1C
		::UnityEngine::Vector3 PositionLeft; // 0x28
		::UnityEngine::Vector3 PositionRight; // 0x34
		::System::Single yRotationRight; // 0x40
		::System::Single yRotationLeft; // 0x44
		::MoleMole::ConfigUICoopTeam3D_CameraConfigEnum eCameraConfigEnum; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_AVATARCONFIG__CTOR_OFFSET))(this);
		}

		::System::Single GetYRotationBySlotIndex(::System::Int32 slotIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_AVATARCONFIG_GETYROTATIONBYSLOTINDEX_OFFSET))(this, slotIndex);
		}

		::UnityEngine::Vector3 GetPositionBySlotIndex(::System::Int32 slotIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOOPTEAM3D_AVATARCONFIG_GETPOSITIONBYSLOTINDEX_OFFSET))(this, slotIndex);
		}
	};
}
