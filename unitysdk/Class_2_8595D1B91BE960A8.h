#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C7E6991E78CB1409.h"

namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Timeline { class INapNotifyData; }

#define CLASS_2_8595D1B91BE960A8_METHOD_2_A4672CEB770E58DE_OFFSET UNITYSDK_OFFSET(0x99DC480)
#define CLASS_2_8595D1B91BE960A8_METHOD_2_E4D16F178EB4AFF2_OFFSET UNITYSDK_OFFSET(0x99DC600)
#define CLASS_2_8595D1B91BE960A8__CTOR_OFFSET UNITYSDK_OFFSET(0x99DC5F0)

inline static constexpr unsigned int Class_2_8595D1B91BE960A8_TypeDefinitionIndex = 51264;

class Class_2_8595D1B91BE960A8 : public ::Class_1_C7E6991E78CB1409
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8595D1B91BE960A8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A4672CEB770E58DE(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_8595D1B91BE960A8_METHOD_2_A4672CEB770E58DE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E4D16F178EB4AFF2(::System::Object* a1, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Action_1<::UnityEngine::Timeline::INapNotifyData*>*))((::PBYTE)hIl2Cpp + CLASS_2_8595D1B91BE960A8_METHOD_2_E4D16F178EB4AFF2_OFFSET))(this, a1, a2);
	}
};
