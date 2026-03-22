#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }

#define ROOTMOTION_COMMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA8890)

namespace RootMotion
{
	inline static constexpr unsigned int Comments_TypeDefinitionIndex = 34983;

	class Comments : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* text; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_COMMENTS__CTOR_OFFSET))(this);
		}
	};
}
