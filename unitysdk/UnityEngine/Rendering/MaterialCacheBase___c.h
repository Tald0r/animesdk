#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class MaterialCacheBase_CacheEntry; }

#define UNITYENGINE_RENDERING_MATERIALCACHEBASE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1391B0E0)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1391B120)
#define UNITYENGINE_RENDERING_MATERIALCACHEBASE___C___CCTOR_B__15_0_OFFSET UNITYSDK_OFFSET(0x1391B130)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MaterialCacheBase___c_TypeDefinitionIndex = 28326;

	class MaterialCacheBase___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::MaterialCacheBase___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::MaterialCacheBase___c**)Il2CppClass::FromTypeDefinitionIndex(MaterialCacheBase___c_TypeDefinitionIndex)->GetStaticField(0x22520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE___C__CTOR_OFFSET))(this);
		}

		::System::Void __cctor_b__15_0(::UnityEngine::Rendering::MaterialCacheBase_CacheEntry* l)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::MaterialCacheBase_CacheEntry*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MATERIALCACHEBASE___C___CCTOR_B__15_0_OFFSET))(this, l);
		}
	};
}
