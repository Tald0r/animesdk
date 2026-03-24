#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_UIFOLLOW3DTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xAC57E10)

namespace MoleMole
{
	inline static constexpr unsigned int UIFollow3DTarget_TypeDefinitionIndex = 55807;

	class UIFollow3DTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOLLOW3DTARGET__CTOR_OFFSET))(this);
		}
	};
}
