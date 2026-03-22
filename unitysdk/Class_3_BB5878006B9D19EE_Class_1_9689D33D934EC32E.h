#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_20;
class Class_1_9BCD181B68F06424;
namespace Cysharp::Threading::Tasks { template <typename T> class UniTaskCompletionSource_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_BB5878006B9D19EE_CLASS_1_9689D33D934EC32E_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x6933930)
#define CLASS_3_BB5878006B9D19EE_CLASS_1_9689D33D934EC32E__CTOR_OFFSET UNITYSDK_OFFSET(0x6933850)

inline static constexpr unsigned int Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E_TypeDefinitionIndex = 75002;

class Class_3_BB5878006B9D19EE_Class_1_9689D33D934EC32E : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource_1<::System::Int32>* Field_1_3; // 0x10
	::Class_1_9BCD181B68F06424* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_6; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Boolean>* Field_1_7; // 0x28
	::Class_0_16E4307DCC419505_20* Field_1_0; // 0x30
	::Foundation::ViewObject::ViewObjectHandle Field_1_1; // 0x38
	::Class_3_BB5878006B9D19EE_Enum_3_3EA7493A9A9EFC83 Field_1_4; // 0x48
	::System::Int32 Field_1_2; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_CLASS_1_9689D33D934EC32E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BB5878006B9D19EE_CLASS_1_9689D33D934EC32E_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};
