#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOETHERSHARD_ONENABLE_OFFSET UNITYSDK_OFFSET(0xAACCEB0)
#define MONOETHERSHARD__CCTOR_OFFSET UNITYSDK_OFFSET(0xAACD0E0)
#define MONOETHERSHARD__CTOR_OFFSET UNITYSDK_OFFSET(0xAACD0C0)

inline static constexpr unsigned int MonoEtherShard_TypeDefinitionIndex = 72862;

class MonoEtherShard : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_RandomValue()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoEtherShard_TypeDefinitionIndex)->GetStaticField(0xEF10);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHERSHARD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOETHERSHARD__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOETHERSHARD_ONENABLE_OFFSET))(this);
	}
};
