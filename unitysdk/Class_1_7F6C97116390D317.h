#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7F6C97116390D317_METHOD_1_488EB5F0657579FA_OFFSET UNITYSDK_OFFSET(0x8190470)
#define CLASS_1_7F6C97116390D317_METHOD_1_C1C9B069EF635304_OFFSET UNITYSDK_OFFSET(0x8190270)
#define CLASS_1_7F6C97116390D317_METHOD_1_D4550D9E4433D1A0_OFFSET UNITYSDK_OFFSET(0x8190310)
#define CLASS_1_7F6C97116390D317_METHOD_1_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x818FD60)
#define CLASS_1_7F6C97116390D317__CCTOR_OFFSET UNITYSDK_OFFSET(0x818FCC0)

inline static constexpr unsigned int Class_1_7F6C97116390D317_TypeDefinitionIndex = 69902;

class Class_1_7F6C97116390D317 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7F6C97116390D317_TypeDefinitionIndex)->GetStaticField(0x2A130);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_DF3C54A5ADEABAF1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_DF3C54A5ADEABAF1_OFFSET))();
	}

	static ::System::Void Method_1_D4550D9E4433D1A0(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_D4550D9E4433D1A0_OFFSET))(a1);
	}

	static ::Il2CppArray<::System::String*>* Method_1_C1C9B069EF635304(::System::String* a1)
	{
		return ((::Il2CppArray<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_C1C9B069EF635304_OFFSET))(a1);
	}

	static ::System::Void Method_1_488EB5F0657579FA(::System::String* a1, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* a2)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_7F6C97116390D317_METHOD_1_488EB5F0657579FA_OFFSET))(a1, a2);
	}
};
