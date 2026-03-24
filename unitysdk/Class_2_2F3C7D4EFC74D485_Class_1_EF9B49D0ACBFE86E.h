#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_3_4666E61F66433B1E_1;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_1_4109B64C3CE1B638;

#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_EF9B49D0ACBFE86E_METHOD_1_C74D29F4DDC54DF3_OFFSET UNITYSDK_OFFSET(0x10D34A00)
#define CLASS_2_2F3C7D4EFC74D485_CLASS_1_EF9B49D0ACBFE86E__CTOR_OFFSET UNITYSDK_OFFSET(0x10D300B0)

inline static constexpr unsigned int Class_2_2F3C7D4EFC74D485_Class_1_EF9B49D0ACBFE86E_TypeDefinitionIndex = 52269;

class Class_2_2F3C7D4EFC74D485_Class_1_EF9B49D0ACBFE86E : public ::System::Object
{
public:
	::Class_2_2F3C7D4EFC74D485* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_EF9B49D0ACBFE86E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74D29F4DDC54DF3(::Class_1_4109B64C3CE1B638<::Class_3_4666E61F66433B1E_1*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4109B64C3CE1B638<::Class_3_4666E61F66433B1E_1*>*))((::PBYTE)hIl2Cpp + CLASS_2_2F3C7D4EFC74D485_CLASS_1_EF9B49D0ACBFE86E_METHOD_1_C74D29F4DDC54DF3_OFFSET))(this, a1);
	}
};
