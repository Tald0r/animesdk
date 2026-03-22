#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETCONSTANTBUFFER_OFFSET UNITYSDK_OFFSET(0x19DD6C60)
#define UNITYENGINE_MATERIALPROPERTYBLOCKHOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD6CE0)

namespace UnityEngine
{
	inline static constexpr unsigned int MaterialPropertyBlockHook_TypeDefinitionIndex = 5346;

	class MaterialPropertyBlockHook : public ::System::Object
	{
	public:
		static ::System::Action_4<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2>** StaticGet_onHookSetConstantBuffer()
		{
			return (::System::Action_4<::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(MaterialPropertyBlockHook_TypeDefinitionIndex)->GetStaticField(0x54C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK__CTOR_OFFSET))(this);
		}

		static ::System::Void invoke_onHookMaterialPropertyBlockSetConstantBuffer(::UnityEngine::MaterialPropertyBlock* block, ::System::Int32 nameId, ::UnityEngine::ComputeBuffer* value, ::UnityEngine::Vector2 offsetAndSize)
		{
			return ((::System::Void(*)(::UnityEngine::MaterialPropertyBlock*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_MATERIALPROPERTYBLOCKHOOK_INVOKE_ONHOOKMATERIALPROPERTYBLOCKSETCONSTANTBUFFER_OFFSET))(block, nameId, value, offsetAndSize);
		}
	};
}
