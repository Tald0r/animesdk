#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_679286007DE1DCF6_Struct_2_B60FA2EFE7D8E41D.h"
#include "unitysdk/Struct_2_5CD23A6C3B64A60B.h"
#include "unitysdk/Struct_2_9E4D1804C70A9D58.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_1_679286007DE1DCF6_METHOD_1_1726533A07BD07D9_1_OFFSET UNITYSDK_OFFSET(0x93975A0)
#define CLASS_1_679286007DE1DCF6_METHOD_1_1726533A07BD07D9_OFFSET UNITYSDK_OFFSET(0x9397320)
#define CLASS_1_679286007DE1DCF6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9396DE0)
#define CLASS_1_679286007DE1DCF6_METHOD_1_4053AA22BA07836C_OFFSET UNITYSDK_OFFSET(0x93974C0)
#define CLASS_1_679286007DE1DCF6_METHOD_1_5AE69B3A632C8B97_OFFSET UNITYSDK_OFFSET(0x9397590)
#define CLASS_1_679286007DE1DCF6_METHOD_1_E3DC5908541E2F14_OFFSET UNITYSDK_OFFSET(0x9396EA0)
#define CLASS_1_679286007DE1DCF6__CTOR_OFFSET UNITYSDK_OFFSET(0x9397440)

inline static constexpr unsigned int Class_1_679286007DE1DCF6_TypeDefinitionIndex = 69769;

class Class_1_679286007DE1DCF6 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Object* Method_1_E3DC5908541E2F14(::Struct_2_9E4D1804C70A9D58 a1, ::Struct_2_5CD23A6C3B64A60B& a2)
	{
		return ((::System::Object*(*)(::PVOID, ::Struct_2_9E4D1804C70A9D58, ::Struct_2_5CD23A6C3B64A60B&))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6_METHOD_1_E3DC5908541E2F14_OFFSET))(this, a1, a2);
	}

	::System::Object* Method_1_1726533A07BD07D9(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6_METHOD_1_1726533A07BD07D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_4053AA22BA07836C(::System::String* a1, ::System::Object* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6_METHOD_1_4053AA22BA07836C_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* Method_1_5AE69B3A632C8B97()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6_METHOD_1_5AE69B3A632C8B97_OFFSET))(this);
	}

	::System::Object* Method_1_1726533A07BD07D9_1(::System::String* a1)
	{
		return ((::System::Object*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_679286007DE1DCF6_METHOD_1_1726533A07BD07D9_1_OFFSET))(this, a1);
	}
};
