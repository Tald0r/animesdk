#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOHOLLOWEFFANIM__CTOR_OFFSET UNITYSDK_OFFSET(0xB9A45F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoHollowEffAnim_TypeDefinitionIndex = 72243;

	class MonoHollowEffAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 AnimLoopCounter; // 0x18
		::System::Boolean IsEnableSwitch; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOHOLLOWEFFANIM__CTOR_OFFSET))(this);
		}
	};
}
