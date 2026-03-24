#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIHadalTabRowWidgetController; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_12BBA24BA7419E86_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x83D1BA0)
#define CLASS_2_12BBA24BA7419E86_METHOD_2_BE10339521CE8C61_OFFSET UNITYSDK_OFFSET(0x83D1A20)
#define CLASS_2_12BBA24BA7419E86_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x83D1C70)
#define CLASS_2_12BBA24BA7419E86__CTOR_OFFSET UNITYSDK_OFFSET(0x83D1C60)

inline static constexpr unsigned int Class_2_12BBA24BA7419E86_TypeDefinitionIndex = 66526;

class Class_2_12BBA24BA7419E86 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UIHadalTabRowWidgetController*>* Field_2_1; // 0x18
	::Class_3_647A206587033F4E<::MoleMole::UIHadalTabRowWidgetController*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_BE10339521CE8C61(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86_METHOD_2_BE10339521CE8C61_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_12BBA24BA7419E86_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
