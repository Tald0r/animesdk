#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_B2CEFC27844059B6;
namespace MoleMole::Config { class HollowChessboardParticleConfig; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_BB4D2B7A94C274FB_SPAWN_OFFSET UNITYSDK_OFFSET(0x6E8C5A0)
#define CLASS_1_BB4D2B7A94C274FB__CTOR_OFFSET UNITYSDK_OFFSET(0x6E8C620)

inline static constexpr unsigned int Class_1_BB4D2B7A94C274FB_TypeDefinitionIndex = 41081;

class Class_1_BB4D2B7A94C274FB : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BB4D2B7A94C274FB__CTOR_OFFSET))(this);
	}

	::Class_3_B2CEFC27844059B6* Spawn(::UnityEngine::GameObject* a1, ::MoleMole::Config::HollowChessboardParticleConfig* a2)
	{
		return ((::Class_3_B2CEFC27844059B6*(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Config::HollowChessboardParticleConfig*))((::PBYTE)hIl2Cpp + CLASS_1_BB4D2B7A94C274FB_SPAWN_OFFSET))(this, a1, a2);
	}
};
