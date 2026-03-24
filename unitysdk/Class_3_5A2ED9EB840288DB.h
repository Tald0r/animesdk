#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_655F67ED7533BF5B.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"

class Class_0_16E4307DCC419505_163;
class Class_1_B920C49EB192B015;
class Class_1_E04739D1A87B45E5;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_5A2ED9EB840288DB_METHOD_3_32460A23F1A1DEF1_OFFSET UNITYSDK_OFFSET(0x8FBC620)
#define CLASS_3_5A2ED9EB840288DB_METHOD_3_3B2051C60621D523_OFFSET UNITYSDK_OFFSET(0x8FBBFF0)
#define CLASS_3_5A2ED9EB840288DB_METHOD_3_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0x8FBBCB0)
#define CLASS_3_5A2ED9EB840288DB_METHOD_3_E1513374C600EBEC_OFFSET UNITYSDK_OFFSET(0x8FBBD80)
#define CLASS_3_5A2ED9EB840288DB__CTOR_OFFSET UNITYSDK_OFFSET(0x8FBBBD0)

inline static constexpr unsigned int Class_3_5A2ED9EB840288DB_TypeDefinitionIndex = 38278;

class Class_3_5A2ED9EB840288DB : public ::Class_2_655F67ED7533BF5B<::Class_3_5A2ED9EB840288DB*>
{
public:
	// static const ::System::Int32 Field_3_1 = 0x12C; // 0x0
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_163*>* Field_3_0; // 0x10
	::System::Int32 Field_3_2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A2ED9EB840288DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_6BCEDD4814D8A8D9(::Struct_2_0B8A00E6770FCC03& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_0B8A00E6770FCC03&))((::PBYTE)hIl2Cpp + CLASS_3_5A2ED9EB840288DB_METHOD_3_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_E1513374C600EBEC(::Class_1_B920C49EB192B015* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B920C49EB192B015*))((::PBYTE)hIl2Cpp + CLASS_3_5A2ED9EB840288DB_METHOD_3_E1513374C600EBEC_OFFSET))(this, a1);
	}

	::System::Void Method_3_3B2051C60621D523()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5A2ED9EB840288DB_METHOD_3_3B2051C60621D523_OFFSET))(this);
	}

	::System::Boolean Method_3_32460A23F1A1DEF1(::Class_1_E04739D1A87B45E5* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_E04739D1A87B45E5*))((::PBYTE)hIl2Cpp + CLASS_3_5A2ED9EB840288DB_METHOD_3_32460A23F1A1DEF1_OFFSET))(this, a1);
	}
};
