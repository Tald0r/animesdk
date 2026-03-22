#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_6007422A30395C76.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_69CA67296A38D6EE_METHOD_1_2266AC596FF04179_OFFSET UNITYSDK_OFFSET(0x799F7A0)
#define CLASS_1_69CA67296A38D6EE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x799FB50)
#define CLASS_1_69CA67296A38D6EE_METHOD_1_43CB3F4F72E9EC39_OFFSET UNITYSDK_OFFSET(0x799F630)
#define CLASS_1_69CA67296A38D6EE_METHOD_1_5028A830A52CEAEB_OFFSET UNITYSDK_OFFSET(0x799F440)
#define CLASS_1_69CA67296A38D6EE_METHOD_1_9B4A9443E153B63D_OFFSET UNITYSDK_OFFSET(0x799F9B0)
#define CLASS_1_69CA67296A38D6EE_METHOD_1_C04C10246EBC8F79_OFFSET UNITYSDK_OFFSET(0x799F560)
#define CLASS_1_69CA67296A38D6EE__CTOR_OFFSET UNITYSDK_OFFSET(0x799F340)

inline static constexpr unsigned int Class_1_69CA67296A38D6EE_TypeDefinitionIndex = 73616;

class Class_1_69CA67296A38D6EE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::Struct_2_6007422A30395C76>*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_3; // 0x18
	::System::UInt32 Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5028A830A52CEAEB(::System::Int32 a1, ::Il2CppArray<::Struct_2_6007422A30395C76>* a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::Struct_2_6007422A30395C76>*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE_METHOD_1_5028A830A52CEAEB_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C04C10246EBC8F79(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE_METHOD_1_C04C10246EBC8F79_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_43CB3F4F72E9EC39(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE_METHOD_1_43CB3F4F72E9EC39_OFFSET))(this, a1);
	}

	::Struct_2_6007422A30395C76 Method_1_2266AC596FF04179(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::Struct_2_6007422A30395C76(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE_METHOD_1_2266AC596FF04179_OFFSET))(this, a1, a2, a3);
	}

	::Il2CppArray<::Struct_2_6007422A30395C76>* Method_1_9B4A9443E153B63D(::System::Int32 a1)
	{
		return ((::Il2CppArray<::Struct_2_6007422A30395C76>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE_METHOD_1_9B4A9443E153B63D_OFFSET))(this, a1);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_69CA67296A38D6EE_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}
};
