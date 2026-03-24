#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIActivityReturnDoubleRowItemWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_CBC0729A17A0609D_METHOD_2_27DD7B05CB1CF44F_OFFSET UNITYSDK_OFFSET(0x7930390)
#define CLASS_2_CBC0729A17A0609D_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x7930590)
#define CLASS_2_CBC0729A17A0609D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7930630)
#define CLASS_2_CBC0729A17A0609D_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x79301A0)
#define CLASS_2_CBC0729A17A0609D__CTOR_OFFSET UNITYSDK_OFFSET(0x7930620)

inline static constexpr unsigned int Class_2_CBC0729A17A0609D_TypeDefinitionIndex = 77287;

class Class_2_CBC0729A17A0609D : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>* Method_2_27DD7B05CB1CF44F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_3_647A206587033F4E<::MoleMole::UIActivityReturnDoubleRowItemWidgetController*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CBC0729A17A0609D_METHOD_2_27DD7B05CB1CF44F_OFFSET))(this, a1, a2);
	}
};
