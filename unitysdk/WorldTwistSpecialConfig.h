#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define WORLDTWISTSPECIALCONFIG_MESHRENDERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x196F5E30)
#define WORLDTWISTSPECIALCONFIG_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x196F6180)
#define WORLDTWISTSPECIALCONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x196F6110)
#define WORLDTWISTSPECIALCONFIG_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x196F61F0)
#define WORLDTWISTSPECIALCONFIG_SETUPMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x196F5F70)
#define WORLDTWISTSPECIALCONFIG_START_OFFSET UNITYSDK_OFFSET(0x196F5DE0)
#define WORLDTWISTSPECIALCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x196F6240)

inline static constexpr unsigned int WorldTwistSpecialConfig_TypeDefinitionIndex = 28074;

class WorldTwistSpecialConfig : public ::UnityEngine::MonoBehaviour
{
public:
	::System::Single specificTwistIntensity; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* meshRenderers; // 0x20
	::System::Int32 _WorldTwistSpecificIntensity; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG_START_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG_ONVALIDATE_OFFSET))(this);
	}

	::System::Void SetupMaterialParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG_SETUPMATERIALPARAMS_OFFSET))(this);
	}

	::System::Void MeshRenderCollection()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTSPECIALCONFIG_MESHRENDERCOLLECTION_OFFSET))(this);
	}
};
