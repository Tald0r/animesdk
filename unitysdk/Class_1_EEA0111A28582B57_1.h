#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_550;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_EEA0111A28582B57_1_METHOD_1_C8903A36ECBA4078_1_OFFSET UNITYSDK_OFFSET(0xA00BA90)
#define CLASS_1_EEA0111A28582B57_1_METHOD_1_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA00BA10)
#define CLASS_1_EEA0111A28582B57_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA00BA80)

inline static constexpr unsigned int Class_1_EEA0111A28582B57_1_TypeDefinitionIndex = 67677;

class Class_1_EEA0111A28582B57_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_550*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EEA0111A28582B57_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_1_EEA0111A28582B57_1_METHOD_1_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C8903A36ECBA4078_1(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_1_EEA0111A28582B57_1_METHOD_1_C8903A36ECBA4078_1_OFFSET))(this, a1, a2);
	}
};
