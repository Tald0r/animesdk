#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class BindData;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }

#define MATERIALPARAMETERBINDER_APPLYBINDINGS_OFFSET UNITYSDK_OFFSET(0x197CEA30)
#define MATERIALPARAMETERBINDER_AWAKE_OFFSET UNITYSDK_OFFSET(0x197CDB40)
#define MATERIALPARAMETERBINDER_CACHEBINDINGS_OFFSET UNITYSDK_OFFSET(0x197CDC40)
#define MATERIALPARAMETERBINDER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x197CF0F0)
#define MATERIALPARAMETERBINDER_UPDATE_OFFSET UNITYSDK_OFFSET(0x197CE9E0)
#define MATERIALPARAMETERBINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x197CF170)

inline static constexpr unsigned int MaterialParameterBinder_TypeDefinitionIndex = 28945;

class MaterialParameterBinder : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::Renderer* rend; // 0x18
	::UnityEngine::MaterialPropertyBlock* propBlock; // 0x20
	::System::Collections::Generic::List_1<::BindData*>* bindings; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* previousValues; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER__CTOR_OFFSET))(this);
	}

	::System::Void Awake()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_AWAKE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_UPDATE_OFFSET))(this);
	}

	::System::Void CacheBindings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_CACHEBINDINGS_OFFSET))(this);
	}

	::System::Void ApplyBindings()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_APPLYBINDINGS_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MATERIALPARAMETERBINDER_ONVALIDATE_OFFSET))(this);
	}
};
