#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE732C8816791DCD__CTOR_OFFSET UNITYSDK_OFFSET(0x9B24830)

inline static constexpr unsigned int Class_1_FE732C8816791DCD_TypeDefinitionIndex = 56552;

class Class_1_FE732C8816791DCD : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_1_0; // 0x10
	::System::Boolean Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FE732C8816791DCD__CTOR_OFFSET))(this);
	}
};
