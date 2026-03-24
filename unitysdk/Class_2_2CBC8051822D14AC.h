#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIQuestionsAnswerScreenDetailWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenSettleWidgetController; }
namespace MoleMole { class UIQuestionsAnswerScreenStandbyWidgetController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_2CBC8051822D14AC_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x8AB2A30)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_6FDA0C1696A00F81_OFFSET UNITYSDK_OFFSET(0x8AB2840)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8AB2C90)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_E171F3958EB08A5E_OFFSET UNITYSDK_OFFSET(0x8AB2B60)
#define CLASS_2_2CBC8051822D14AC_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x8AB2C20)
#define CLASS_2_2CBC8051822D14AC__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB2C10)

inline static constexpr unsigned int Class_2_2CBC8051822D14AC_TypeDefinitionIndex = 78047;

class Class_2_2CBC8051822D14AC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIQuestionsAnswerScreenSettleWidgetController*>* Field_2_2; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIQuestionsAnswerScreenDetailWidgetController*>* Field_2_1; // 0x20
	::Class_3_647A206587033F4E<::MoleMole::UIQuestionsAnswerScreenStandbyWidgetController*>* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_6FDA0C1696A00F81(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_6FDA0C1696A00F81_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E171F3958EB08A5E(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_E171F3958EB08A5E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CBC8051822D14AC_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
