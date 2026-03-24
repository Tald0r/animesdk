#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOEFFECTBEHAVIORTESTER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x9ACAF80)
#define MONOEFFECTBEHAVIORTESTER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x9ACAED0)
#define MONOEFFECTBEHAVIORTESTER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x9ACAE70)
#define MONOEFFECTBEHAVIORTESTER_START_OFFSET UNITYSDK_OFFSET(0x9ACADB0)
#define MONOEFFECTBEHAVIORTESTER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9ACAE10)
#define MONOEFFECTBEHAVIORTESTER__CTOR_OFFSET UNITYSDK_OFFSET(0x9ACAFE0)

inline static constexpr unsigned int MonoEffectBehaviorTester_TypeDefinitionIndex = 38160;

class MonoEffectBehaviorTester : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Boolean isDestroyOnDisabled; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_START_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_UPDATE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOEFFECTBEHAVIORTESTER_ONDESTROY_OFFSET))(this);
	}
};
