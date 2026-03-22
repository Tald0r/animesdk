#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_76CCAEE20B3AE57C.h"
#include "unitysdk/System/Object.h"

class Class_2_9218549D1694BC30;
class Class_3_32CD58E95ADFF8F5_57;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CLASS_2_9218549D1694BC30_CLASS_1_BE592755EFBFC383_METHOD_1_1192BDF8FF0D8F9C_OFFSET UNITYSDK_OFFSET(0xACAAC80)
#define CLASS_2_9218549D1694BC30_CLASS_1_BE592755EFBFC383__CTOR_OFFSET UNITYSDK_OFFSET(0xACAAC70)

inline static constexpr unsigned int Class_2_9218549D1694BC30_Class_1_BE592755EFBFC383_TypeDefinitionIndex = 40423;

class Class_2_9218549D1694BC30_Class_1_BE592755EFBFC383 : public ::System::Object
{
public:
	::Class_2_9218549D1694BC30* Field_1_0; // 0x10
	::System::Collections::Generic::IEnumerable_1<::Struct_2_76CCAEE20B3AE57C>* Field_1_1; // 0x18
	::System::Action* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_BE592755EFBFC383__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1192BDF8FF0D8F9C(::Class_3_32CD58E95ADFF8F5_57* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_32CD58E95ADFF8F5_57*))((::PBYTE)hIl2Cpp + CLASS_2_9218549D1694BC30_CLASS_1_BE592755EFBFC383_METHOD_1_1192BDF8FF0D8F9C_OFFSET))(this, a1);
	}
};
