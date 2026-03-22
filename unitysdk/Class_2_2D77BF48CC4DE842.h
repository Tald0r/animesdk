#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_BDDDDB46A99CFF4C.h"
#include "unitysdk/MoleMole/Config/AnimatorZoneHitWallEffect_RayAxis.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class Transform; }

#define CLASS_2_2D77BF48CC4DE842_METHOD_2_20139550C8206D50_OFFSET UNITYSDK_OFFSET(0x96BD5F0)
#define CLASS_2_2D77BF48CC4DE842_METHOD_2_705AD94F036B4204_OFFSET UNITYSDK_OFFSET(0x96BD850)
#define CLASS_2_2D77BF48CC4DE842_METHOD_2_9D455FE4693966A8_1_OFFSET UNITYSDK_OFFSET(0x96BDCA0)
#define CLASS_2_2D77BF48CC4DE842_METHOD_2_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x96BD4F0)
#define CLASS_2_2D77BF48CC4DE842__CTOR_OFFSET UNITYSDK_OFFSET(0x96BD5B0)

inline static constexpr unsigned int Class_2_2D77BF48CC4DE842_TypeDefinitionIndex = 76006;

class Class_2_2D77BF48CC4DE842 : public ::Class_1_BDDDDB46A99CFF4C
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x80
	::MoleMole::Battle::Entity* Field_2_6; // 0x88
	::UnityEngine::Transform* Field_2_0; // 0x90
	::UnityEngine::Transform* Field_2_1; // 0x98
	::System::Single Field_2_4; // 0xA0
	::MoleMole::Config::AnimatorZoneHitWallEffect_RayAxis Field_2_3; // 0xA4
	::System::Boolean Field_2_5; // 0xA8
	::System::Int32 Field_2_7; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D77BF48CC4DE842__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D77BF48CC4DE842_METHOD_2_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Boolean Method_2_20139550C8206D50()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D77BF48CC4DE842_METHOD_2_20139550C8206D50_OFFSET))(this);
	}

	::System::Boolean Method_2_705AD94F036B4204(::UnityEngine::Vector3& a1, ::UnityEngine::Vector3& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_2_2D77BF48CC4DE842_METHOD_2_705AD94F036B4204_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9D455FE4693966A8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2D77BF48CC4DE842_METHOD_2_9D455FE4693966A8_1_OFFSET))(this);
	}
};
