#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x8F28DF0)
#define MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x8F29010)

namespace MoleMole
{
	inline static constexpr unsigned int MonoInlevelFollowLightToNormalTex_TypeDefinitionIndex = 54118;

	class MonoInlevelFollowLightToNormalTex : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOINLEVELFOLLOWLIGHTTONORMALTEX_LATEUPDATE_OFFSET))(this);
		}
	};
}
