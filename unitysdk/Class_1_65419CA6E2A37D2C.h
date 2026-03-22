#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_9EC844EFE0300763.h"
#include "unitysdk/System/Object.h"

class Class_1_859AC9B9C1B970A4;
class Class_1_AA2FAB933F36B228;
class Class_3_8A4D97143C80812C;
class Class_3_8A4D97143C80812C_1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_65419CA6E2A37D2C_METHOD_1_433DD2C2F7417F16_OFFSET UNITYSDK_OFFSET(0x833C300)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x833C280)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x833B980)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_CD64D66BD4CBB3D8_OFFSET UNITYSDK_OFFSET(0x833B990)
#define CLASS_1_65419CA6E2A37D2C_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x833C2F0)
#define CLASS_1_65419CA6E2A37D2C__CTOR_OFFSET UNITYSDK_OFFSET(0x833B940)

inline static constexpr unsigned int Class_1_65419CA6E2A37D2C_TypeDefinitionIndex = 53221;

class Class_1_65419CA6E2A37D2C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_AA2FAB933F36B228* Field_1_1; // 0x18
	::Class_3_8A4D97143C80812C_1* Field_1_3; // 0x20
	::Class_3_8A4D97143C80812C* Field_1_2; // 0x28
	::System::Boolean Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_1_CD64D66BD4CBB3D8(::Class_1_859AC9B9C1B970A4* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_9EC844EFE0300763>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_859AC9B9C1B970A4*, ::System::Action*, ::System::Action_1<::Struct_2_9EC844EFE0300763>*))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_CD64D66BD4CBB3D8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_433DD2C2F7417F16(::Class_1_859AC9B9C1B970A4* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_9EC844EFE0300763>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_859AC9B9C1B970A4*, ::System::Action*, ::System::Action_1<::Struct_2_9EC844EFE0300763>*))((::PBYTE)hIl2Cpp + CLASS_1_65419CA6E2A37D2C_METHOD_1_433DD2C2F7417F16_OFFSET))(this, a1, a2, a3);
	}
};
