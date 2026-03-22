#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class Class_2_CA67A9CEB871FFD3;
class UIControllerExtensionData;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9D39C7F7EBDC452E_METHOD_2_8D764EEFCE1E3A5F_OFFSET UNITYSDK_OFFSET(0x6990A60)
#define CLASS_2_9D39C7F7EBDC452E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x6990CD0)
#define CLASS_2_9D39C7F7EBDC452E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6990DC0)
#define CLASS_2_9D39C7F7EBDC452E__CTOR_OFFSET UNITYSDK_OFFSET(0x6990DB0)

inline static constexpr unsigned int Class_2_9D39C7F7EBDC452E_TypeDefinitionIndex = 63932;

class Class_2_9D39C7F7EBDC452E : public ::Class_1_EEA0111A28582B57
{
public:
	::UIControllerExtensionData* Field_2_8; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_6; // 0x30
	::Class_2_CA67A9CEB871FFD3* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x48
	::MoleMole::MonoGamepadSelectable* Field_2_2; // 0x50
	::UnityEngine::GameObject* Field_2_5; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D39C7F7EBDC452E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8D764EEFCE1E3A5F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9D39C7F7EBDC452E_METHOD_2_8D764EEFCE1E3A5F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9D39C7F7EBDC452E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9D39C7F7EBDC452E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
