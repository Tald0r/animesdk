#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define NEWBEHAVIOURSCRIPT_START_OFFSET UNITYSDK_OFFSET(0x99B0DE0)
#define NEWBEHAVIOURSCRIPT_UPDATE_OFFSET UNITYSDK_OFFSET(0x99B0E40)
#define NEWBEHAVIOURSCRIPT__CTOR_OFFSET UNITYSDK_OFFSET(0x99B0EA0)

inline static constexpr unsigned int NewBehaviourScript_TypeDefinitionIndex = 58771;

class NewBehaviourScript : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWBEHAVIOURSCRIPT__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWBEHAVIOURSCRIPT_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEWBEHAVIOURSCRIPT_UPDATE_OFFSET))(this);
	}
};
