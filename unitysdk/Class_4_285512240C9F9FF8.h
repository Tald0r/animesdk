#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C6CB00B19F1FE9BC.h"
#include "unitysdk/Class_3_DCB7F8B839F0C44B_Struct_2_A6681D6A96AB8E99.h"
#include "unitysdk/System/Nullable_1.h"

class Class_3_DCB7F8B839F0C44B;
namespace System { class Action; }
namespace System { class String; }

#define CLASS_4_285512240C9F9FF8_METHOD_4_0CC4BC19C602BCD0_OFFSET UNITYSDK_OFFSET(0x16969320)
#define CLASS_4_285512240C9F9FF8_METHOD_4_128774387667156B_OFFSET UNITYSDK_OFFSET(0x169692E0)
#define CLASS_4_285512240C9F9FF8_METHOD_4_673C71724813F13B_OFFSET UNITYSDK_OFFSET(0x16969360)
#define CLASS_4_285512240C9F9FF8_METHOD_4_6AFDC50424099C5A_OFFSET UNITYSDK_OFFSET(0x16969490)
#define CLASS_4_285512240C9F9FF8_METHOD_4_74995BC505CA45B5_OFFSET UNITYSDK_OFFSET(0x16969910)
#define CLASS_4_285512240C9F9FF8__CTOR_OFFSET UNITYSDK_OFFSET(0x16969400)

inline static constexpr unsigned int Class_4_285512240C9F9FF8_TypeDefinitionIndex = 14397;

class Class_4_285512240C9F9FF8 : public ::Class_3_C6CB00B19F1FE9BC<::Class_3_DCB7F8B839F0C44B*>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_285512240C9F9FF8__CTOR_OFFSET))(this);
	}

	::System::String* Method_4_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_285512240C9F9FF8_METHOD_4_128774387667156B_OFFSET))(this);
	}

	::System::Void Method_4_0CC4BC19C602BCD0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_285512240C9F9FF8_METHOD_4_0CC4BC19C602BCD0_OFFSET))(this);
	}

	::System::Void Method_4_673C71724813F13B(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_4_285512240C9F9FF8_METHOD_4_673C71724813F13B_OFFSET))(this, a1);
	}

	::System::String* Method_4_6AFDC50424099C5A(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_285512240C9F9FF8_METHOD_4_6AFDC50424099C5A_OFFSET))(this, a1);
	}

	::System::Nullable_1<::Class_3_DCB7F8B839F0C44B_Struct_2_A6681D6A96AB8E99> Method_4_74995BC505CA45B5(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Nullable_1<::Class_3_DCB7F8B839F0C44B_Struct_2_A6681D6A96AB8E99>(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_4_285512240C9F9FF8_METHOD_4_74995BC505CA45B5_OFFSET))(this, a1, a2);
	}
};
