#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class EnvVolumeFogController;
class VideoLightSync;
namespace MoleMole { class MonoCinemaCameraConfig; }
namespace MoleMole { class MonoCinemaCameraLightConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_60638234271CCDB8_38_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8D9DA50)
#define CLASS_2_60638234271CCDB8_38_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x8D9D710)
#define CLASS_2_60638234271CCDB8_38__CTOR_OFFSET UNITYSDK_OFFSET(0x8D9DA40)

inline static constexpr unsigned int Class_2_60638234271CCDB8_38_TypeDefinitionIndex = 76714;

class Class_2_60638234271CCDB8_38 : public ::Class_1_EEA0111A28582B57
{
public:
	::VideoLightSync* Field_2_19; // 0x18
	::UnityEngine::Transform* Field_2_14; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::MoleMole::MonoCinemaCameraConfig* Field_2_18; // 0x30
	::UnityEngine::GameObject* Field_2_21; // 0x38
	::MoleMole::MonoCinemaCameraConfig* Field_2_17; // 0x40
	::UnityEngine::Transform* Field_2_16; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50
	::UnityEngine::Transform* Field_2_20; // 0x58
	::UnityEngine::Camera* Field_2_6; // 0x60
	::UnityEngine::Transform* Field_2_23; // 0x68
	::UnityEngine::Transform* Field_2_0; // 0x70
	::EnvVolumeFogController* Field_2_22; // 0x78
	::UnityEngine::Camera* Field_2_7; // 0x80
	::UnityEngine::Transform* Field_2_15; // 0x88
	::UnityEngine::Transform* Field_2_3; // 0x90
	::UnityEngine::Camera* Field_2_4; // 0x98
	::MoleMole::MonoCinemaCameraConfig* Field_2_5; // 0xA0
	::MoleMole::MonoCinemaCameraLightConfig* Field_2_13; // 0xA8
	::UnityEngine::Transform* Field_2_8; // 0xB0
	::UnityEngine::Transform* Field_2_24; // 0xB8
	::UnityEngine::Animator* Field_2_12; // 0xC0
	::UnityEngine::GameObject* Field_2_10; // 0xC8
	::UnityEngine::GameObject* Field_2_11; // 0xD0
	::UnityEngine::Transform* Field_2_9; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_38__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_38_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_60638234271CCDB8_38_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
