#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIntimacyChangeWidgetController; }
namespace UnityEngine { class GameObject; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_222675B5E8E17837_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x66A6450)
#define CLASS_2_222675B5E8E17837_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0x66A6670)
#define CLASS_2_222675B5E8E17837_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x66A67F0)
#define CLASS_2_222675B5E8E17837__CTOR_OFFSET UNITYSDK_OFFSET(0x66A67E0)

inline static constexpr unsigned int Class_2_222675B5E8E17837_TypeDefinitionIndex = 79666;

class Class_2_222675B5E8E17837 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_3; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_1; // 0x28
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_2; // 0x30
	::UIControllerExtensionData* Field_2_0; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_5; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralIntimacyChangeWidgetController*>* Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_222675B5E8E17837_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}
};
