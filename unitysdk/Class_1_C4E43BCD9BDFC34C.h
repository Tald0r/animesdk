#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3B65F9FEB7EA13B1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_186;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_3912C80D994F69F3_OFFSET UNITYSDK_OFFSET(0xB69A1D0)
#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_5B8B16931609579F_OFFSET UNITYSDK_OFFSET(0xB69A160)
#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F51422A44AFF6515_OFFSET UNITYSDK_OFFSET(0xB699BD0)
#define CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB69A1B0)
#define CLASS_1_C4E43BCD9BDFC34C__CTOR_OFFSET UNITYSDK_OFFSET(0xB69A100)

inline static constexpr unsigned int Class_1_C4E43BCD9BDFC34C_TypeDefinitionIndex = 59484;

class Class_1_C4E43BCD9BDFC34C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_186* Method_1_F51422A44AFF6515(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_186*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F51422A44AFF6515_OFFSET))(this, a1);
	}

	::Struct_2_3B65F9FEB7EA13B1 Method_1_5B8B16931609579F(::System::Int32 a1)
	{
		return ((::Struct_2_3B65F9FEB7EA13B1(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_5B8B16931609579F_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>* Method_1_3912C80D994F69F3()
	{
		return ((::System::Collections::Generic::List_1<::Struct_2_3B65F9FEB7EA13B1>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C4E43BCD9BDFC34C_METHOD_1_3912C80D994F69F3_OFFSET))(this);
	}
};
