#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSource.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::AI { class NavMeshModifier; }
namespace UnityEngine::AI { class NavMeshModifierVolume; }

#define UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__77_0_OFFSET UNITYSDK_OFFSET(0x1AFC0110)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AFC00C0)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__78_0_OFFSET UNITYSDK_OFFSET(0x1AFC0130)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__78_1_OFFSET UNITYSDK_OFFSET(0x1AFC0150)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__78_2_OFFSET UNITYSDK_OFFSET(0x1AFC0300)
#define UNITYENGINE_AI_NAVMESHSURFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC0100)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshSurface___c_TypeDefinitionIndex = 34238;

	class NavMeshSurface___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>** StaticGet___9__78_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifier*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x248F0);
		}
		static ::UnityEngine::AI::NavMeshSurface___c** StaticGet___9()
		{
			return (::UnityEngine::AI::NavMeshSurface___c**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x248F8);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__78_2()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x24900);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>** StaticGet___9__77_0()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshModifierVolume*>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x24908);
		}
		static ::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>** StaticGet___9__78_1()
		{
			return (::System::Predicate_1<::UnityEngine::AI::NavMeshBuildSource>**)Il2CppClass::FromTypeDefinitionIndex(NavMeshSurface___c_TypeDefinitionIndex)->GetStaticField(0x24910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _AppendModifierVolumes_b__77_0(::UnityEngine::AI::NavMeshModifierVolume* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifierVolume*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__APPENDMODIFIERVOLUMES_B__77_0_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__78_0(::UnityEngine::AI::NavMeshModifier* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshModifier*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__78_0_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__78_1(::UnityEngine::AI::NavMeshBuildSource x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__78_1_OFFSET))(this, x);
		}

		::System::Boolean _CollectSources_b__78_2(::UnityEngine::AI::NavMeshBuildSource x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::AI::NavMeshBuildSource))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESHSURFACE___C__COLLECTSOURCES_B__78_2_OFFSET))(this, x);
		}
	};
}
