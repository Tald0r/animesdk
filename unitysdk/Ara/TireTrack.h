#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Ara { class AraTrail; }

#define ARA_TIRETRACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1B1B38B0)
#define ARA_TIRETRACK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1B1B3790)
#define ARA_TIRETRACK_PROJECTTOGROUND_OFFSET UNITYSDK_OFFSET(0x1B1B3960)
#define ARA_TIRETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1B3C90)

namespace Ara
{
	inline static constexpr unsigned int TireTrack_TypeDefinitionIndex = 30853;

	class TireTrack : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Ara::AraTrail* trail; // 0x18
		::System::Single offset; // 0x20
		::System::Single maxDist; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void ProjectToGround()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ARA_TIRETRACK_PROJECTTOGROUND_OFFSET))(this);
		}
	};
}
