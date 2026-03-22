#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_TIMELINE_MONOSYNCTRANSFORMINVERT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB3D5250)
#define MOLEMOLE_TIMELINE_MONOSYNCTRANSFORMINVERT__CTOR_OFFSET UNITYSDK_OFFSET(0xB3D5530)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MonoSyncTransformInvert_TypeDefinitionIndex = 70980;

	class MonoSyncTransformInvert : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* syncTarget; // 0x18
		::System::Boolean controlScale; // 0x20
		::System::Boolean controlRotate; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCTRANSFORMINVERT__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MONOSYNCTRANSFORMINVERT_LATEUPDATE_OFFSET))(this);
		}
	};
}
