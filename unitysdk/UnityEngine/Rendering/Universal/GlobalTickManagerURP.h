#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class MonoRenderEntity;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19B62170)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONCREATE_OFFSET UNITYSDK_OFFSET(0x19B62200)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x19B61B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_REGISTERMONORENDERENTITY_OFFSET UNITYSDK_OFFSET(0x19B61FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_UNREGISTERMONORENDERENTITY_OFFSET UNITYSDK_OFFSET(0x19B620A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP__CTOR_OFFSET UNITYSDK_OFFSET(0x19B62240)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GlobalTickManagerURP_TypeDefinitionIndex = 29535;

	class GlobalTickManagerURP : public ::Foundation::SingletonDisposable_1<::UnityEngine::Rendering::Universal::GlobalTickManagerURP*>
	{
	public:
		::System::Collections::Generic::HashSet_1<::MonoRenderEntity*>* _delayAddMonoRenderEntitySet; // 0x10
		::System::Collections::Generic::HashSet_1<::MonoRenderEntity*>* _monoRenderEntitySet; // 0x18
		::System::Collections::Generic::HashSet_1<::MonoRenderEntity*>* _delayRemoveMonoRenderEntitySet; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP__CTOR_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONUPDATE_OFFSET))(this);
		}

		::System::Void RegisterMonoRenderEntity(::MonoRenderEntity* monoRenderEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_REGISTERMONORENDERENTITY_OFFSET))(this, monoRenderEntity);
		}

		::System::Void UnregisterMonoRenderEntity(::MonoRenderEntity* monoRenderEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MonoRenderEntity*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_UNREGISTERMONORENDERENTITY_OFFSET))(this, monoRenderEntity);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnCreate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALTICKMANAGERURP_ONCREATE_OFFSET))(this);
		}
	};
}
