#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define CLASS_2_83FFB84D9500CB3F_METHOD_2_069F531B53CCE944_OFFSET UNITYSDK_OFFSET(0x9C60FD0)
#define CLASS_2_83FFB84D9500CB3F_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x9C61230)
#define CLASS_2_83FFB84D9500CB3F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9C613D0)
#define CLASS_2_83FFB84D9500CB3F__CTOR_OFFSET UNITYSDK_OFFSET(0x9C613C0)

inline static constexpr unsigned int Class_2_83FFB84D9500CB3F_TypeDefinitionIndex = 44020;

class Class_2_83FFB84D9500CB3F : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_6; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x30
	::UnityEngine::Animation* Field_2_3; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_069F531B53CCE944(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F_METHOD_2_069F531B53CCE944_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_83FFB84D9500CB3F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
