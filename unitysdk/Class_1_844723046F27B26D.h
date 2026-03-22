#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_5B421F8FFABD4CA3_2.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_188;
class Class_1_AA2FAB933F36B228;
class Class_3_8A4D97143C80812C_1;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_844723046F27B26D_METHOD_1_9E724FDAD4AEFB0D_OFFSET UNITYSDK_OFFSET(0x8CCAC50)
#define CLASS_1_844723046F27B26D__CTOR_OFFSET UNITYSDK_OFFSET(0x8CCAC10)

inline static constexpr unsigned int Class_1_844723046F27B26D_TypeDefinitionIndex = 70117;

class Class_1_844723046F27B26D : public ::System::Object
{
public:
	::Class_3_8A4D97143C80812C_1* Field_1_2; // 0x10
	::System::String* Field_1_0; // 0x18
	::Class_1_AA2FAB933F36B228* Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_9E724FDAD4AEFB0D(::Class_0_16E4307DCC419505_188* a1, ::System::Action* a2, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_188*, ::System::Action*, ::System::Action_1<::Struct_2_5B421F8FFABD4CA3_2>*))((::PBYTE)hIl2Cpp + CLASS_1_844723046F27B26D_METHOD_1_9E724FDAD4AEFB0D_OFFSET))(this, a1, a2, a3);
	}
};
