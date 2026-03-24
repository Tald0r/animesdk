#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ABB13E12DFC246CE_CLASS_1_BD985DB319B02C3F_METHOD_1_EA95C7FC2C73A09F_OFFSET UNITYSDK_OFFSET(0x9B66050)
#define CLASS_1_ABB13E12DFC246CE_CLASS_1_BD985DB319B02C3F__CTOR_OFFSET UNITYSDK_OFFSET(0x9B66040)

inline static constexpr unsigned int Class_1_ABB13E12DFC246CE_Class_1_BD985DB319B02C3F_TypeDefinitionIndex = 65566;

class Class_1_ABB13E12DFC246CE_Class_1_BD985DB319B02C3F : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* Field_1_3; // 0x18
	::System::Threading::CancellationToken Field_1_0; // 0x20
	::System::String* Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_CLASS_1_BD985DB319B02C3F__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>> Method_1_EA95C7FC2C73A09F()
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<::System::Boolean, ::System::String*>>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_ABB13E12DFC246CE_CLASS_1_BD985DB319B02C3F_METHOD_1_EA95C7FC2C73A09F_OFFSET))(this);
	}
};
