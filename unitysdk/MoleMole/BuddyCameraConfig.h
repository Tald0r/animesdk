#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_BUDDYCAMERACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB49BB40)

namespace MoleMole
{
	inline static constexpr unsigned int BuddyCameraConfig_TypeDefinitionIndex = 42673;

	class BuddyCameraConfig : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* moveCurve; // 0x10
		::System::Single moveTime; // 0x18
		::UnityEngine::Vector3 position; // 0x1C
		::System::Single fov; // 0x28
		::UnityEngine::Vector3 rotation; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BUDDYCAMERACONFIG__CTOR_OFFSET))(this);
		}
	};
}
