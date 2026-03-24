#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIAbyssArpeggioTalentItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_BB7F5BC060EB063F_METHOD_2_5D36D891F587C349_OFFSET UNITYSDK_OFFSET(0x8A3CB40)
#define CLASS_2_BB7F5BC060EB063F_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x8A3CD40)
#define CLASS_2_BB7F5BC060EB063F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8A3CE30)
#define CLASS_2_BB7F5BC060EB063F_METHOD_2_EBA1DA59141868AB_OFFSET UNITYSDK_OFFSET(0x8A3C9A0)
#define CLASS_2_BB7F5BC060EB063F__CTOR_OFFSET UNITYSDK_OFFSET(0x8A3CE20)

inline static constexpr unsigned int Class_2_BB7F5BC060EB063F_TypeDefinitionIndex = 80084;

class Class_2_BB7F5BC060EB063F : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>* Field_2_2; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBA1DA59141868AB(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_EBA1DA59141868AB_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>* Method_2_5D36D891F587C349(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIAbyssArpeggioTalentItemWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_5D36D891F587C349_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BB7F5BC060EB063F_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
