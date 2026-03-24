#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_HOLLOW2DINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xEC50170)

namespace MoleMole::Config
{
	inline static constexpr unsigned int Hollow2DInfo_TypeDefinitionIndex = 53564;

	class Hollow2DInfo : public ::System::Object
	{
	public:
		::System::Int32 gridLayoutOffset; // 0x10
		::UnityEngine::Vector2 unlockArrowPosition; // 0x14
		::UnityEngine::Vector2 unLockIconSize; // 0x1C
		::UnityEngine::Vector3 logoScale; // 0x24
		::UnityEngine::Vector2 unLockIconPos; // 0x30
		::System::Int32 verticalOffset; // 0x38
		::UnityEngine::Vector2 newPointPosition; // 0x3C
		::UnityEngine::Vector3 logoPos; // 0x44
		::UnityEngine::Vector2 lockArrowPosition; // 0x50
		::UnityEngine::Vector2 tipsOffset; // 0x58
		::UnityEngine::Vector2 nameLockedOffset; // 0x60
		::UnityEngine::Vector2 redPointPosition; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_HOLLOW2DINFO__CTOR_OFFSET))(this);
		}
	};
}
