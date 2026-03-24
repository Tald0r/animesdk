#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_4;
class Class_0_16E4307DCC419505_5;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F_METHOD_1_873EE415AE502589_OFFSET UNITYSDK_OFFSET(0xA267980)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F_METHOD_1_EC073B6268163ED6_1_OFFSET UNITYSDK_OFFSET(0xA2679F0)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F_METHOD_1_EC073B6268163ED6_OFFSET UNITYSDK_OFFSET(0xA2679E0)
#define CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F__CTOR_OFFSET UNITYSDK_OFFSET(0xA267970)

inline static constexpr unsigned int Class_2_381CDB59D9B2A7EB_Class_1_21CBF195A18FDE1F_TypeDefinitionIndex = 70006;

class Class_2_381CDB59D9B2A7EB_Class_1_21CBF195A18FDE1F : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10
	::System::Action_1<::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*>* Field_1_2; // 0x18
	::System::Action* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_873EE415AE502589(::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_4*>*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F_METHOD_1_873EE415AE502589_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F_METHOD_1_EC073B6268163ED6_OFFSET))(this, a1);
	}

	::System::Void Method_1_EC073B6268163ED6_1(::Class_0_16E4307DCC419505_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_5*))((::PBYTE)hIl2Cpp + CLASS_2_381CDB59D9B2A7EB_CLASS_1_21CBF195A18FDE1F_METHOD_1_EC073B6268163ED6_1_OFFSET))(this, a1);
	}
};
