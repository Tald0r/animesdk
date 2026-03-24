#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_12.h"
#include "unitysdk/Enum_3_49CABF680652EE11.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
class Class_3_C3F0E3B5AB5977AE_38;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_1_2BA8CE33B4CFFE77_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6646500)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_2140E4DCD4D654C5_OFFSET UNITYSDK_OFFSET(0x6647820)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_4235209B4AE24C66_OFFSET UNITYSDK_OFFSET(0x6646F00)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_4D9CA535A2BBD790_OFFSET UNITYSDK_OFFSET(0x66467B0)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0x66479F0)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_676314BE1F45AAC3_OFFSET UNITYSDK_OFFSET(0x6610BC0)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_9A3D3B20AC64C599_OFFSET UNITYSDK_OFFSET(0x66476F0)
#define CLASS_1_2BA8CE33B4CFFE77_METHOD_1_9D1FB11C5C24E13D_OFFSET UNITYSDK_OFFSET(0x6646DA0)
#define CLASS_1_2BA8CE33B4CFFE77__CTOR_OFFSET UNITYSDK_OFFSET(0x66467A0)

inline static constexpr unsigned int Class_1_2BA8CE33B4CFFE77_TypeDefinitionIndex = 52979;

class Class_1_2BA8CE33B4CFFE77 : public ::System::Object
{
public:
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_8; // 0x10
	::Class_2_000597E145D7A42A<::Enum_3_49CABF680652EE11>* Field_1_10; // 0x18
	::Class_3_C3F0E3B5AB5977AE_38* Field_1_5; // 0x20
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_6; // 0x28
	::Class_2_000597E145D7A42A<::Enum_3_4608E37A1B3D374A_12>* Field_1_7; // 0x30
	::Class_2_000597E145D7A42A<::System::Boolean>* Field_1_9; // 0x38
	::System::Int32 Field_1_1; // 0x40
	::System::Int32 Field_1_3; // 0x44
	::System::Int32 Field_1_0; // 0x48
	::System::Int32 Field_1_4; // 0x4C
	::System::Int32 Field_1_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_4D9CA535A2BBD790()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_4D9CA535A2BBD790_OFFSET))(this);
	}

	::System::Boolean Method_1_676314BE1F45AAC3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_676314BE1F45AAC3_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_4235209B4AE24C66()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_4235209B4AE24C66_OFFSET))(this);
	}

	::System::String* Method_1_9A3D3B20AC64C599()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_9A3D3B20AC64C599_OFFSET))(this);
	}

	::Struct_2_76CCAEE20B3AE57C Method_1_2140E4DCD4D654C5()
	{
		return ((::Struct_2_76CCAEE20B3AE57C(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_2140E4DCD4D654C5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_1_5055E1A5000CF422()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_5055E1A5000CF422_OFFSET))(this);
	}

	::System::Int32 Method_1_9D1FB11C5C24E13D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2BA8CE33B4CFFE77_METHOD_1_9D1FB11C5C24E13D_OFFSET))(this);
	}
};
