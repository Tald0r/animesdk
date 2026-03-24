#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETMOVEMENTMAG_OFFSET UNITYSDK_OFFSET(0x6BBC0D0)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0x6BBC300)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x6BBC3B0)
#define NPCCROWD_LOD_NPCCROWDCAMERAAGENT__CTOR_OFFSET UNITYSDK_OFFSET(0x6BBC600)

namespace NPCCrowd::Lod
{
	inline static constexpr unsigned int NPCCrowdCameraAgent_TypeDefinitionIndex = 53807;

	class NPCCrowdCameraAgent : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 lastPos; // 0x10
		::System::Int32 lastUpdateFrame; // 0x1C
		::UnityEngine::Vector3 curPos; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT__CTOR_OFFSET))(this);
		}

		::System::Single GetMovementMag()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETMOVEMENTMAG_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_GETPOSITION_OFFSET))(this);
		}

		::System::Void RefreshData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_LOD_NPCCROWDCAMERAAGENT_REFRESHDATA_OFFSET))(this);
		}
	};
}
