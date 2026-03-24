#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7D1331C413E60035.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1F3AC75B0FC46A6D_METHOD_1_37004957DE284AA9_OFFSET UNITYSDK_OFFSET(0x8B02650)
#define CLASS_1_1F3AC75B0FC46A6D_METHOD_1_393C25BF73575577_OFFSET UNITYSDK_OFFSET(0x8B02070)
#define CLASS_1_1F3AC75B0FC46A6D_METHOD_1_C1192407BE74F049_OFFSET UNITYSDK_OFFSET(0x8B024D0)

inline static constexpr unsigned int Class_1_1F3AC75B0FC46A6D_TypeDefinitionIndex = 53841;

class Class_1_1F3AC75B0FC46A6D : public ::System::Object
{
public:
	static ::System::Void Method_1_393C25BF73575577(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_1F3AC75B0FC46A6D_METHOD_1_393C25BF73575577_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_C1192407BE74F049(::Enum_3_7D1331C413E60035 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::Enum_3_7D1331C413E60035, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1F3AC75B0FC46A6D_METHOD_1_C1192407BE74F049_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_37004957DE284AA9(::Enum_3_7D1331C413E60035 a1)
	{
		return ((::System::String*(*)(::Enum_3_7D1331C413E60035))((::PBYTE)hIl2Cpp + CLASS_1_1F3AC75B0FC46A6D_METHOD_1_37004957DE284AA9_OFFSET))(a1);
	}
};
