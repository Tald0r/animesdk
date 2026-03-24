#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Material; }

#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A8C3910)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8C3950)
#define FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C___CTOR_B__10_0_OFFSET UNITYSDK_OFFSET(0x1A8C3960)

namespace FluffyUnderware::Curvy::Components
{
	inline static constexpr unsigned int CurvyGLRenderer___c_TypeDefinitionIndex = 36706;

	class CurvyGLRenderer___c : public ::System::Object
	{
	public:
		static ::FluffyUnderware::Curvy::Components::CurvyGLRenderer___c** StaticGet___9()
		{
			return (::FluffyUnderware::Curvy::Components::CurvyGLRenderer___c**)Il2CppClass::FromTypeDefinitionIndex(CurvyGLRenderer___c_TypeDefinitionIndex)->GetStaticField(0x26A90);
		}
		static ::System::Func_1<::UnityEngine::Material*>** StaticGet___9__10_0()
		{
			return (::System::Func_1<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(CurvyGLRenderer___c_TypeDefinitionIndex)->GetStaticField(0x26A98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::Material* __ctor_b__10_0()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_COMPONENTS_CURVYGLRENDERER___C___CTOR_B__10_0_OFFSET))(this);
		}
	};
}
