#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_8E39E9B100A7634F_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xBDA7CE0)
#define CLASS_2_8E39E9B100A7634F_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xBDA7A70)
#define CLASS_2_8E39E9B100A7634F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBDA7E50)
#define CLASS_2_8E39E9B100A7634F__CTOR_OFFSET UNITYSDK_OFFSET(0xBDA7E40)

inline static constexpr unsigned int Class_2_8E39E9B100A7634F_TypeDefinitionIndex = 40943;

class Class_2_8E39E9B100A7634F : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x18
	::UnityEngine::UI::Text* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_6; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x50
	::UnityEngine::GameObject* Field_2_3; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E39E9B100A7634F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E39E9B100A7634F_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8E39E9B100A7634F_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8E39E9B100A7634F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
