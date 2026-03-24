#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9E7D6F27FE46FBD9_METHOD_2_2DE91FCAEB146CF9_OFFSET UNITYSDK_OFFSET(0x74C7D90)
#define CLASS_2_9E7D6F27FE46FBD9_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x74C7F60)
#define CLASS_2_9E7D6F27FE46FBD9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x74C8050)
#define CLASS_2_9E7D6F27FE46FBD9__CTOR_OFFSET UNITYSDK_OFFSET(0x74C8040)

inline static constexpr unsigned int Class_2_9E7D6F27FE46FBD9_TypeDefinitionIndex = 76675;

class Class_2_9E7D6F27FE46FBD9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E7D6F27FE46FBD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2DE91FCAEB146CF9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E7D6F27FE46FBD9_METHOD_2_2DE91FCAEB146CF9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E7D6F27FE46FBD9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E7D6F27FE46FBD9_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
