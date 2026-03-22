#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/NapLodProxy.h"
#include "unitysdk/UnityEngine/Vector3.h"

class NapSceneEffectLodProxy_SceneEffectLodConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }

#define NAPSCENEEFFECTLODPROXY_INITBIND_OFFSET UNITYSDK_OFFSET(0x16D78940)
#define NAPSCENEEFFECTLODPROXY_ISONETIMELODPROXY_OFFSET UNITYSDK_OFFSET(0x16D78EA0)
#define NAPSCENEEFFECTLODPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x16D788E0)
#define NAPSCENEEFFECTLODPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16D78880)
#define NAPSCENEEFFECTLODPROXY_UPDATELODINFO_OFFSET UNITYSDK_OFFSET(0x16D78EE0)
#define NAPSCENEEFFECTLODPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x16D79510)
#define NAPSCENEEFFECTLODPROXY___BASE_ISONETIMELODPROXY_OFFSET UNITYSDK_OFFSET(0x16D795D0)

inline static constexpr unsigned int NapSceneEffectLodProxy_TypeDefinitionIndex = 28085;

class NapSceneEffectLodProxy : public ::UnityEngine::Rendering::Universal::Internal::NapLodProxy
{
public:
	::System::Collections::Generic::List_1<::NapSceneEffectLodProxy_SceneEffectLodConfig*>* m_EffectLodConfigs; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ONDISABLE_OFFSET))(this);
	}

	::System::Void InitBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_INITBIND_OFFSET))(this);
	}

	::System::Boolean IsOneTimeLodProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_ISONETIMELODPROXY_OFFSET))(this);
	}

	::System::Void UpdateLodInfo(::UnityEngine::Vector3 triggerPos, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset* globalSetting)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Rendering::Universal::UniversalRenderPipelineAsset*))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY_UPDATELODINFO_OFFSET))(this, triggerPos, globalSetting);
	}

	::System::Boolean __base_IsOneTimeLodProxy()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCENEEFFECTLODPROXY___BASE_ISONETIMELODPROXY_OFFSET))(this);
	}
};
