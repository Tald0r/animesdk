#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MOLEMOLE_SHADERBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A59FF0)

namespace MoleMole
{
	inline static constexpr unsigned int ShaderBinder_TypeDefinitionIndex = 7908;

	class ShaderBinder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADERBINDER__CTOR_OFFSET))(this);
		}
	};
}
