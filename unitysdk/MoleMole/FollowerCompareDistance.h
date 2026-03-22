#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CompareDistance.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0xE482890)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0xE482940)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0xE4829F0)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET1POS_OFFSET UNITYSDK_OFFSET(0xE482A40)
#define MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET2POS_OFFSET UNITYSDK_OFFSET(0xE482A70)

namespace MoleMole
{
	inline static constexpr unsigned int FollowerCompareDistance_TypeDefinitionIndex = 43022;

	class FollowerCompareDistance : public ::MoleMole::CompareDistance
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetTarget1Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET1POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 GetTarget2Pos(::System::Boolean& result)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE_GETTARGET2POS_OFFSET))(this, result);
		}

		::UnityEngine::Vector3 __base_GetTarget1Pos(::System::Boolean& P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET1POS_OFFSET))(this, P0);
		}

		::UnityEngine::Vector3 __base_GetTarget2Pos(::System::Boolean& P0)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_FOLLOWERCOMPAREDISTANCE___BASE_GETTARGET2POS_OFFSET))(this, P0);
		}
	};
}
