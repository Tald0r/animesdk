#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6007422A30395C76.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D98B62A0280EA397_METHOD_1_2266AC596FF04179_OFFSET UNITYSDK_OFFSET(0x8A993F0)
#define CLASS_1_D98B62A0280EA397_METHOD_1_2E25047ACA4F5960_OFFSET UNITYSDK_OFFSET(0x8A997E0)
#define CLASS_1_D98B62A0280EA397_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x8A99720)
#define CLASS_1_D98B62A0280EA397_METHOD_1_43CB3F4F72E9EC39_OFFSET UNITYSDK_OFFSET(0x8A991B0)
#define CLASS_1_D98B62A0280EA397_METHOD_1_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x8A99320)
#define CLASS_1_D98B62A0280EA397_METHOD_1_D1D0B6D68B5166E2_OFFSET UNITYSDK_OFFSET(0x8A99600)
#define CLASS_1_D98B62A0280EA397__CTOR_OFFSET UNITYSDK_OFFSET(0x8A990B0)

inline static constexpr unsigned int Class_1_D98B62A0280EA397_TypeDefinitionIndex = 73082;

class Class_1_D98B62A0280EA397 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Struct_2_6007422A30395C76>*>* Field_1_2; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_43CB3F4F72E9EC39(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397_METHOD_1_43CB3F4F72E9EC39_OFFSET))(this, a1);
	}

	::Struct_2_6007422A30395C76 Method_1_2266AC596FF04179(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_6007422A30395C76(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397_METHOD_1_2266AC596FF04179_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D1D0B6D68B5166E2(::System::Int32 a1, ::Il2CppArray<::Struct_2_6007422A30395C76>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_6007422A30395C76>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397_METHOD_1_D1D0B6D68B5166E2_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397_METHOD_1_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::Il2CppArray<::Struct_2_6007422A30395C76>* Method_1_2E25047ACA4F5960(::System::Int32 a1)
	{
		return ((::Il2CppArray<::Struct_2_6007422A30395C76>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D98B62A0280EA397_METHOD_1_2E25047ACA4F5960_OFFSET))(this, a1);
	}
};
