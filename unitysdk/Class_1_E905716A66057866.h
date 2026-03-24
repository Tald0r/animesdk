#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_1_E905716A66057866_METHOD_1_53ACAFDC46263320_OFFSET UNITYSDK_OFFSET(0x10B80850)
#define CLASS_1_E905716A66057866_METHOD_1_86026B47A3027B67_OFFSET UNITYSDK_OFFSET(0x10B80430)
#define CLASS_1_E905716A66057866_METHOD_1_8898213C193971FB_OFFSET UNITYSDK_OFFSET(0x10B80AB0)
#define CLASS_1_E905716A66057866_METHOD_1_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x10B804F0)
#define CLASS_1_E905716A66057866_METHOD_1_C1C9B069EF635304_OFFSET UNITYSDK_OFFSET(0x10B807B0)
#define CLASS_1_E905716A66057866__CCTOR_OFFSET UNITYSDK_OFFSET(0x10B80360)

inline static constexpr unsigned int Class_1_E905716A66057866_TypeDefinitionIndex = 63808;

class Class_1_E905716A66057866 : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::HashSet_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E905716A66057866_TypeDefinitionIndex)->GetStaticField(0x3C960);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_86026B47A3027B67()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_86026B47A3027B67_OFFSET))();
	}

	static ::System::Void Method_1_BF5E2DCAE0BF038A()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_BF5E2DCAE0BF038A_OFFSET))();
	}

	static ::Il2CppArray<::System::String*>* Method_1_C1C9B069EF635304(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_C1C9B069EF635304_OFFSET))(a1);
	}

	static ::System::Void Method_1_53ACAFDC46263320(::System::String* a1, ::System::Collections::Generic::HashSet_1<::System::String*>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_53ACAFDC46263320_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8898213C193971FB(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E905716A66057866_METHOD_1_8898213C193971FB_OFFSET))(a1);
	}
};
