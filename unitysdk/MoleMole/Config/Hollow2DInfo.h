#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_HOLLOW2DINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xF171790)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Hollow2DInfo_TypeDefinitionIndex = 57131;

	class Hollow2DInfo : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 logoScale; // 0x10
		::UnityEngine::Vector2 nameLockedOffset; // 0x1C
		::UnityEngine::Vector2 tipsOffset; // 0x24
		::UnityEngine::Vector2 redPointPosition; // 0x2C
		::UnityEngine::Vector2 unLockIconSize; // 0x34
		::UnityEngine::Vector2 lockArrowPosition; // 0x3C
		::UnityEngine::Vector2 unlockArrowPosition; // 0x44
		::System::Int32 gridLayoutOffset; // 0x4C
		::UnityEngine::Vector2 unLockIconPos; // 0x50
		::System::Int32 verticalOffset; // 0x58
		::UnityEngine::Vector3 logoPos; // 0x5C
		::UnityEngine::Vector2 newPointPosition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOW2DINFO__CTOR_OFFSET))(this);
		}
	};
}
