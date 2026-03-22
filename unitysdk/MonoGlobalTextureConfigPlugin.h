#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MONOGLOBALTEXTURECONFIGPLUGIN_AWAKE_OFFSET UNITYSDK_OFFSET(0x1923ACA0)
#define MONOGLOBALTEXTURECONFIGPLUGIN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1923AE60)
#define MONOGLOBALTEXTURECONFIGPLUGIN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1923AF70)
#define MONOGLOBALTEXTURECONFIGPLUGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1923AF50)

inline static constexpr unsigned int MonoGlobalTextureConfigPlugin_TypeDefinitionIndex = 28093;

class MonoGlobalTextureConfigPlugin : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet_s_MaxAnisotropicSamplingLevel()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MonoGlobalTextureConfigPlugin_TypeDefinitionIndex)->GetStaticField(0x6970);
	}
	static ::System::Boolean* StaticGet_s_DisableDecalHeightMap()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoGlobalTextureConfigPlugin_TypeDefinitionIndex)->GetStaticField(0x6974);
	}
	::System::Int32 OldAnisotropicSamplingLevel; // 0x18
	::System::Boolean disableDecalHeightMap; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN__CCTOR_OFFSET))();
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN_AWAKE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOGLOBALTEXTURECONFIGPLUGIN_ONDESTROY_OFFSET))(this);
	}
};
