#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_74BE238239689640_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x6A40060)
#define CLASS_2_74BE238239689640_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x6A3FE20)
#define CLASS_2_74BE238239689640_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6A401A0)
#define CLASS_2_74BE238239689640__CTOR_OFFSET UNITYSDK_OFFSET(0x6A40190)

inline static constexpr unsigned int Class_2_74BE238239689640_TypeDefinitionIndex = 38173;

class Class_2_74BE238239689640 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x28
	::MonoUITableScrollV2* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::UnityEngine::UI::Text* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x48
	::UnityEngine::Transform* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BE238239689640__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_74BE238239689640_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_74BE238239689640_METHOD_2_572E53F76E315839_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_74BE238239689640_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
