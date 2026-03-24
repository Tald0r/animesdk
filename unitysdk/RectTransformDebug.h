#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define RECTTRANSFORMDEBUG_AWAKE_OFFSET UNITYSDK_OFFSET(0xD60FE90)
#define RECTTRANSFORMDEBUG_UPDATE_OFFSET UNITYSDK_OFFSET(0xD60FF60)
#define RECTTRANSFORMDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0xD610060)

inline static constexpr unsigned int RectTransformDebug_TypeDefinitionIndex = 69245;

class RectTransformDebug : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Vector2 RectSize; // 0x18
	::UnityEngine::RectTransform* _rectTransform; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTTRANSFORMDEBUG__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTTRANSFORMDEBUG_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RECTTRANSFORMDEBUG_UPDATE_OFFSET))(this);
	}
};
