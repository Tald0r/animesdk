#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Coffee::UIExtensions { class UIParticle; }
namespace Coffee::UIExtensions { class UIParticleAttractor; }
namespace Coffee::UIExtensions { class UIParticleRenderer; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET UNITYSDK_OFFSET(0x1A1CAFE0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET UNITYSDK_OFFSET(0x1A1CCDF0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1A1CC040)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1A1CC090)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A1CC340)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET UNITYSDK_OFFSET(0x1A1C5B60)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A1BD1E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET UNITYSDK_OFFSET(0x1A1C5D00)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1A1BD9E0)
#define COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1CD230)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleUpdater_TypeDefinitionIndex = 31197;

	class UIParticleUpdater : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>** StaticGet_s_ActiveParticles()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticle*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x239C0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_UpdatedGroupIds()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x239C8);
		}
		static ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>** StaticGet_s_ActiveAttractors()
		{
			return (::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleAttractor*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x239D0);
		}
		static ::System::Int32* StaticGet_s_FrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleUpdater_TypeDefinitionIndex)->GetStaticField(0x7AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER__CCTOR_OFFSET))();
		}

		static ::System::Int32 get_uiParticleCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GET_UIPARTICLECOUNT_OFFSET))();
		}

		static ::System::Void Register(::Coffee::UIExtensions::UIParticle* particle)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_OFFSET))(particle);
		}

		static ::System::Void Unregister(::Coffee::UIExtensions::UIParticle* particle)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticle*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_OFFSET))(particle);
		}

		static ::System::Void Register_1(::Coffee::UIExtensions::UIParticleAttractor* attractor)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticleAttractor*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REGISTER_1_OFFSET))(attractor);
		}

		static ::System::Void Unregister_1(::Coffee::UIExtensions::UIParticleAttractor* attractor)
		{
			return ((::System::Void(*)(::Coffee::UIExtensions::UIParticleAttractor*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_UNREGISTER_1_OFFSET))(attractor);
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void Refresh()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_REFRESH_OFFSET))();
		}

		static ::System::Void GetGroupedRenderers(::System::Int32 groupId, ::System::Int32 index, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>* results)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::Coffee::UIExtensions::UIParticleRenderer*>*))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETGROUPEDRENDERERS_OFFSET))(groupId, index, results);
		}

		static ::Coffee::UIExtensions::UIParticle* GetPrimary(::System::Int32 groupId)
		{
			return ((::Coffee::UIExtensions::UIParticle*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLEUPDATER_GETPRIMARY_OFFSET))(groupId);
		}
	};
}
