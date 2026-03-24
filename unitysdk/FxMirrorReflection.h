#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x173DEA60)
#define FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET UNITYSDK_OFFSET(0x173DED70)
#define FXMIRRORREFLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x173DE8C0)
#define FXMIRRORREFLECTION_ONLIGHTWEIGHTACTIVE_OFFSET UNITYSDK_OFFSET(0x173DE9E0)
#define FXMIRRORREFLECTION_ONREALENABLE_OFFSET UNITYSDK_OFFSET(0x173DE990)
#define FXMIRRORREFLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x173DF3D0)

inline static constexpr unsigned int FxMirrorReflection_TypeDefinitionIndex = 29019;

class FxMirrorReflection : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONENABLE_OFFSET))(this);
	}

	::System::Void OnLightweightActive()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONLIGHTWEIGHTACTIVE_OFFSET))(this);
	}

	::System::Void BindPropertyBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_BINDPROPERTYBLOCK_OFFSET))(this);
	}

	::System::Void OnRealEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_ONREALENABLE_OFFSET))(this);
	}

	::System::Void GenerateMirrorPart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FXMIRRORREFLECTION_GENERATEMIRRORPART_OFFSET))(this);
	}
};
