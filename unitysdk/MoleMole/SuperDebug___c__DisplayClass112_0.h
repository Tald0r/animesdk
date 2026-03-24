#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__CTOR_OFFSET UNITYSDK_OFFSET(0x199AB710)
#define MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__DRAWCIRCLE_B__0_OFFSET UNITYSDK_OFFSET(0x199AB720)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug___c__DisplayClass112_0_TypeDefinitionIndex = 8156;

	class SuperDebug___c__DisplayClass112_0 : public ::System::Object
	{
	public:
		::System::Single size; // 0x10
		::System::Single duration; // 0x14
		::System::Boolean depthTest; // 0x18
		::UnityEngine::Vector3 centerPoint; // 0x1C
		::UnityEngine::Color color; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__CTOR_OFFSET))(this);
		}

		::System::Void _DrawCircle_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG___C__DISPLAYCLASS112_0__DRAWCIRCLE_B__0_OFFSET))(this);
		}
	};
}
