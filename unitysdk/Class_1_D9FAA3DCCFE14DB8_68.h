#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_58DF5669875F2C66_225.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_13;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_0AF57C9DBD7ECFC0_OFFSET UNITYSDK_OFFSET(0x123C39A0)
#define CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_51652EAB9A014635_OFFSET UNITYSDK_OFFSET(0x123C3BE0)
#define CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x123C3990)
#define CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x123C38A0)
#define CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x123C3890)
#define CLASS_1_D9FAA3DCCFE14DB8_68__CTOR_OFFSET UNITYSDK_OFFSET(0x123C3880)

inline static constexpr unsigned int Class_1_D9FAA3DCCFE14DB8_68_TypeDefinitionIndex = 12433;

class Class_1_D9FAA3DCCFE14DB8_68 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_13* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* Field_1_6; // 0x18
	::Struct_2_58DF5669875F2C66_225 Field_1_0; // 0x20
	::System::Byte Field_1_4; // 0x30
	::System::Boolean Field_1_2; // 0x31
	::System::Byte Field_1_3; // 0x32
	::System::Int32 Field_1_5; // 0x34

	::System::Void _ctor(::Struct_2_58DF5669875F2C66_225 a1, ::Class_0_16E4307DCC419505_13* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_58DF5669875F2C66_225, ::Class_0_16E4307DCC419505_13*))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_1_0AF57C9DBD7ECFC0()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_0AF57C9DBD7ECFC0_OFFSET))(this);
	}

	::System::Int32 Method_1_51652EAB9A014635()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D9FAA3DCCFE14DB8_68_METHOD_1_51652EAB9A014635_OFFSET))(this);
	}
};
