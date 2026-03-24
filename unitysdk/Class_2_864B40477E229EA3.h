#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadTabButtonGroup; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_864B40477E229EA3_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x77C7710)
#define CLASS_2_864B40477E229EA3_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x77C74E0)
#define CLASS_2_864B40477E229EA3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x77C7850)
#define CLASS_2_864B40477E229EA3__CTOR_OFFSET UNITYSDK_OFFSET(0x77C7840)

inline static constexpr unsigned int Class_2_864B40477E229EA3_TypeDefinitionIndex = 43287;

class Class_2_864B40477E229EA3 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_4; // 0x18
	::MonoUITableScrollV2* Field_2_0; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x28
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x40
	::MoleMole::MonoGamepadTabButtonGroup* Field_2_8; // 0x48
	::UnityEngine::Transform* Field_2_3; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_864B40477E229EA3_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
