#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_62CB6D0A783AD050_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0xB546550)
#define CLASS_2_62CB6D0A783AD050_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xB546770)
#define CLASS_2_62CB6D0A783AD050_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB5468B0)
#define CLASS_2_62CB6D0A783AD050__CTOR_OFFSET UNITYSDK_OFFSET(0xB5468A0)

inline static constexpr unsigned int Class_2_62CB6D0A783AD050_TypeDefinitionIndex = 65811;

class Class_2_62CB6D0A783AD050 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_0; // 0x20
	::MoleMole::UIGeneralButtonController* Field_2_5; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x38
	::MoleMole::MonoGamepadSelectable* Field_2_1; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62CB6D0A783AD050__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_62CB6D0A783AD050_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_62CB6D0A783AD050_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_62CB6D0A783AD050_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
