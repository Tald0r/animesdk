#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_032E3093F309FC91.h"
#include "unitysdk/System/Object.h"

class Class_1_1685EC66FBD28897;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_2B6D4F00131B4879_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBDACAA0)
#define CLASS_1_2B6D4F00131B4879_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xBDAC900)
#define CLASS_1_2B6D4F00131B4879_EQUALS_OFFSET UNITYSDK_OFFSET(0xBDAC830)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_5055E1A5000CF422_OFFSET UNITYSDK_OFFSET(0xBDACC80)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_676314BE1F45AAC3_OFFSET UNITYSDK_OFFSET(0xBDAD0A0)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_9D1FB11C5C24E13D_OFFSET UNITYSDK_OFFSET(0xBDACB10)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_DC142A2AF2A69784_OFFSET UNITYSDK_OFFSET(0xBDACC70)
#define CLASS_1_2B6D4F00131B4879_METHOD_1_EF879F29CD083C1B_OFFSET UNITYSDK_OFFSET(0xBDAD310)
#define CLASS_1_2B6D4F00131B4879__CTOR_OFFSET UNITYSDK_OFFSET(0xBDACB00)

inline static constexpr unsigned int Class_1_2B6D4F00131B4879_TypeDefinitionIndex = 44891;

class Class_1_2B6D4F00131B4879 : public ::System::Object
{
public:
	::System::String* Field_1_3; // 0x10
	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Field_1_5; // 0x18
	::System::Int32 Field_1_0; // 0x20
	::System::Int32 Field_1_2; // 0x24
	::System::Int32 Field_1_4; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879__CTOR_OFFSET))(this);
	}

	::System::Boolean Equals(::Class_1_2B6D4F00131B4879* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2B6D4F00131B4879*))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_EQUALS_OFFSET))(this, a1);
	}

	::System::Boolean Equals_1(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_EQUALS_1_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_DISPOSE_OFFSET))(this);
	}

	::System::Int32 Method_1_9D1FB11C5C24E13D()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_9D1FB11C5C24E13D_OFFSET))(this);
	}

	::System::Boolean Method_1_DC142A2AF2A69784(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_DC142A2AF2A69784_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* Method_1_5055E1A5000CF422()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_5055E1A5000CF422_OFFSET))(this);
	}

	::System::Boolean Method_1_676314BE1F45AAC3()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_676314BE1F45AAC3_OFFSET))(this);
	}

	::Struct_2_032E3093F309FC91 Method_1_EF879F29CD083C1B()
	{
		return ((::Struct_2_032E3093F309FC91(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2B6D4F00131B4879_METHOD_1_EF879F29CD083C1B_OFFSET))(this);
	}
};
