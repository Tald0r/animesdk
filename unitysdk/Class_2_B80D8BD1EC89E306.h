#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
class MiniUIGameCurvesRenderer;
namespace MoleMole { class MonoUICurveConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B80D8BD1EC89E306_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xAEE9230)
#define CLASS_2_B80D8BD1EC89E306_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xAEE8F70)
#define CLASS_2_B80D8BD1EC89E306_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAEE92E0)
#define CLASS_2_B80D8BD1EC89E306__CTOR_OFFSET UNITYSDK_OFFSET(0xAEE92D0)

inline static constexpr unsigned int Class_2_B80D8BD1EC89E306_TypeDefinitionIndex = 44827;

class Class_2_B80D8BD1EC89E306 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_7; // 0x18
	::MoleMole::MonoUICurveConfig* Field_2_10; // 0x20
	::UnityEngine::GameObject* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::Transform* Field_2_9; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_13; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::MiniUIGameCurvesRenderer* Field_2_12; // 0x50
	::MiniUIGameCurvesRenderer* Field_2_11; // 0x58
	::Class_2_9E3E3CDA608A4F58* Field_2_8; // 0x60
	::UnityEngine::GameObject* Field_2_5; // 0x68
	::UnityEngine::GameObject* Field_2_4; // 0x70
	::UnityEngine::GameObject* Field_2_1; // 0x78
	::UnityEngine::GameObject* Field_2_3; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D8BD1EC89E306__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B80D8BD1EC89E306_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B80D8BD1EC89E306_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B80D8BD1EC89E306_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
