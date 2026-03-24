#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace System { class String; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define CLASS_2_4107ECDD60341DBB_CLASS_1_6CD894AF6E5A75C0_METHOD_1_14938E70B30BB85F_OFFSET UNITYSDK_OFFSET(0x673FE50)
#define CLASS_2_4107ECDD60341DBB_CLASS_1_6CD894AF6E5A75C0_METHOD_1_C782C60E11964C7F_OFFSET UNITYSDK_OFFSET(0x673FEB0)
#define CLASS_2_4107ECDD60341DBB_CLASS_1_6CD894AF6E5A75C0__CTOR_OFFSET UNITYSDK_OFFSET(0x673FE40)

inline static constexpr unsigned int Class_2_4107ECDD60341DBB_Class_1_6CD894AF6E5A75C0_TypeDefinitionIndex = 78470;

class Class_2_4107ECDD60341DBB_Class_1_6CD894AF6E5A75C0 : public ::System::Object
{
public:
	::System::Threading::CancellationToken Field_1_1; // 0x10
	::System::Threading::Tasks::TaskCompletionSource_1<::System::String*>* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_6CD894AF6E5A75C0__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_14938E70B30BB85F(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_6CD894AF6E5A75C0_METHOD_1_14938E70B30BB85F_OFFSET))(this, a1);
	}

	::System::Void Method_1_C782C60E11964C7F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_6CD894AF6E5A75C0_METHOD_1_C782C60E11964C7F_OFFSET))(this);
	}
};
