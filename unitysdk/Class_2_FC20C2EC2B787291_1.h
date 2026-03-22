#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class RawImage; }

#define CLASS_2_FC20C2EC2B787291_1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xD771B80)
#define CLASS_2_FC20C2EC2B787291_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xD771DF0)
#define CLASS_2_FC20C2EC2B787291_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD771F70)
#define CLASS_2_FC20C2EC2B787291_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD771F60)

inline static constexpr unsigned int Class_2_FC20C2EC2B787291_1_TypeDefinitionIndex = 44106;

class Class_2_FC20C2EC2B787291_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x20
	::UnityEngine::UI::RawImage* Field_2_4; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::MoleMole::MonoGamepadCustomList* Field_2_8; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x40
	::UnityEngine::Animation* Field_2_3; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x50
	::UnityEngine::GameObject* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC20C2EC2B787291_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FC20C2EC2B787291_1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC20C2EC2B787291_1_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_FC20C2EC2B787291_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
