#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine { class Renderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18398B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18398BC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__ONENABLE_B__44_0_OFFSET UNITYSDK_OFFSET(0x18398BD0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineObjectRenderer___c_TypeDefinitionIndex = 28913;

	class OutlineObjectRenderer___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer___c** StaticGet___9()
		{
			return (::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x21840);
		}
		static ::System::Predicate_1<::UnityEngine::Renderer*>** StaticGet___9__44_0()
		{
			return (::System::Predicate_1<::UnityEngine::Renderer*>**)Il2CppClass::FromTypeDefinitionIndex(OutlineObjectRenderer___c_TypeDefinitionIndex)->GetStaticField(0x21848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnable_b__44_0(::UnityEngine::Renderer* r)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINEOBJECTRENDERER___C__ONENABLE_B__44_0_OFFSET))(this, r);
		}
	};
}
