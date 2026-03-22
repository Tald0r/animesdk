#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define MOLEMOLE_FEATUREPOINT_METHOD_1_009FA3CB66AE43C3_OFFSET UNITYSDK_OFFSET(0xCCD57F0)
#define MOLEMOLE_FEATUREPOINT_METHOD_1_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0xCCD5940)
#define MOLEMOLE_FEATUREPOINT_METHOD_1_4F4018519B20BBDD_OFFSET UNITYSDK_OFFSET(0xCCD59C0)
#define MOLEMOLE_FEATUREPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0xCCD57D0)

namespace MoleMole
{
	inline static constexpr unsigned int FeaturePoint_TypeDefinitionIndex = 43673;

	class FeaturePoint : public ::System::Object
	{
	public:
		::System::Single minAngle; // 0x10
		::System::Single maxAngle; // 0x14
		::UnityEngine::Transform* pointTransform; // 0x18
		::UnityEngine::Vector3 pointTransformOffset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_009FA3CB66AE43C3(::UnityEngine::Vector3& a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_METHOD_1_009FA3CB66AE43C3_OFFSET))(this, a1);
		}

		::System::Void Method_1_40E490E2772D5D75(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_METHOD_1_40E490E2772D5D75_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_1_4F4018519B20BBDD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FEATUREPOINT_METHOD_1_4F4018519B20BBDD_OFFSET))(this);
		}
	};
}
