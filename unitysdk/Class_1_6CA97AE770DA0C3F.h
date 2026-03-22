#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_178;
class Class_1_416282EBAAF3DF5F;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_6CA97AE770DA0C3F_METHOD_1_74EEC1967E5092D8_OFFSET UNITYSDK_OFFSET(0xB830CE0)
#define CLASS_1_6CA97AE770DA0C3F_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0xB830E60)
#define CLASS_1_6CA97AE770DA0C3F__CTOR_OFFSET UNITYSDK_OFFSET(0xB830CD0)

inline static constexpr unsigned int Class_1_6CA97AE770DA0C3F_TypeDefinitionIndex = 79053;

class Class_1_6CA97AE770DA0C3F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_416282EBAAF3DF5F*>* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CA97AE770DA0C3F__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_178* Method_1_74EEC1967E5092D8(::System::Int32 a1)
	{
		return ((::Class_0_16E4307DCC419505_178*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6CA97AE770DA0C3F_METHOD_1_74EEC1967E5092D8_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CA97AE770DA0C3F_METHOD_1_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
