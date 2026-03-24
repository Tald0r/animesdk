#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_60DDD9C206686F44;
class Class_2_A8F5ABF31E066ED4;

#define CLASS_1_3CBC14188D0079E3_METHOD_1_B7765FB9F9161234_OFFSET UNITYSDK_OFFSET(0xB7E27B0)
#define CLASS_1_3CBC14188D0079E3_METHOD_1_BE0DF5D2AA19CFE5_OFFSET UNITYSDK_OFFSET(0xB7E25D0)
#define CLASS_1_3CBC14188D0079E3_METHOD_1_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xB7E2830)
#define CLASS_1_3CBC14188D0079E3__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E25C0)

inline static constexpr unsigned int Class_1_3CBC14188D0079E3_TypeDefinitionIndex = 50744;

class Class_1_3CBC14188D0079E3 : public ::System::Object
{
public:
	::Class_2_60DDD9C206686F44* Field_1_1; // 0x10
	::Class_2_A8F5ABF31E066ED4* Field_1_0; // 0x18
	::System::Boolean Field_1_3; // 0x20
	::System::Boolean Field_1_4; // 0x21
	::System::Boolean Field_1_5; // 0x22
	::System::Int32 Field_1_2; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CBC14188D0079E3__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BE0DF5D2AA19CFE5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_3CBC14188D0079E3_METHOD_1_BE0DF5D2AA19CFE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_B7765FB9F9161234(::Class_2_A8F5ABF31E066ED4* a1, ::Class_2_60DDD9C206686F44* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A8F5ABF31E066ED4*, ::Class_2_60DDD9C206686F44*))((::PBYTE)hIl2Cpp + CLASS_1_3CBC14188D0079E3_METHOD_1_B7765FB9F9161234_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3CBC14188D0079E3_METHOD_1_EBAC71FBE1837205_OFFSET))(this);
	}
};
