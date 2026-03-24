#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_01FD82FDF13C7F48.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7154D0BBCC10777B_METHOD_1_5EBCF276C230582C_OFFSET UNITYSDK_OFFSET(0x73CC060)
#define CLASS_1_7154D0BBCC10777B_METHOD_1_C784934903D1CFFC_OFFSET UNITYSDK_OFFSET(0x73CC110)
#define CLASS_1_7154D0BBCC10777B__CTOR_OFFSET UNITYSDK_OFFSET(0x73CC040)

inline static constexpr unsigned int Class_1_7154D0BBCC10777B_TypeDefinitionIndex = 43934;

class Class_1_7154D0BBCC10777B : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x10
	::Enum_3_01FD82FDF13C7F48 Field_1_0; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_1; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7154D0BBCC10777B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5EBCF276C230582C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7154D0BBCC10777B_METHOD_1_5EBCF276C230582C_OFFSET))(this);
	}

	::System::Void Method_1_C784934903D1CFFC(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7154D0BBCC10777B_METHOD_1_C784934903D1CFFC_OFFSET))(this, a1);
	}
};
