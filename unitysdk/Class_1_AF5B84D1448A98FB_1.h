#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_191.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }

#define CLASS_1_AF5B84D1448A98FB_1_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x1318A020)
#define CLASS_1_AF5B84D1448A98FB_1_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x1318A170)
#define CLASS_1_AF5B84D1448A98FB_1_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x1318A280)
#define CLASS_1_AF5B84D1448A98FB_1_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x13189F30)
#define CLASS_1_AF5B84D1448A98FB_1_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x13189F20)
#define CLASS_1_AF5B84D1448A98FB_1_METHOD_1_F7AB163354E6802C_OFFSET UNITYSDK_OFFSET(0x1318A290)
#define CLASS_1_AF5B84D1448A98FB_1__CTOR_OFFSET UNITYSDK_OFFSET(0x13189F10)

inline static constexpr unsigned int Class_1_AF5B84D1448A98FB_1_TypeDefinitionIndex = 11676;

class Class_1_AF5B84D1448A98FB_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::System::String* Field_1_6; // 0x18
	::Struct_2_58DF5669875F2C66_191 Field_1_0; // 0x20
	::System::Boolean Field_1_2; // 0x30
	::System::Byte Field_1_4; // 0x31
	::System::Byte Field_1_3; // 0x32
	::System::Single Field_1_7; // 0x34
	::System::Int32 Field_1_5; // 0x38

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_191 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_191, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Single Method_1_F7AB163354E6802C()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AF5B84D1448A98FB_1_METHOD_1_F7AB163354E6802C_OFFSET))(this);
	}
};
