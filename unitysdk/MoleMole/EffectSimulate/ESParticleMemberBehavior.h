#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EffectSimulate/ESLoopable.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }

#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_4272BE5198E6F216_OFFSET UNITYSDK_OFFSET(0xEC56260)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_F660D274D148C801_OFFSET UNITYSDK_OFFSET(0xEC56100)
#define MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0xEC561F0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESParticleMemberBehavior_TypeDefinitionIndex = 76425;

	class ESParticleMemberBehavior : public ::MoleMole::EffectSimulate::ESLoopable
	{
	public:
		// static const ::System::Int32 DRAW_ORDER = 0x14; // 0x0
		::UnityEngine::ParticleSystem* m_stPSCom; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_F660D274D148C801(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_F660D274D148C801_OFFSET))(this, a1);
		}

		::System::Void Method_3_4272BE5198E6F216(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPARTICLEMEMBERBEHAVIOR_METHOD_3_4272BE5198E6F216_OFFSET))(this, a1);
		}
	};
}
