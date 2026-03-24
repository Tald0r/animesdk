#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5887222B9AE38D34_2.h"
#include "unitysdk/System/Object.h"

class Class_2_6CAC28ACDD58FF63_Class_1_119CE23D89A4C9A3_1;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_7B2CE61F29898481_METHOD_1_42904C54BB567885_OFFSET UNITYSDK_OFFSET(0x9B57890)
#define CLASS_2_6CAC28ACDD58FF63_CLASS_1_7B2CE61F29898481__CTOR_OFFSET UNITYSDK_OFFSET(0x9B57880)

inline static constexpr unsigned int Class_2_6CAC28ACDD58FF63_Class_1_7B2CE61F29898481_TypeDefinitionIndex = 49766;

class Class_2_6CAC28ACDD58FF63_Class_1_7B2CE61F29898481 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_0; // 0x10
	::Class_2_6CAC28ACDD58FF63_Class_1_119CE23D89A4C9A3_1* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_7B2CE61F29898481__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_42904C54BB567885(::Struct_2_5887222B9AE38D34_2 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_5887222B9AE38D34_2))((::PBYTE)hIl2Cpp + CLASS_2_6CAC28ACDD58FF63_CLASS_1_7B2CE61F29898481_METHOD_1_42904C54BB567885_OFFSET))(this, a1);
	}
};
