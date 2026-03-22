#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EBCA2A4357C4C8BF_25.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_54.h"

class Class_0_16E4307DCC419505_13;
class Class_1_7807B2B04302CD7B_45;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_D4180D159F003408_METHOD_2_128774387667156B_OFFSET UNITYSDK_OFFSET(0x1A60A940)
#define CLASS_2_D4180D159F003408_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A60A790)
#define CLASS_2_D4180D159F003408__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60A4C0)

inline static constexpr unsigned int Class_2_D4180D159F003408_TypeDefinitionIndex = 80255;

class Class_2_D4180D159F003408 : public ::Class_1_EBCA2A4357C4C8BF_25
{
public:
	::System::Collections::Generic::List_1<::Class_1_7807B2B04302CD7B_45*>* Field_2_0; // 0x40

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_54 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_54, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_2_D4180D159F003408__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4180D159F003408_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D4180D159F003408_METHOD_2_128774387667156B_OFFSET))(this);
	}
};
