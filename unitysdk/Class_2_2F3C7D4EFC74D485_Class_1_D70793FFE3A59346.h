#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_2F3C7D4EFC74D485;
class Class_3_48C7D152812F0173;
class Class_3_5B0D01C92C1E671E_5;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_B81AB3851AD916CA;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346_METHOD_1_E2FF15FEB8A840D7_OFFSET UNITYSDK_OFFSET(0x8881940)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346__CTOR_OFFSET UNITYSDK_OFFSET(0x8881930)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_D70793FFE3A59346_TypeDefinitionIndex = 46010;

class Class_2_2F3C7D4EFC74D485_Class_1_D70793FFE3A59346 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_B81AB3851AD916CA<::Class_3_48C7D152812F0173*>*>* Field_1_2; // 0x10
	::System::Collections::Generic::List_1<::Class_3_5B0D01C92C1E671E_5*>* Field_1_0; // 0x18
	::Class_2_2F3C7D4EFC74D485* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E2FF15FEB8A840D7(::Class_1_B81AB3851AD916CA<::Class_3_48C7D152812F0173*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B81AB3851AD916CA<::Class_3_48C7D152812F0173*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_D70793FFE3A59346_METHOD_1_E2FF15FEB8A840D7_OFFSET))(this, a1);
	}
};
