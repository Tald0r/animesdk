#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_481365F4B6FDAB37.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8A6364989E7EB34F_1__CTOR_OFFSET UNITYSDK_OFFSET(0x86D6670)

inline static constexpr unsigned int Class_1_8A6364989E7EB34F_1_TypeDefinitionIndex = 45109;

class Class_1_8A6364989E7EB34F_1 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::Enum_3_481365F4B6FDAB37 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A6364989E7EB34F_1__CTOR_OFFSET))(this);
	}
};
