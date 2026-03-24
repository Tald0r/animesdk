#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"

class Class_2_208CC9941471731A_287;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T1, typename T2> class Class_1_D4CCA64101A9C471;

#define CLASS_2_7E1416FAF5CC0CBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B11810)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_37D62761648E7B38_OFFSET UNITYSDK_OFFSET(0x9B12200)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_3EA9DCA91F2FB684_OFFSET UNITYSDK_OFFSET(0x9B12040)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x9B11B20)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_736CDB7664610313_OFFSET UNITYSDK_OFFSET(0x9B11F00)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_7D9C7CE03C4C2C10_OFFSET UNITYSDK_OFFSET(0x9B11DC0)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x9B11B90)
#define CLASS_2_7E1416FAF5CC0CBD_METHOD_2_AA457928CDE4BCD4_OFFSET UNITYSDK_OFFSET(0x9B11A50)
#define CLASS_2_7E1416FAF5CC0CBD_ONCREATE_OFFSET UNITYSDK_OFFSET(0x9B117B0)
#define CLASS_2_7E1416FAF5CC0CBD__CTOR_OFFSET UNITYSDK_OFFSET(0x9B11950)

inline static constexpr unsigned int Class_2_7E1416FAF5CC0CBD_TypeDefinitionIndex = 39534;

class Class_2_7E1416FAF5CC0CBD : public ::Foundation::SingletonDisposable_1<::Class_2_7E1416FAF5CC0CBD*>
{
public:
	// static const ::System::UInt64 Field_2_0 = 0xCC6E0ACE28621F8C; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt64>* Field_2_1; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_208CC9941471731A_287*>* Field_2_2; // 0x18
	::System::Boolean Field_2_3; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_AA457928CDE4BCD4(::System::UInt32 a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_AA457928CDE4BCD4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Boolean Method_2_7D9C7CE03C4C2C10(::System::String* a1, ::Class_2_208CC9941471731A_287*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::Class_2_208CC9941471731A_287*&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_7D9C7CE03C4C2C10_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_736CDB7664610313(::System::String* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_736CDB7664610313_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Boolean Method_2_3EA9DCA91F2FB684(::System::String* a1, ::System::UInt64& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt64&))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_3EA9DCA91F2FB684_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_37D62761648E7B38(::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::UInt64>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_D4CCA64101A9C471<::System::UInt32, ::System::UInt64>*))((::PBYTE)hIl2Cpp + CLASS_2_7E1416FAF5CC0CBD_METHOD_2_37D62761648E7B38_OFFSET))(this, a1);
	}
};
