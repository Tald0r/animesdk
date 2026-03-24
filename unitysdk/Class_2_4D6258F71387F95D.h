#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4D6258F71387F95D_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x9776AD0)
#define CLASS_2_4D6258F71387F95D_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x9776D40)
#define CLASS_2_4D6258F71387F95D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9776EE0)
#define CLASS_2_4D6258F71387F95D__CTOR_OFFSET UNITYSDK_OFFSET(0x9776ED0)

inline static constexpr unsigned int Class_2_4D6258F71387F95D_TypeDefinitionIndex = 66469;

class Class_2_4D6258F71387F95D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_6; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x20
	::UnityEngine::UI::Text* Field_2_8; // 0x28
	::MoleMole::MonoGamepadSelectable* Field_2_7; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6258F71387F95D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4D6258F71387F95D_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6258F71387F95D_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4D6258F71387F95D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
