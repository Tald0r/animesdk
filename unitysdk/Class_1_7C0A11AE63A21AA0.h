#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D89CCC627A66D0AD;
class Class_2_DA8BF519212BAE65_Class_1_998CEE7420B4844C;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }

#define CLASS_1_7C0A11AE63A21AA0__CTOR_OFFSET UNITYSDK_OFFSET(0x97C2020)

inline static constexpr unsigned int Class_1_7C0A11AE63A21AA0_TypeDefinitionIndex = 80211;

class Class_1_7C0A11AE63A21AA0 : public ::System::Object
{
public:
	::System::Action_2<::Il2CppArray<::Class_2_D89CCC627A66D0AD*>*, ::System::UInt32>* Field_1_3; // 0x10
	::System::Func_1<::System::Boolean>* Field_1_4; // 0x18
	::System::Action_3<::System::UInt32, ::System::Boolean, ::System::Boolean>* Field_1_2; // 0x20
	::System::Func_2<::System::UInt32, ::Class_2_DA8BF519212BAE65_Class_1_998CEE7420B4844C*>* Field_1_6; // 0x28
	::System::Func_2<::System::UInt32, ::System::Boolean>* Field_1_8; // 0x30
	::System::Func_3<::Il2CppArray<::Class_2_D89CCC627A66D0AD*>*, ::System::UInt32, ::System::Boolean>* Field_1_7; // 0x38
	::System::Func_2<::System::UInt32, ::System::Boolean>* Field_1_5; // 0x40
	::System::Boolean Field_1_1; // 0x48
	::System::Boolean Field_1_0; // 0x49
	::System::Boolean Field_1_9; // 0x4A
	::System::Int32 Field_1_10; // 0x4C
	::System::Int32 Field_1_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7C0A11AE63A21AA0__CTOR_OFFSET))(this);
	}
};
