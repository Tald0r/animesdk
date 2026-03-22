#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ParticleSystemShapeType.h"

namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Renderer; }

#define CLASS_3_A5AF8EA2F7094EFB_CLASS_1_6D78250EABD443CF__CTOR_OFFSET UNITYSDK_OFFSET(0xB431D60)

inline static constexpr unsigned int Class_3_A5AF8EA2F7094EFB_Class_1_6D78250EABD443CF_TypeDefinitionIndex = 64291;

class Class_3_A5AF8EA2F7094EFB_Class_1_6D78250EABD443CF : public ::System::Object
{
public:
	::UnityEngine::Renderer* Field_1_3; // 0x10
	::UnityEngine::ParticleSystem* Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x20
	::UnityEngine::ParticleSystemShapeType Field_1_1; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_4; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A5AF8EA2F7094EFB_CLASS_1_6D78250EABD443CF__CTOR_OFFSET))(this);
	}
};
