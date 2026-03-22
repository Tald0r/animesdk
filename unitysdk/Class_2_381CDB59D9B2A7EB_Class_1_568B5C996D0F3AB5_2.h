#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_6;
class Class_0_16E4307DCC419505_7;
class Class_3_025FF4981524A424_458;
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_568B5C996D0F3AB5_2_METHOD_1_3919BF616F77F4FC_OFFSET UNITYSDK_OFFSET(0x7783A60)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_568B5C996D0F3AB5_2_METHOD_1_7E35F3A1E0331FD8_OFFSET UNITYSDK_OFFSET(0x7783AE0)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_568B5C996D0F3AB5_2__CTOR_OFFSET UNITYSDK_OFFSET(0x7783A50)

inline static constexpr unsigned int Class_2_381CDB59D9B2A7EB_Class_1_568B5C996D0F3AB5_2_TypeDefinitionIndex = 70456;

class Class_2_381CDB59D9B2A7EB_Class_1_568B5C996D0F3AB5_2 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>* Field_1_1; // 0x10
	::System::Action_2<::Class_3_025FF4981524A424_458*, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_568B5C996D0F3AB5_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3919BF616F77F4FC(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_6*>*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_568B5C996D0F3AB5_2_METHOD_1_3919BF616F77F4FC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7E35F3A1E0331FD8(::Class_0_16E4307DCC419505_7* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_568B5C996D0F3AB5_2_METHOD_1_7E35F3A1E0331FD8_OFFSET))(this, a1);
	}
};
