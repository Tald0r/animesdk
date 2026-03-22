#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x16D77E10)
#define FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET UNITYSDK_OFFSET(0x16D78170)
#define FXMIRRORREFLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16D78120)
#define FXMIRRORREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16D787D0)

inline static constexpr unsigned int FxMirrorReflection_TypeDefinitionIndex = 28079;

class FxMirrorReflection : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION__CTOR_OFFSET))(this);
	}

	::System::Void BindPropertyBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONENABLE_OFFSET))(this);
	}

	::System::Void GenerateMirrorPart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET))(this);
	}
};
