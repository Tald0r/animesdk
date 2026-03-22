#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_349;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B2C060183F4E5398_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x776FA80)
#define CLASS_1_B2C060183F4E5398_METHOD_1_EC9A22F85FDD4F5B_OFFSET UNITYSDK_OFFSET(0x776FA00)
#define CLASS_1_B2C060183F4E5398_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x776FB30)
#define CLASS_1_B2C060183F4E5398_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x776FB20)
#define CLASS_1_B2C060183F4E5398__CTOR_OFFSET UNITYSDK_OFFSET(0x776F9D0)

inline static constexpr unsigned int Class_1_B2C060183F4E5398_TypeDefinitionIndex = 56755;

class Class_1_B2C060183F4E5398 : public ::System::Object
{
public:
	::Class_1_5DA2E7556103D5A3_349* Field_1_5; // 0x10
	::System::Int32 Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x1C
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_4; // 0x22

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B2C060183F4E5398__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_EC9A22F85FDD4F5B()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C060183F4E5398_METHOD_1_EC9A22F85FDD4F5B_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C060183F4E5398_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C060183F4E5398_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}

	::Class_1_5DA2E7556103D5A3_349* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_5DA2E7556103D5A3_349*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2C060183F4E5398_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
