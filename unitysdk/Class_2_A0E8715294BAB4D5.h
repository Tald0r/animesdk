#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIBPItemIconRowWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_A0E8715294BAB4D5_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x80D1840)
#define CLASS_2_A0E8715294BAB4D5_METHOD_2_A52A279C28A2006E_OFFSET UNITYSDK_OFFSET(0x80D1620)
#define CLASS_2_A0E8715294BAB4D5_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x80D1980)
#define CLASS_2_A0E8715294BAB4D5__CTOR_OFFSET UNITYSDK_OFFSET(0x80D1970)

inline static constexpr unsigned int Class_2_A0E8715294BAB4D5_TypeDefinitionIndex = 69087;

class Class_2_A0E8715294BAB4D5 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIBPItemIconRowWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x28
	::UnityEngine::UI::Text* Field_2_1; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIItemIconBtnWidgetController*>* Field_2_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A52A279C28A2006E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5_METHOD_2_A52A279C28A2006E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A0E8715294BAB4D5_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
