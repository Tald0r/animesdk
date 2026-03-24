#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_292;
class Class_1_416282EBAAF3DF5F;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6346845EF620DF22_METHOD_1_38E38E820BB9BED7_OFFSET UNITYSDK_OFFSET(0x6FDB020)
#define CLASS_1_6346845EF620DF22_METHOD_1_74EEC1967E5092D8_OFFSET UNITYSDK_OFFSET(0x6FDAEA0)
#define CLASS_1_6346845EF620DF22_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x6FDB1C0)
#define CLASS_1_6346845EF620DF22__CTOR_OFFSET UNITYSDK_OFFSET(0x6FDAE90)

inline static constexpr unsigned int Class_1_6346845EF620DF22_TypeDefinitionIndex = 50790;

class Class_1_6346845EF620DF22 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_416282EBAAF3DF5F*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6346845EF620DF22__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_292* Method_1_74EEC1967E5092D8(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_292*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6346845EF620DF22_METHOD_1_74EEC1967E5092D8_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_292* Method_1_38E38E820BB9BED7(::System::String* a1)
	{
		return ((::Class_0_16E4307DCC419505_292*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6346845EF620DF22_METHOD_1_38E38E820BB9BED7_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6346845EF620DF22_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
