#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_F2992F30E077DB5F_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0xF42B730)
#define CLASS_2_F2992F30E077DB5F_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0xF42B940)
#define CLASS_2_F2992F30E077DB5F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xF42BA30)
#define CLASS_2_F2992F30E077DB5F__CTOR_OFFSET UNITYSDK_OFFSET(0xF42BA20)

inline static constexpr unsigned int Class_2_F2992F30E077DB5F_TypeDefinitionIndex = 49849;

class Class_2_F2992F30E077DB5F : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::MonoGamepadCustomList* Field_2_4; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_1; // 0x40
	::MoleMole::MonoInputKey* Field_2_6; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2992F30E077DB5F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2992F30E077DB5F_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F2992F30E077DB5F_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F2992F30E077DB5F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
