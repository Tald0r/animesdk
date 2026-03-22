#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_BCE2B75EE25AA24E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xB53B670)
#define CLASS_2_BCE2B75EE25AA24E_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0xB53B430)
#define CLASS_2_BCE2B75EE25AA24E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB53B760)
#define CLASS_2_BCE2B75EE25AA24E__CTOR_OFFSET UNITYSDK_OFFSET(0xB53B750)

inline static constexpr unsigned int Class_2_BCE2B75EE25AA24E_TypeDefinitionIndex = 53996;

class Class_2_BCE2B75EE25AA24E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::UnityEngine::UI::Text* Field_2_4; // 0x20
	::UnityEngine::GameObject* Field_2_5; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x30
	::UnityEngine::GameObject* Field_2_0; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x40
	::UnityEngine::GameObject* Field_2_3; // 0x48
	::MoleMole::MonoGamepadSelectable* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BCE2B75EE25AA24E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
