#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }

#define MONOETHEREYESOBJECTOVERLAPTRIGGER_START_OFFSET UNITYSDK_OFFSET(0x7559070)
#define MONOETHEREYESOBJECTOVERLAPTRIGGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x75590D0)
#define MONOETHEREYESOBJECTOVERLAPTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x7559130)

inline static constexpr unsigned int MonoEtherEyesObjectOverlapTrigger_TypeDefinitionIndex = 51826;

class MonoEtherEyesObjectOverlapTrigger : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Collider*>* OverlapTriggers; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESOBJECTOVERLAPTRIGGER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESOBJECTOVERLAPTRIGGER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHEREYESOBJECTOVERLAPTRIGGER_UPDATE_OFFSET))(this);
	}
};
