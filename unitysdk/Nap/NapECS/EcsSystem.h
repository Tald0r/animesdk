#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Nap/NapECS/EcsSystemContextTLSData.h"
#include "unitysdk/Nap/NapECS/EcsSystemUpdatePhase.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define NAP_NAPECS_ECSSYSTEM_AFTERANIMATORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C0E0)
#define NAP_NAPECS_ECSSYSTEM_ANIMIKPOSTUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C260)
#define NAP_NAPECS_ECSSYSTEM_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x1882BDD0)
#define NAP_NAPECS_ECSSYSTEM_DEPENDON_OFFSET UNITYSDK_OFFSET(0x1882BD50)
#define NAP_NAPECS_ECSSYSTEM_ENDOFFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C200)
#define NAP_NAPECS_ECSSYSTEM_FIXEDUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x1882C080)
#define NAP_NAPECS_ECSSYSTEM_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C020)
#define NAP_NAPECS_ECSSYSTEM_GET_CANSKIP_OFFSET UNITYSDK_OFFSET(0x1882BCE0)
#define NAP_NAPECS_ECSSYSTEM_GET_ISFIXEDFRAMEALWAYS60_OFFSET UNITYSDK_OFFSET(0x1882BCD0)
#define NAP_NAPECS_ECSSYSTEM_LATEUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x1882BF60)
#define NAP_NAPECS_ECSSYSTEM_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1882BF00)
#define NAP_NAPECS_ECSSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1882C380)
#define NAP_NAPECS_ECSSYSTEM_OVERRIDEFLAG_OFFSET UNITYSDK_OFFSET(0x1882C3E0)
#define NAP_NAPECS_ECSSYSTEM_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1882BFC0)
#define NAP_NAPECS_ECSSYSTEM_POSTPARTICLESYSTEMUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C320)
#define NAP_NAPECS_ECSSYSTEM_POSTSIMULATIONUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C2C0)
#define NAP_NAPECS_ECSSYSTEM_SET_UPDATEPHASE_OFFSET UNITYSDK_OFFSET(0x1882BBE0)
#define NAP_NAPECS_ECSSYSTEM_SET_UPDATESYSTEM_OFFSET UNITYSDK_OFFSET(0x1882BC50)
#define NAP_NAPECS_ECSSYSTEM_START_OFFSET UNITYSDK_OFFSET(0x1882BE40)
#define NAP_NAPECS_ECSSYSTEM_UPDATE_OFFSET UNITYSDK_OFFSET(0x1882BEA0)
#define NAP_NAPECS_ECSSYSTEM_WAITFORFIXEDUPDATEAGAIN_OFFSET UNITYSDK_OFFSET(0x1882C1A0)
#define NAP_NAPECS_ECSSYSTEM_WAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1882C140)
#define NAP_NAPECS_ECSSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1882C450)
#define NAP_NAPECS_ECSSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1882BCC0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystem_TypeDefinitionIndex = 34175;

	class EcsSystem : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_enableSkipUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x80B0);
		}
		static ::System::Boolean* StaticGet_ProfileSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x80B1);
		}
		static ::System::Boolean* StaticGet_ProfileDetailPhase()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EcsSystem_TypeDefinitionIndex)->GetStaticField(0x80B2);
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
