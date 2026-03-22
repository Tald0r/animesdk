#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define DEST_MATH_VECTOR2EX_INFORMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AEFA300)

namespace Dest::Math
{
	inline static constexpr unsigned int Vector2ex_Information_TypeDefinitionIndex = 31692;

	class Vector2ex_Information : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Vector2>* Direction; // 0x10
		::Il2CppArray<::System::Int32>* Extreme; // 0x18
		::System::Int32 Dimension; // 0x20
		::System::Boolean ExtremeCCW; // 0x24
		::UnityEngine::Vector2 Max; // 0x28
		::System::Single MaxRange; // 0x30
		::UnityEngine::Vector2 Origin; // 0x34
		::UnityEngine::Vector2 Min; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEST_MATH_VECTOR2EX_INFORMATION__CTOR_OFFSET))(this);
		}
	};
}
