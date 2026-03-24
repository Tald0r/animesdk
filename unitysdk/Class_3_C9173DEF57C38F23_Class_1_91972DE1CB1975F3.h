#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C806D582A5D61934;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_C9173DEF57C38F23_CLASS_1_91972DE1CB1975F3__CTOR_OFFSET UNITYSDK_OFFSET(0x6786270)

inline static constexpr unsigned int Class_3_C9173DEF57C38F23_Class_1_91972DE1CB1975F3_TypeDefinitionIndex = 55408;

class Class_3_C9173DEF57C38F23_Class_1_91972DE1CB1975F3 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_2_C806D582A5D61934*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C9173DEF57C38F23_CLASS_1_91972DE1CB1975F3__CTOR_OFFSET))(this);
	}
};
