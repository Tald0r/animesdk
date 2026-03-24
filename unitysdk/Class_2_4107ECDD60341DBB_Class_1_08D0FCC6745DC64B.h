#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_4107ECDD60341DBB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_4107ECDD60341DBB_CLASS_1_08D0FCC6745DC64B_METHOD_1_540DBFD155744CA2_OFFSET UNITYSDK_OFFSET(0x6AC9B90)
#define CLASS_2_4107ECDD60341DBB_CLASS_1_08D0FCC6745DC64B__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC9B80)

inline static constexpr unsigned int Class_2_4107ECDD60341DBB_Class_1_08D0FCC6745DC64B_TypeDefinitionIndex = 78461;

class Class_2_4107ECDD60341DBB_Class_1_08D0FCC6745DC64B : public ::System::Object
{
public:
	::System::Action_1<::System::ValueTuple_2<::System::Int32, ::System::String*>>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::Class_2_4107ECDD60341DBB* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_08D0FCC6745DC64B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_540DBFD155744CA2(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4107ECDD60341DBB_CLASS_1_08D0FCC6745DC64B_METHOD_1_540DBFD155744CA2_OFFSET))(this, a1);
	}
};
