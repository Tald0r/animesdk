#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_3E3F440D83DF3E90;
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_BB4D2B7A94C274FB_SPAWN_OFFSET UNITYSDK_OFFSET(0xAAA43C0)
#define CLASS_1_BB4D2B7A94C274FB__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA4440)

inline static constexpr unsigned int Class_1_BB4D2B7A94C274FB_TypeDefinitionIndex = 74945;

class Class_1_BB4D2B7A94C274FB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4D2B7A94C274FB__CTOR_OFFSET))(this);
	}

	::Class_3_3E3F440D83DF3E90* Spawn(::UnityEngine::GameObject* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2)
	{
		return ((::Class_3_3E3F440D83DF3E90*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BB4D2B7A94C274FB_SPAWN_OFFSET))(this, a1, a2);
	}
};
