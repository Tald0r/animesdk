#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadNestedListDelegate; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralFilterGroupRowWidgetController; }
namespace MoleMole { class UIRecommendGroupRowWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
template <typename T> class Class_3_A2BF74BADF6F7D16;

#define CLASS_2_0054266176F20490_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6F9B100)
#define CLASS_2_0054266176F20490_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x6F9AF70)
#define CLASS_2_0054266176F20490_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x6F9AC60)
#define CLASS_2_0054266176F20490__CTOR_OFFSET UNITYSDK_OFFSET(0x6F9B0F0)

inline static constexpr unsigned int Class_2_0054266176F20490_TypeDefinitionIndex = 65430;

class Class_2_0054266176F20490 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_9; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_1; // 0x30
	::MoleMole::MonoGamepadNestedListDelegate* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x40
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIGeneralFilterGroupRowWidgetController*>* Field_2_10; // 0x48
	::UnityEngine::Transform* Field_2_11; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x58
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIRecommendGroupRowWidgetController*>* Field_2_6; // 0x60
	::MoleMole::MonoInputKey* Field_2_8; // 0x68
	::Class_3_A2BF74BADF6F7D16<::MoleMole::UIRecommendGroupRowWidgetController*>* Field_2_5; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0054266176F20490_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
