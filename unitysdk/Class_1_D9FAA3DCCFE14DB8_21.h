#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_3E75877A2888D88A_387.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET UNITYSDK_OFFSET(0x11A05940)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_5BF0E61BD5CA40A5_OFFSET UNITYSDK_OFFSET(0x11A05460)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x11A05840)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_CCC44210DEA28483_OFFSET UNITYSDK_OFFSET(0x11A05570)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11A05850)
#define CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x11A05450)
#define CLASS_1_D9FAA3DCCFE14DB8_21__CTOR_OFFSET UNITYSDK_OFFSET(0x11A05440)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_21_TypeDefinitionIndex = 10737;

class Class_1_D9FAA3DCCFE14DB8_21 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::System::String* Field_1_6; // 0x18
	::Struct_2_3E75877A2888D88A_387 Field_1_0; // 0x20
	::System::String* Field_1_5; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_7; // 0x38
	::System::Boolean Field_1_2; // 0x40
	::System::Byte Field_1_4; // 0x41
	::System::Byte Field_1_3; // 0x42

	::System::Void _ctor(::Struct_2_3E75877A2888D88A_387 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_3E75877A2888D88A_387, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_5BF0E61BD5CA40A5_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_CCC44210DEA28483()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_CCC44210DEA28483_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::String* Method_1_5BF0E61BD5CA40A5_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_21_METHOD_1_5BF0E61BD5CA40A5_1_OFFSET))(this);
	}
};
