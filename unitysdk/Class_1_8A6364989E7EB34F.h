#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EE83CF4B1A709F0.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8A6364989E7EB34F__CTOR_OFFSET UNITYSDK_OFFSET(0xADE8DF0)

inline static constexpr unsigned int Class_1_8A6364989E7EB34F_TypeDefinitionIndex = 53349;

class Class_1_8A6364989E7EB34F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_1; // 0x10
	::Enum_3_3EE83CF4B1A709F0 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A6364989E7EB34F__CTOR_OFFSET))(this);
	}
};
