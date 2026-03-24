#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_159E3EEE75103C26_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0xA762CF0)
#define CLASS_2_159E3EEE75103C26_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0xA762B00)
#define CLASS_2_159E3EEE75103C26_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA762E00)
#define CLASS_2_159E3EEE75103C26__CTOR_OFFSET UNITYSDK_OFFSET(0xA762DF0)

inline static constexpr unsigned int Class_2_159E3EEE75103C26_TypeDefinitionIndex = 55411;

class Class_2_159E3EEE75103C26 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::UnityEngine::GameObject* Field_2_1; // 0x28
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_0; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralPopUpHintWidgetController*>* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_159E3EEE75103C26__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_159E3EEE75103C26_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_159E3EEE75103C26_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_159E3EEE75103C26_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
