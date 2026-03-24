#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemContextTLSData.h"
#include "unitysdk/Nap/NapECS/EcsSystemUpdatePhase.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define NAP_NAPECS_ECSSYSTEM_AFTERANIMATORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B400)
#define NAP_NAPECS_ECSSYSTEM_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B580)
#define NAP_NAPECS_ECSSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x18D8B0F0)
#define NAP_NAPECS_ECSSYSTEM_DEPENDON_OFFSET UNITYSDK_OFFSET(0x18D8B070)
#define NAP_NAPECS_ECSSYSTEM_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B520)
#define NAP_NAPECS_ECSSYSTEM_FIXEDUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x18D8B3A0)
#define NAP_NAPECS_ECSSYSTEM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B340)
#define NAP_NAPECS_ECSSYSTEM_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x18D8B000)
#define NAP_NAPECS_ECSSYSTEM_GET_ISFIXEDFRAMEALWAYS60_OFFSET UNITYSDK_OFFSET(0x18D8AFF0)
#define NAP_NAPECS_ECSSYSTEM_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x18D8B280)
#define NAP_NAPECS_ECSSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B220)
#define NAP_NAPECS_ECSSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18D8B6A0)
#define NAP_NAPECS_ECSSYSTEM_OVERRIDEFLAG_OFFSET UNITYSDK_OFFSET(0x18D8B700)
#define NAP_NAPECS_ECSSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B2E0)
#define NAP_NAPECS_ECSSYSTEM_POSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B640)
#define NAP_NAPECS_ECSSYSTEM_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B5E0)
#define NAP_NAPECS_ECSSYSTEM_SET_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0x18D8AF00)
#define NAP_NAPECS_ECSSYSTEM_SET_UPDATESYSTEM_OFFSET UNITYSDK_OFFSET(0x18D8AF70)
#define NAP_NAPECS_ECSSYSTEM_START_OFFSET UNITYSDK_OFFSET(0x18D8B160)
#define NAP_NAPECS_ECSSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B1C0)
#define NAP_NAPECS_ECSSYSTEM_WAITFORFIXEDUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x18D8B4C0)
#define NAP_NAPECS_ECSSYSTEM_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x18D8B460)
#define NAP_NAPECS_ECSSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D8B770)
#define NAP_NAPECS_ECSSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18D8AFE0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystem_TypeDefinitionIndex = 35203;

	class EcsSystem : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_ProfileSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x8410);
		}
		static ::System::Boolean* StaticGet_ProfileDetailPhase()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x8411);
		}
		static ::System::Boolean* StaticGet_enableSkipUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x8412);
		}
		static ::Nap::NapECS::EcsSystemContextTLSData* StaticGet_tlsContext()
		{
			return (::Nap::NapECS::EcsSystemContextTLSData*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::String* SystemName; // 0x10
		::System::Int32 filterNotEmptyCount; // 0x18
		::System::Boolean m_hasDepend; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM__CCTOR_OFFSET))();
		}

		static ::System::Void set_UpdatePhase(::Nap::NapECS::EcsSystemUpdatePhase value)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsSystemUpdatePhase))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_SET_UPDATEPHASE_OFFSET))(value);
		}

		static ::System::Void set_UpdateSystem(::Nap::NapECS::EcsSystem* value)
		{
			return ((::System::Void(*)(::Nap::NapECS::EcsSystem*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_SET_UPDATESYSTEM_OFFSET))(value);
		}

		::System::Boolean get_IsFixedFrameAlways60()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_GET_ISFIXEDFRAMEALWAYS60_OFFSET))(this);
		}

		::System::Boolean get_canSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_GET_CANSKIP_OFFSET))(this);
		}

		::System::Void DependOn(::Nap::NapECS::EcsFilter* filter)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_DEPENDON_OFFSET))(this, filter);
		}

		::System::Void CreateFilters(::Nap::NapECS::EcsWorld* world)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_CREATEFILTERS_OFFSET))(this, world);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_LATEUPDATE_OFFSET))(this);
		}

		::System::Void LateUpdateAgain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_LATEUPDATEAGAIN_OFFSET))(this);
		}

		::System::Void PostLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_POSTLATEUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdateAgain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_FIXEDUPDATEAGAIN_OFFSET))(this);
		}

		::System::Void AfterAnimatorFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_AFTERANIMATORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void WaitForFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_WAITFORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void WaitForFixedUpdateAgain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_WAITFORFIXEDUPDATEAGAIN_OFFSET))(this);
		}

		::System::Void EndOfFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_ENDOFFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void AnimIKPostUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_ANIMIKPOSTUPDATE_OFFSET))(this);
		}

		::System::Void PostSimulationUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_POSTSIMULATIONUPDATE_OFFSET))(this);
		}

		::System::Void PostParticleSystemUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_POSTPARTICLESYSTEMUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void OverrideFlag(::System::UInt32& needUpdatePhaseFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSSYSTEM_OVERRIDEFLAG_OFFSET))(this, needUpdatePhaseFlags);
		}
	};
}
