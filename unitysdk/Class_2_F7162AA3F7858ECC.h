#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class CircleCollider2D; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F7162AA3F7858ECC_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0x704DCB0)
#define CLASS_2_F7162AA3F7858ECC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x704DE20)
#define CLASS_2_F7162AA3F7858ECC__CTOR_OFFSET UNITYSDK_OFFSET(0x704DE10)

inline static constexpr unsigned int Class_2_F7162AA3F7858ECC_TypeDefinitionIndex = 47217;

class Class_2_F7162AA3F7858ECC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_4; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::CircleCollider2D* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F7162AA3F7858ECC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F7162AA3F7858ECC_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F7162AA3F7858ECC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
