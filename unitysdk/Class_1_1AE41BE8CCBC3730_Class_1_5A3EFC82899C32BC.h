#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_1AE41BE8CCBC3730_CLASS_1_5A3EFC82899C32BC__CTOR_OFFSET UNITYSDK_OFFSET(0x72E9830)

inline static constexpr unsigned int Class_1_1AE41BE8CCBC3730_Class_1_5A3EFC82899C32BC_TypeDefinitionIndex = 65715;

class Class_1_1AE41BE8CCBC3730_Class_1_5A3EFC82899C32BC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_0; // 0x10

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_1AE41BE8CCBC3730_CLASS_1_5A3EFC82899C32BC__CTOR_OFFSET))(this, a1);
	}
};
